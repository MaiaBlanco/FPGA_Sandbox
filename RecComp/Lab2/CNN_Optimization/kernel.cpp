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
 */

#include "instance.h"
#include "convolve.h"
#include "kernel.h"
//#include "ap_int.h"
//#include "ap_fixed.h"
/*
 * This is the kernel function you will realize in fabric using HLS.
 * This is the inner loop used by ZhangIsfpag15_3() in convolve.c.
 * This kernel operates on the copied local buffers.
 *
 * With respect to the local buffers, the kernel is exactly analogous
 * to the reference implementation ZhangIsfpga15_1().
 *
 * The local buffer dimensions are hard coded to give HLS more
 * flexibility
 */

/*
//DEFAULT
void convolve_kernel (DATA_T bufw[Tm][Tn][K_wts][K_wts],
		      DATA_T bufi[Tn][Tr*S_wts+K_wts-1][Tc*S_wts+K_wts-1],
		      DATA_T bufo[Tm][Tr][Tc]) {
#pragma HLS INTERFACE s_axilite port=return bundle=control
#pragma HLS INTERFACE bram port=bufw
#pragma HLS RESOURCE variable=bufw core=RAM_1P_BRAM
#pragma HLS INTERFACE bram port=bufi
#pragma HLS RESOURCE variable=bufi core=RAM_1P_BRAM
#pragma HLS INTERFACE bram port=bufo
#pragma HLS RESOURCE variable=bufo core=RAM_1P_BRAM
	  unsigned long to_b, ti_b, row_b, col_b;
	  unsigned long i, j;

	  for(i=0;i<K_wts;i++){
		for(j=0;j<K_wts;j++){
		  for(row_b=0;row_b<Tr;row_b++){
			for(col_b=0;col_b<Tc;col_b++){
			  for(to_b=0;to_b<Tm;to_b++){
#pragma HLS PIPELINE
				  for(ti_b=0;ti_b<Tn;ti_b++){

				  bufo[to_b][row_b][col_b]+=
				bufw[to_b][ti_b][i][j]*
				bufi[ti_b][S_wts*row_b+i][S_wts*col_b+j];
				}
			  }
			}
	      }
	    }
	  }
	}
*/

void convolve_kernel (DATA_T bufw[Tm][Tn][K_wts][K_wts],
              DATA_T bufi[Tn][Tr*S_wts+K_wts-1][Tc*S_wts+K_wts-1],
              DATA_T bufo[Tm][Tr][Tc]) {
	#pragma HLS INTERFACE s_axilite port=return bundle=control
	#pragma HLS INTERFACE bram port=bufw
	#pragma HLS INTERFACE bram port=bufi
	#pragma HLS INTERFACE bram port=bufo
	#pragma HLS RESOURCE variable=bufw core=RAM_1P_BRAM
	#pragma HLS RESOURCE variable=bufi core=RAM_1P_BRAM
	#pragma HLS RESOURCE variable=bufo core=RAM_1P_BRAM

//#pragma HLS ARRAY_RESHAPE variable=bufw complete// dim=0

//#pragma HLS ARRAY_RESHAPE variable=bufo cyclic factor=4 dim=1
//#pragma HLS ARRAY_RESHAPE variable=bufo cyclic factor=4 dim=1

	#pragma HLS ARRAY_RESHAPE variable=bufi complete dim=1
	#pragma HLS ARRAY_RESHAPE variable=bufo complete factor=8 dim=1
	#pragma HLS ARRAY_RESHAPE variable=bufw complete factor=8 dim=1
    unsigned long to_b, ti_b, row_b, col_b;
    unsigned int i, j;
    l4: for(i=0;i<K_wts;i++){
        l5:for(j=0;j<K_wts;j++){
    l0: for(row_b=0;row_b<Tr;row_b++){
        l1: for(col_b=0;col_b<Tc;col_b++){
#pragma HLS PIPELINE
            l2: for(to_b=0;to_b<Tm;to_b++){
                l3: for(ti_b=0;ti_b<Tn;ti_b++){
                        bufo[to_b][row_b][col_b]+=
                            bufw[to_b][ti_b][i][j]*
                            bufi[ti_b][S_wts*row_b+i][S_wts*col_b+j];
                        }
                    }
                }
            }
        }
    }
}


