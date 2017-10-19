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

#include <stdio.h>
#include <limits.h>

#include "config.h"
#include "instance.h"
#include "data.h"
#include "convolve.h"
#include "kernel.h"
#include "sdk.h"

#ifdef __SDK__

//devices and configuration pointers for CDMA IPs used to transfer data to/from DRAM and BRAM
XAxiCdma        cdma_dev_input;
XAxiCdma_Config *cdma_config_input;
XAxiCdma        cdma_dev_weight;
XAxiCdma_Config *cdma_config_weight;
XAxiCdma        cdma_dev_output;
XAxiCdma_Config *cdma_config_output;

XConvolve_kernel        convolve_kernel_dev;
XConvolve_kernel_Config *convolve_kernel_config;

void zynq_initialize(int &error) {
  *TIMER_CONFIG_PTR = 0x00000003;
  *TIMER_PTR = UINT_MAX; //count down from max amount
  
  convolve_kernel_config = XConvolve_kernel_LookupConfig(CONVOLVE_ID);
  int status = XConvolve_kernel_CfgInitialize(&convolve_kernel_dev,convolve_kernel_config);
  if(status !=XST_SUCCESS){
    printf("ERROR: Convolve_kernel_dev Setup Failed\n");
    error++;
  }
  
  cdma_config_input = XAxiCdma_LookupConfig(CDMA_INPUT_ID);
  status = XAxiCdma_CfgInitialize(&cdma_dev_input,cdma_config_input,CDMA_INPUT_BASE);
  if(status !=XST_SUCCESS){
    printf("ERROR: CDMA INPUT Setup Failed\n");
    error++;
  }
  
  cdma_config_weight = XAxiCdma_LookupConfig(CDMA_WEIGHT_ID);
  status = XAxiCdma_CfgInitialize(&cdma_dev_weight,cdma_config_weight,CDMA_WEIGHT_BASE);
  if(status !=XST_SUCCESS){
    printf("ERROR: CDMA WEIGHT Setup Failed\n");
    error++;
  }
  
  cdma_config_output = XAxiCdma_LookupConfig(CDMA_OUTPUT_ID);
  status = XAxiCdma_CfgInitialize(&cdma_dev_output,cdma_config_output,CDMA_OUTPUT_BASE);
  if(status !=XST_SUCCESS){
    printf("ERROR: CDMA OUTPUT Setup Failed\n");
    error++;
  }
}
#endif
