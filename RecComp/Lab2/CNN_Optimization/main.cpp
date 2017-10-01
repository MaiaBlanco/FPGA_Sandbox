//#define NO_CHECKING   // uncomment to skip checking 
#define NO_TIMING  // uncomment to skip timing
//#define PRINTING    // uncomment to print input and output

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
 * Top-level "test-bench" for the convolution layer implementation.
 * main() (1) computes a reference results; (2) times the
 * implementation; (3) optonally printout the input and output; (4)
 * verify the implementation output against the reference output.
 */

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <sys/time.h>

#include "instance.h"
#include "data.h"
#include "convolve.h"
#include "kernel.h"

/*
 * Input/output and weights.
 */
float fp_input[N_ifm*R_ifm*C_ifm];
float fp_output[M_ofm*R_ofm*C_ofm];
float fp_weights[M_ofm*N_ifm*K_wts*K_wts];

DATA_T dt_input[N_ifm*R_ifm*C_ifm];
DATA_T dt_output[M_ofm*R_ofm*C_ofm];
DATA_T dt_weights[M_ofm*N_ifm*K_wts*K_wts];

/* 
 * reference implementation; same as ZhangIsfpga15_1() in
 * convolve.cpp; but always done in single-precision FP 
*/
void ZhangIsfpga15_1_fp(float *input, float *output, float *weights) {
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

int main() {
  
#ifndef NO_TIMING
  struct timeval start_time, end_time;
#endif
  
#ifndef NO_CHECKING
#define INDENT (100)
#define RANGE (100)

  /*
   * Initialize input and compute reference output
   */

  {
    unsigned long row, col, to, ti;
    
    for(row=0; row<R_ofm; row++) {
      for(col=0; col<C_ofm ; col++) {
	for(to=0; to<M_ofm; to++) {
	  ARRAY(dt_output,0,to,row,col,0,M_ofm,R_ofm,C_ofm)=0;
	  ARRAY(fp_output,0,to,row,col,0,M_ofm,R_ofm,C_ofm)=0;
	}
      }
    }
    
    for(row=0; row<R_ifm; row++) {
      for(col=0; col<C_ifm ; col++) {
	for(ti=0; ti<N_ifm; ti++) {
	  switch(-1) {
	  case 0:
	    ARRAY(fp_input,0,ti,row,col,0,N_ifm,R_ifm,C_ifm)=((((ti*INDENT)+row)*INDENT)+col);
	    break;
	  default:
	    ARRAY(fp_input,0,ti,row,col,0,N_ifm,R_ifm,C_ifm)=(((float)(rand()%RANGE))/RANGE);
	  }
	  ARRAY(dt_input,0,ti,row,col,0,N_ifm,R_ifm,C_ifm)=(DATA_T)ARRAY(fp_input,0,ti,row,col,0,N_ifm,R_ifm,C_ifm);
	}
      }
    }
    
    for(to=0; to<M_ofm; to++) {
      for(ti=0; ti<N_ifm; ti++) {
	for(row=0; row<K_wts; row++) {
	  for(col=0; col<K_wts; col++) {
	    switch(-1) {
	    case 0:
	      ARRAY(fp_weights,to,ti,row,col,M_ofm,N_ifm,K_wts,K_wts)=(1.0/(K_wts*K_wts*N_ifm));
	      break;
	    default:
	      ARRAY(fp_weights,to,ti,row,col,M_ofm,N_ifm,K_wts,K_wts)=(((float)(rand()%RANGE))/RANGE);
	    }
	    ARRAY(dt_weights,to,ti,row,col,M_ofm,N_ifm,K_wts,K_wts)=(DATA_T)ARRAY(fp_weights,to,ti,row,col,M_ofm,N_ifm,K_wts,K_wts);
	  }
	}
      }
    }
  }

  printf("K_tws=%d; S_wts=%d;\n", K_wts, S_wts);
  printf("R_ofm=%d; C_ofm=%d; M_ofm=%d;\n", R_ofm, C_ofm, M_ofm);
  printf("(R_ifm)=%d; (C_ifm)=%d; N_ifm=%d\n", R_ifm, C_ifm, N_ifm);
  printf("Tr=%d; Tc=%d; Tm=%d; Tn=%d\n\n", Tr, Tc, Tm, Tn);

  printf("Computing reference. . . .\n\n");
  ZhangIsfpga15_1_fp(fp_input,fp_output,fp_weights);
#else
  printf("NO_CHECKING: no checking done!!\n\n");
#endif

  /* 
   * Uncomment for Zynq DMA; need to flush the initialized arrays from
   * CPU cache
   */
  // Xil_DCacheFlush(); 

  /*
   * Test and time target implementation
   */
#ifndef NO_TIMING
  printf("Testing and timing kernel. . . .\n\n");
  gettimeofday(&start_time, NULL);
#endif

  ZhangIsfpga15_3(dt_input,dt_output,dt_weights);

#ifndef NO_TIMING
  gettimeofday(&end_time, NULL);
  printf("runtime = %0.1f (microsec) \n\n", 
	 (end_time.tv_sec - start_time.tv_sec)*1e6 + (end_time.tv_usec - start_time.tv_usec) );
#else
  printf("NO_TIMING: No timing done.\n\n");
#endif

#ifdef PRINTING
  {
    /*
     * Print input and output for debugging 
     */
    unsigned long row, col, to, ti;

    printf("printing input and output\n\n");
    if (1) {
      printf("fp_output(ref)=");
      for(to=0; to<M_ofm; to++) {
	printf("{ ");
	for(row=0; row<R_ofm; row++) {
	  printf("[ ");
	  for(col=0; col<C_ofm ; col++) {
	    printf("%g ", (float)ARRAY(fp_output,0,to,row,col,0,M_ofm,R_ofm,C_ofm));
	  }
	  printf(" ]");
	}
	printf(" }\n\t");
      }
      printf("\n");
    }

    if (1) {
      printf("dt_output=");
      for(to=0; to<M_ofm; to++) {
	printf("{ ");
	for(row=0; row<R_ofm; row++) {
	  printf("[ ");
	  for(col=0; col<C_ofm ; col++) {
	    printf("%g ", (float)ARRAY(dt_output,0,to,row,col,0,M_ofm,R_ofm,C_ofm));
	  }
	  printf(" ]");
	}
	printf(" }\n\t");
      }
      printf("\n");
    }

    if (1) {
      printf("fp_input=");
      for(ti=0; ti<N_ifm; ti++) {
	printf("{ ");
	for(row=0; row<R_ifm; row++) {
	  printf("[ ");
	  for(col=0; col<C_ifm ; col++) {
	    printf("%g ", (float)ARRAY(fp_input,0,ti,row,col,0,N_ifm,R_ifm,C_ifm));
	  }
	  printf(" ]");
	}
	printf(" }\n\t") ;
      }
      printf("\n");
    }
    
    if (1) {
      printf("fp_weights=");
      for(to=0; to<M_ofm; to++) {
	printf("< ");
	for(ti=0; ti<N_ifm; ti++) {
	  printf("\n\t{ ");
	  for(row=0; row<K_wts; row++) {
	    printf("[ ");
	    for(col=0; col<K_wts; col++) {
	      printf("%g ", (float)ARRAY(fp_weights,to,ti,row,col,M_ofm,N_ifm,K_wts,K_wts));
	    }
	    printf(" ]");
	  }
	  printf(" }");
	}
	printf(" >\n") ;
      }
      printf("\n");
    }
  }
#endif
  
#ifndef NO_CHECKING
  {
    /*
     * Cross check the outputs for correctness
     */
    unsigned long row, col, to;
    
    printf("Checking results. . . .\n\n");
    for(to=0; to<M_ofm; to++) {
      for(row=0; row<R_ofm; row++) {
	for(col=0; col<C_ofm ; col++) {
	  assert(nearlyEqual((float)ARRAY(dt_output,0,to,row,col,0,M_ofm,R_ofm,C_ofm),
			     ARRAY(fp_output,0,to,row,col,0,M_ofm,R_ofm,C_ofm)));
	}
      }
    }
  }

  printf("Results correct.\n\n");
#endif

  return (0);
}
