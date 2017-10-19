#ifndef CONVOLVE_H
#define CONVOLVE_H

/****************************************************************
 * Copyright (c) 2017, 18-643 Course Staff, CMU
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

#include "data.h"

/****************************************************************
 * Reference convolution layer implementation based on Code 1:
 *    C. Zhang, et al., "Optimizing FPGA-based Accelerator 
 *    Design for Deep Convolutional Neural Networks," FPGA, 2015.
 ****************************************************************/

void ZhangIsfpga15_1(DATA_T *input, DATA_T *output, DATA_T *weights);


/****************************************************************
 * Blocked convolution layer implementation based on Figure 5:
 *    C. Zhang, et al., "Optimizing FPGA-based Accelerator 
 *    Design for Deep Convolutional Neural Networks," FPGA, 2015.
 ****************************************************************/

void ZhangIsfpga15_2(DATA_T *input, DATA_T *output, DATA_T *weights);


/****************************************************************
 * Fully implemented blocked Reference convolution layer 
 *  implementation (with local memory promotion) based on Figure 9:
 *    C. Zhang, et al., "Optimizing FPGA-based Accelerator 
 *    Design for Deep Convolutional Neural Networks," FPGA, 2015.
 ****************************************************************/

void ZhangIsfpga15_3(DATA_T *input, DATA_T *output, DATA_T *weights);

#endif
