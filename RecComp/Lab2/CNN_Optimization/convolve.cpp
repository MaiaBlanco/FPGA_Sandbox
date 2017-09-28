/****************************************************************
 * Copyright (c) 2017, James C. Hoe, CMU
 * All rights reserved.

 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:

 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.

 * 2. Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.

 * The views and conclusions contained in the software and
 * documentation are those of the authors and should not be
 * interpreted as representing official policies, either expressed or
 * implied, of the FreeBSD Project.
 ****************************************************************/

/*
 * CMU 18643 Fall 2017 Lab Exercise
 *
 * The implementations in this file are based on Zhang'15:
 *    C. Zhang, et al., "Optimizing FPGA-based Accelerator 
 *    Design for Deep Convolutional Neural Networks," FPGA, 2015.
 * Refer to Zhang'15 for discussion of the algorithms
 */

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <sys/time.h>

#include "instance.h"
#include "convolve.h"
#include "kernel.h"
#include "data.h"

/****************************************************************
 * Reference convolution layer implementation based on Code 1:
 *    C. Zhang, et al., "Optimizing FPGA-based Accelerator 
 *    Design for Deep Convolutional Neural Networks," FPGA, 2015.
 ****************************************************************/
void ZhangIsfpga15_1(DATA_T *input, DATA_T *output, DATA_T *weights) {
  unsigned long row, col, to, ti;
  
  for(row=0; row<R_ofm; row++) {
    for(col=0; col<C_ofm; col++) {
      for(to=0; to<M_ofm; to++) {
	for(ti=0; ti<N_ifm; ti++) {
	  unsigned long i, j;
	  for(i=0; i<K_wts; i++) {
	    for(j=0; j<K_wts; j++) {
	      ARRAY(output,0,to,row,col,0,M_ofm,R_ofm,C_ofm) +=
		ARRAY(weights,to,ti,i,j,M_ofm,N_ifm,K_wts,K_wts)*
		ARRAY(input,0,ti,S_wts*row+i,S_wts*col+j,0,N_ifm,R_ifm,C_ifm);
	    } 
	  } 
	} 
      } 
    } 
  }
}


/****************************************************************
 * Blocked (without copying) convolution layer implementation 
 * based on Figure 5:
 *    C. Zhang, et al., "Optimizing FPGA-based Accelerator 
 *    Design for Deep Convolutional Neural Networks," FPGA, 2015.
 ****************************************************************/
void ZhangIsfpga15_2(DATA_T *input, DATA_T *output, DATA_T *weights) {
  unsigned long row, col, to, ti;
  
  for(row=0; row<R_ofm; row+=Tr) {
    for(col=0; col<C_ofm ; col+=Tc) {
      for(to=0; to<M_ofm; to+=Tm) {
	for(ti=0; ti<N_ifm; ti+=Tn) {
	  unsigned long trr, tcc, too, tii;

	  // The comments below are from Zhang'15 verbatim.
          // They are realized in ZhangIsfpga15_3() next

	  //  -- load output feature maps
	  //  -- load weights
	  //  -- load input feature maps

	  for(trr=row;trr<MIN(row+Tr,R_ofm);trr++){
	    for(tcc=col;tcc<MIN(col+Tc,C_ofm);tcc++){
	      for(too=to;too<MIN(to+Tm,M_ofm);too++){
		for(tii=ti;tii<MIN(ti+Tn,N_ifm);tii++){
		  unsigned long i, j;
		  for(i=0;i<K_wts;i++){
		    for(j=0;j<K_wts;j++){
		      ARRAY(output,0,too,trr,tcc,0,M_ofm,R_ofm,C_ofm)+=
			ARRAY(weights,too,tii,i,j,M_ofm,N_ifm,K_wts,K_wts)*
			ARRAY(input,0,tii,S_wts*trr+i,S_wts*tcc+j,0,N_ifm,R_ifm,C_ifm);
		    }
		  }
		}
	      }
	    }
	  }

	  // -- store output feature maps

	} 
      } 
    } 
  }
}


/****************************************************************
 * Fully implemented blocked convolution layer implementation 
 * (with local memory promotion) based on Figure 9:
 *    C. Zhang, et al., "Optimizing FPGA-based Accelerator 
 *    Design for Deep Convolutional Neural Networks," FPGA, 2015.
 ****************************************************************/


/*
 * Local buffers used by convolve_kernel().  In HLS, these become
 * blockRAMs holding active regions of input/output feature maps
 * and weights
 */
DATA_T BufI[Tn][Tr*S_wts+K_wts-1][Tc*S_wts+K_wts-1];
DATA_T BufO[Tm][Tr][Tc];
DATA_T BufW[Tm][Tn][K_wts][K_wts];

