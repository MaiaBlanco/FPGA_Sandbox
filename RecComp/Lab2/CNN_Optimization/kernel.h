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
 * convolve_kernel() is the kernel function you will implement using
 * HLS.  You can modify the blocking parameters declared in this file.
 */

#ifndef KERNEL_H
#define KERNEL_H

#include "instance.h"
#include "convolve.h"
#include "ap_int.h"
#include "ap_fixed.h"

/*
 * Blocking parameters
 */
#define Tr 3 // output row
#define Tc 9 // output column
#define Tm 64 // output depth
#define Tn 2 // input depth

// Define arbitrary precision uints for loop counters to reduce area, and tighten timings.
#define loop_ctr ap_uint<7>
#define kernel_ctr ap_uint<3>

void convolve_kernel (DATA_T bufw[Tm][Tn][K_wts][K_wts],
		      DATA_T bufi[Tn][Tr*S_wts+K_wts-1][Tc*S_wts+K_wts-1],
		      DATA_T bufo[Tm][Tr][Tc]);

#endif
