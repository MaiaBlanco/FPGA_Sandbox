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


void convolve_kernel (DATA_T bufw[Tm][Tn][K_wts][K_wts],
              DATA_T bufi[Tn][Tr*S_wts+K_wts-1][Tc*S_wts+K_wts-1],
              DATA_T bufo[Tm][Tr][Tc]) {
#pragma HLS INTERFACE bram port=bufw
#pragma HLS INTERFACE bram port=bufi
#pragma HLS INTERFACE bram port=bufo

    loop_ctr to_b, ti_b, row_b, col_b;
    kernel_ctr i, j;
    DATA_T temp, temp2;
    unsigned short t1, t2;
    // Iterate over each output feature map
    output_loop: for(to_b=0;to_b<Tm;to_b++){
        // Iterate over input feature maps
        input_loop: for(ti_b=0;ti_b<Tn;ti_b++){
            // Iterate within output feature map dimensions
            row_loop: for(row_b=0;row_b<Tr;row_b++){
                col_loop: for(col_b=0;col_b<Tc;col_b++){
                    temp = bufo[to_b][row_b][col_b];
                    t1 = S_wts*row_b;
                    t2 = S_wts*col_b;
                    // Iterate through KxK kernel:
                    convolve_kernel_traversal_outer:for(i=0;i<K_wts;i++){
                        convolve_kernel_traversal_inner: for(j=0;j<K_wts;j++){
                            temp+=
                            bufw[to_b][ti_b][i][j]*
                            bufi[ti_b][t1+i][t2+j];
                        }
                    }
                    bufo[to_b][row_b][col_b] = temp;
                }
            }
        }
    }
}

/* Tried to maximize parallel bufo write and reads. Didn't seem to work...
void convolve_kernel (DATA_T bufw[Tm][Tn][K_wts][K_wts],
		      DATA_T bufi[Tn][Tr*S_wts+K_wts-1][Tc*S_wts+K_wts-1],
		      DATA_T bufo[Tm][Tr][Tc]) {
#pragma HLS INTERFACE bram port=bufo

	loop_ctr to_b, ti_b, row_b, col_b;
	kernel_ctr i, j;
	DATA_T temp, temp2;
	unsigned short t1, t2;
	// Iterate through KxK kernel:
	convolve_kernel_traversal_outer:for(i=0;i<K_wts;i++){
		convolve_kernel_traversal_inner: for(j=0;j<K_wts;j++){
			// Iterate over input feature maps
			input_loop: for(ti_b=0;ti_b<Tn;ti_b++){
				// Iterate over each output feature map
				output_loop: for(to_b=0;to_b<Tm;to_b++){
					// Iterate within output feature map dimensions
					row_loop: for(row_b=0;row_b<Tr;row_b++){
						col_loop: for(col_b=0;col_b<Tc;col_b++){
							temp = 0;
//							temp = bufo[to_b][row_b][col_b];
							temp +=
								bufw[to_b][ti_b][i][j]*
								bufi[ti_b][S_wts*row_b+i][S_wts*col_b+j];
							bufo[to_b][row_b][col_b] += temp;
						}
					}
				}
			}
		}
	}
}
*/

/*
// Took another look at the paper and restructured the loops to match their order for
// better loop unrolling
// With the directives in 63GFLOPs and Tr=Tc = 3, Tn =1, Tm=64, this hits 7GFLOPs
void convolve_kernel (DATA_T bufw[Tm][Tn][K_wts][K_wts],
		      DATA_T bufi[Tn][Tr*S_wts+K_wts-1][Tc*S_wts+K_wts-1],
		      DATA_T bufo[Tm][Tr][Tc]) {
#pragma HLS INTERFACE bram port=bufo

	loop_ctr to_b, ti_b, row_b, col_b;
	kernel_ctr i, j;
	DATA_T temp, temp2;
	unsigned short t1, t2;
		// Iterate over each output feature map
		output_loop: for(to_b=0;to_b<Tm;to_b++){
		// Iterate over input feature maps
			input_loop: for(ti_b=0;ti_b<Tn;ti_b++){
			// Iterate within output feature map dimensions
			row_loop: for(row_b=0;row_b<Tr;row_b++){
				col_loop: for(col_b=0;col_b<Tc;col_b++){
					temp = bufo[to_b][row_b][col_b];
					temp2 = 0;
					t1 = S_wts*row_b;
					t2 = S_wts*col_b;
					// Iterate through KxK kernel:
					convolve_kernel_traversal_outer:for(i=0;i<K_wts;i++){
						convolve_kernel_traversal_inner: for(j=0;j<K_wts;j++){
							temp2+=
							bufw[to_b][ti_b][i][j]*
							bufi[ti_b][t1+i][t2+j];
						}
					}
					temp += temp2;
					bufo[to_b][row_b][col_b] = temp;
				}
			}
		}
	}
}
*/