void ZhangIsfpga15_3(DATA_T *input, DATA_T *output, DATA_T *weights) {
  unsigned long row, col, to, ti;

  for(row=0; row<R_ofm; row+=Tr) {
    for(col=0; col<C_ofm ; col+=Tc) {
      for(to=0; to<M_ofm; to+=Tm) {
	// temporary versions of incremented indices; 
        // same usage as in ZhangIsfpga_2()
	unsigned long trr, tcc, too, tii;
	
#if 0
	{
	  /* 
	   * load active intermedaite output feature map into local
           *  buffer
	   */

	  // indices internal to the block: count from 0  
	  unsigned long ioo, icc, irr; 
	  
	  for(too=to,ioo=0;too<MIN(to+Tm,M_ofm);too++,ioo++){
	    for(trr=row,irr=0;trr<MIN(row+Tr,R_ofm);trr++,irr++){
	      for(tcc=col,icc=0;tcc<MIN(col+Tc,C_ofm);tcc++,icc++){
		BufO[ioo][irr][icc]=ARRAY(output,0,too,trr,tcc,0,M_ofm,R_ofm,C_ofm);
	      }
	    }
	  }
	}
#else
	// only need to zero BufO in this loop ordering
	{
	  // indices internal to the block: count from 0  
	  unsigned long ioo, icc, irr; 

	  for(ioo=0;ioo<Tm;ioo++) {
	    for(irr=0;irr<Tr;irr++) {
	      for(icc=0;icc<Tc;icc++) {
		BufO[ioo][irr][icc]=0;
	      }
	    }
	  }
	}
#endif	
	for(ti=0; ti<N_ifm; ti+=Tn) {
	  {
	    /* 
	     * load active input feature map into local buffer
	     */

	    // indices internal to the block: count from 0  
	    unsigned long irr, icc, iii;

	    // incremented temporary indices for input row and col
	    unsigned long xrr, xcc;

	    for(tii=ti,iii=0;tii<MIN(ti+Tn,N_ifm);tii++,iii++){
	      for(xrr=row*S_wts,irr=0;xrr<(MIN(row+Tr,R_ofm)*S_wts+K_wts-1);xrr++,irr++){
		for(xcc=col*S_wts,icc=0;xcc<(MIN(col+Tc,C_ofm)*S_wts+K_wts-1);xcc++,icc++){
		  BufI[iii][irr][icc]=ARRAY(input,0,tii,xrr,xcc,0,N_ifm,R_ifm,C_ifm);
		}
	      }
	    }
	  }
	  
	  
	  {
	    /* 
	     * load active weights into local buffer 
	     */

	    // indices internal to the block: count from 0 
	    unsigned long ioo, iii, irr, icc;
	    
	    for(too=to,ioo=0;too<MIN(to+Tm,M_ofm);too++,ioo++){
	      for(tii=ti,iii=0;tii<MIN(ti+Tn,N_ifm);tii++,iii++){
		for(irr=0;irr<K_wts;irr++) {
		  for(icc=0;icc<K_wts;icc++) { 
		    BufW[ioo][iii][irr][icc]=ARRAY(weights,too,tii,irr,icc,M_ofm,N_ifm,K_wts,K_wts);
		  }
		}
	      }
	      
	      /* write 0s into over-run regions at the end;
               * this way convolve_kernel() accumulates correctly
               * without needing a special case */
	      if (iii<Tn) {
		for(;iii<Tn;iii++) {
		  for(irr=0;irr<K_wts;irr++) {
		    for(icc=0;icc<K_wts;icc++) { 
		      BufW[ioo][iii][irr][icc]=0;
		    }
		  }
		}
	      }
	    }
	  }

	  /*
	   * This is the kernel to be implemented on the fabric using
	   * HLS.
	   */
	  convolve_kernel(BufW, BufI, BufO);
	}
	
	{
	  /* 
	   * unload finished active intermedaite output feature map
	   * from local to full buffer
	   */

	  // indices internal to the block: count from 0 
	  unsigned long ioo, icc, irr;

	  for(too=to,ioo=0;too<MIN(to+Tm,M_ofm);too++,ioo++){
	    for(trr=row,irr=0;trr<MIN(row+Tr,R_ofm);trr++,irr++){
	      for(tcc=col,icc=0;tcc<MIN(col+Tc,C_ofm);tcc++,icc++){
		ARRAY(output,0,too,trr,tcc,0,M_ofm,R_ofm,C_ofm)=BufO[ioo][irr][icc];
	      }
	    }
	  }
	}
      }
    } 
  }
}