/*void convolve_kernel (DATA_T bufw[Tm][Tn][K_wts][K_wts],
		     DATA_T bufi[Tn][Tr*S_wts+K_wts-1][Tc*S_wts+K_wts-1],
		     DATA_T bufo[Tm][Tr][Tc]) {
	// Reshape the output buffer to increase the width of memory accesses and
	// improve throughput
//	#pragma HLS ARRAY_RESHAPE variable=bufo block factor=2 dim=1
	// Partition bufi to allow more parallel reads at a time
//	#pragma HLS ARRAY_PARTITION variable=bufi complete dim=1
//	#pragma HLS ARRAY_RESHAPE variable=bufi block factor=2 dim=1
	// Partition bufw, also to allow more parallel reads at a time
//	#pragma HLS ARRAY_PARTITION variable=bufw complete dim=1
//	#pragma HLS ARRAY_RESHAPE variable=bufw block factor=2 dim=1
#pragma HLS INTERFACE bram port=bufw
#pragma HLS INTERFACE bram port=bufi
#pragma HLS INTERFACE bram port=bufo
#pragma HLS INTERFACE s_axilite port=return bundle=control
#pragma HLS RESOURCE variable=bufw core=RAM_1P_BRAM
#pragma HLS RESOURCE variable=bufi core=RAM_1P_BRAM
#pragma HLS RESOURCE variable=bufo core=RAM_1P_BRAM


	// Use smaller unsigned integer types to improve timing and
	// reduce resource usage
	unsigned short to_b, ti_b, row_b, col_b;
	unsigned char i, j;
	float temp[K_wts];
	l4: for(i=0;i<K_wts;i++){
		l5:for(j=0;j<K_wts;j++){
			l0:for(row_b=0;row_b<Tr;row_b++){
//				#pragma HLS PIPELINE
//				#pragma HLS LOOP_FLATTEN
				// Let Vivado know that bufo is not reused across iterations of
				// the row loop, and therefore independent within the pipeline.
//				#pragma HLS dependence variable=bufo inter false
				l1: for(col_b=0;col_b<Tc;col_b++){
					l2: for(to_b=0;to_b<Tm;to_b++){
						l3: for(ti_b=0;ti_b<Tn;ti_b++){
							bufo[to_b][row_b][col_b]+=
							bufw[to_b][ti_b][i][j]*
							bufi[ti_b][S_wts*row_b+i][S_wts*col_b+j];
						}
					}
				}
			}
		}
	}
}*/




/*void convolve_kernel (DATA_T bufw[Tm][Tn][K_wts][K_wts],
		      DATA_T bufi[Tn][Tr*S_wts+K_wts-1][Tc*S_wts+K_wts-1],
		      DATA_T bufo[Tm][Tr][Tc]) {
#pragma HLS INTERFACE bram port=bufw
#pragma HLS INTERFACE bram port=bufi
#pragma HLS INTERFACE bram port=bufo
#pragma HLS INTERFACE s_axilite port=return bundle=control
#pragma HLS RESOURCE variable=bufw core=RAM_1P_BRAM
#pragma HLS RESOURCE variable=bufi core=RAM_1P_BRAM
#pragma HLS RESOURCE variable=bufo core=RAM_1P_BRAM

  unsigned long to_b, ti_b, row_b, col_b;

  for(row_b=0;row_b<Tr;row_b++){
    for(col_b=0;col_b<Tc;col_b++){
      for(to_b=0;to_b<Tm;to_b++){
	for(ti_b=0;ti_b<Tn;ti_b++){
	  unsigned long i, j;
//#pragma HLS PIPELINE

	  for(i=0;i<K_wts;i++){
	    for(j=0;j<K_wts;j++){
	      bufo[to_b][row_b][col_b]+=
		bufw[to_b][ti_b][i][j]*
		bufi[ti_b][S_wts*row_b+i][S_wts*col_b+j];
	    }
	  }
	}
      }
    }
  }
}*/