// Code used for up to solution on line 60 of notes.
/*
// Took another look at the paper and restructured the loops to match their order for
// better loop unrolling
void convolve_kernel (DATA_T bufw[Tm][Tn][K_wts][K_wts],
		      DATA_T bufi[Tn][Tr*S_wts+K_wts-1][Tc*S_wts+K_wts-1],
		      DATA_T bufo[Tm][Tr][Tc]) {
#pragma HLS INTERFACE bram port=bufo

	loop_ctr to_b, ti_b, row_b, col_b;
	kernel_ctr i, j;
	DATA_T temp, temp2;
	// Iterate through KxK kernel:
	convolve_kernel_traversal_outer:for(i=0;i<K_wts;i++){
		convolve_kernel_traversal_inner: for(j=0;j<K_wts;j++){
			// Iterate within output feature map dimensions
			row_loop: for(row_b=0;row_b<Tr;row_b++){
				col_loop: for(col_b=0;col_b<Tc;col_b++){
					// Iterate over each output feature map
					output_loop: for(to_b=0;to_b<Tm;to_b++){
						// Iterate over input feature maps
						temp = bufo[to_b][row_b][col_b];
						temp2 = 0;
						input_loop: for(ti_b=0;ti_b<Tn;ti_b++){
							temp2+=
							bufw[to_b][ti_b][i][j]*
							bufi[ti_b][S_wts*row_b+i][S_wts*col_b+j];
						}
						bufo[to_b][row_b][col_b] = temp + temp2;
					}
				}
			}
		}
	}
}*/


/*
// Yifei pointed out that the loop order could be improved to allow for unrolling or pipelining.
// This modified version takes what were the inner two loops (outside of kernel mask traversal)
// and makes them the outer loops, making the code more "cache friendly" (even if no cache, still benefits).
void convolve_kernel (DATA_T bufw[Tm][Tn][K_wts][K_wts],
		      DATA_T bufi[Tn][Tr*S_wts+K_wts-1][Tc*S_wts+K_wts-1],
		      DATA_T bufo[Tm][Tr][Tc]) {
#pragma HLS INTERFACE bram port=bufw
#pragma HLS INTERFACE bram port=bufi
#pragma HLS INTERFACE bram port=bufo

	loop_ctr to_b, ti_b, row_b, col_b;
	//DATA_T temp2[K_wts][K_wts];
	// Iterate over each output feature map
	for(to_b=0;to_b<Tm;to_b++){
		// Iterate over input feature maps
		for(ti_b=0;ti_b<Tn;ti_b++){
			// Iterate within output feature map dimensions
				for(row_b=0;row_b<Tr;row_b++){
					for(col_b=0;col_b<Tc;col_b++){
						kernel_ctr i, j;
						// Iterate through KxK kernel:
						DATA_T temp = bufo[to_b][row_b][col_b];
						//temp2 = bufw[to_b][ti_b];
						convolve_kernel_traversal_outer:for(i=0;i<K_wts;i++){
							convolve_kernel_traversal_inner: for(j=0;j<K_wts;j++){
							temp+=
							bufw[to_b][ti_b][i][j]*
							bufi[ti_b][S_wts*row_b+i][S_wts*col_b+j];
						}
						bufo[to_b][row_b][col_b] = temp;
					}
				}
			}
		}
	}
}*/

/*
void convolve_kernel_original (DATA_T bufw[Tm][Tn][K_wts][K_wts],
		      DATA_T bufi[Tn][Tr*S_wts+K_wts-1][Tc*S_wts+K_wts-1],
		      DATA_T bufo[Tm][Tr][Tc]) {
#pragma HLS INTERFACE bram port=bufw
#pragma HLS INTERFACE bram port=bufi
#pragma HLS INTERFACE bram port=bufo

  unsigned long to_b, ti_b, row_b, col_b;

  for(row_b=0;row_b<Tr;row_b++){
    for(col_b=0;col_b<Tc;col_b++){
      for(to_b=0;to_b<Tm;to_b++){
	for(ti_b=0;ti_b<Tn;ti_b++){
	  unsigned long i, j;
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
}
*/
