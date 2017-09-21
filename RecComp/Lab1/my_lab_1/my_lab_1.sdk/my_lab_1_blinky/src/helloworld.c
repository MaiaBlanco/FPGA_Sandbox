/******************************************************************************
*
* Copyright (C) 2009 - 2014 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/

/*
 * helloworld.c: simple test application
 *
 * This application configures UART 16550 to baud rate 9600.
 * PS7 UART (Zynq) is not initialized by this application, since
 * bootrom/bsp configures it to baud rate 115200
 *
 * ------------------------------------------------
 * | UART TYPE   BAUD RATE                        |
 * ------------------------------------------------
 *   uartns550   9600
 *   uartlite    Configurable only in HW design
 *   ps7_uart    115200 (configured by bootrom/bsp)
 */

#include <stdio.h>
#include "xparameters.h"
#include "platform.h"
#include "xil_printf.h"
#include "xtmrctr.h"
#include "xil_exception.h"
#include "xil_printf.h"
#include "xscugic.h"


// Defines:
// Defined in xparameters. repeated here so I know it exists.
//#define INTC_DEVICE_ID		XPAR_SCUGIC_SINGLE_DEVICE_ID
#define INTC		XScuGic
#define INTC_HANDLER	XScuGic_InterruptHandler
#define TMR_RESET_VALUE	 0xF0000000


// Global variables:
XTmrCtr timer_instance;
XScuGic interrupt_ctl_instance;
volatile int timer_expired;

// Function Prototypes:
int Timer_0_SetupInterrupts(INTC* IntcInstancePtr,
				XTmrCtr* InstancePtr,
				u16 DeviceId,
				u16 IntrId,
				u8 TmrCtrNumber);

void Timer_0_Counter_Handler(void *CallBackRef, u8 TmrCtrNumber);

void Timer_0_Interrupt_Disable(XScuGic* IntcInstancePtr, u16 IntrId);

// Main function
int main()
{
    init_platform();

    int Status;
    // Initialize the timer:
    Status = XTmrCtr_Initialize(&timer_instance, 0);
    Status = XTmrCtr_SelfTest(&timer_instance, 0);
    Status = Timer_0_SetupInterrupts(
    		&interrupt_ctl_instance,
    		&timer_instance,
			TMRCTR_DEVICE_ID,
			TMRCTR_INTERRUPT_ID,
			TIMER_CNTR_0);

    if (Status != XST_SUCCESS)
    {
    	printf("STATUS FAILED!\n\r");
    	return XST_FAILURE;
    }

    print("Hello World\n\r");

    cleanup_platform();
    return 0;
}

// Function definitions:

// Timer 0 interrupt function:
void Timer_0_Counter_Handler(void *CallBackRef, u8 TmrCtrNumber)
{

}

// Timer Interrupts Disable function:
void Timer_0_Interrupt_Disable(XScuGic* IntcInstancePtr, u16 IntrId)
{

}

// Setup the timer with the interrupt system:
int Timer_0_SetupInterrupts(INTC* IntcInstancePtr,
				XTmrCtr* InstancePtr,
				u16 DeviceId,
				u16 IntrId,
				u8 TmrCtrNumber)
{

}
}
