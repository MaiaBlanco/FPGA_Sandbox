#ifndef SDK_H
#define SDK_H

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
#include "config.h"
#include "data.h"

#ifdef __SDK__

#include <xparameters.h>
#include <xaxicdma.h>
#include <xil_cache.h>
#include <xtime_l.h>
#include <xconvolve_kernel.h>

#define CDMA_INPUT_ID XPAR_HIER_BRAM_0_AXI_CDMA_0_DEVICE_ID
#define CDMA_INPUT_BASE XPAR_HIER_BRAM_0_AXI_CDMA_0_BASEADDR

#define CDMA_WEIGHT_ID XPAR_HIER_BRAM_1_AXI_CDMA_0_DEVICE_ID
#define CDMA_WEIGHT_BASE XPAR_HIER_BRAM_1_AXI_CDMA_0_BASEADDR

#define CDMA_OUTPUT_ID XPAR_HIER_BRAM_2_AXI_CDMA_0_DEVICE_ID
#define CDMA_OUTPUT_BASE XPAR_HIER_BRAM_2_AXI_CDMA_0_BASEADDR

#define CONVOLVE_ID XPAR_CONVOLVE_KERNEL_1_DEVICE_ID

#define BRAM_INPUT_BASEADDR 0XC0000000
#define BRAM_WEIGHT_BASEADDR 0XC2000000
#define BRAM_OUTPUT_BASEADDR 0XC4000000

#define BufI_Size (((Tn)*(Tr*S_wts+K_wts-1)*(Tc*S_wts+K_wts-1))*sizeof(DATA_T))
#define BufO_Size (Tm*Tr*Tc*sizeof(DATA_T))
#define BufW_Size (Tm*Tn*K_wts*K_wts*sizeof(DATA_T))

//CPU 32-bit timer (SCUTIMER) clocked at half the CPU frequency
unsigned int * const TIMER_LOAD_PTR = (unsigned int *)XPAR_PS7_SCUTIMER_0_BASEADDR;
unsigned int * const TIMER_PTR = XPAR_PS7_SCUTIMER_0_BASEADDR + (unsigned int *)0x04;
unsigned int * const TIMER_CONFIG_PTR = XPAR_PS7_SCUTIMER_0_BASEADDR + (unsigned int *)0x08;

//devices and configuration pointers for CDMA IPs used to transfer data to/from DRAM and BRAM
extern XAxiCdma        cdma_dev_input;
extern XAxiCdma_Config *cdma_config_input;
extern XAxiCdma        cdma_dev_weight;
extern XAxiCdma_Config *cdma_config_weight;
extern XAxiCdma        cdma_dev_output;
extern XAxiCdma_Config *cdma_config_output;

//device and configuration pointer for the Lab 2 convolve kernel HLS IP
extern XConvolve_kernel        convolve_kernel_dev;
extern XConvolve_kernel_Config *convolve_kernel_config;

void zynq_initialize(int &error);

#endif
#endif
