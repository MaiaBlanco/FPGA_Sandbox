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
#include "xgpio.h"


// Defines:
#define INTC_DEVICE_ID		XPAR_SCUGIC_SINGLE_DEVICE_ID
#define TMRCTR_DEVICE_ID	XPAR_TMRCTR_0_DEVICE_ID
#define BTNS_DEVICE_ID	XPAR_AXI_GPIO_1_DEVICE_ID
#define LEDS_DEVICE_ID XPAR_AXI_GPIO_0_DEVICE_ID

//#define TMRCTR_INTERRUPT_ID	XPAR_PS7_SCUGIC_0_DEVICE_ID	// Is this necessary?
#define INTC_GPIO_INTERRUPT_ID XPAR_FABRIC_AXI_GPIO_1_IP2INTC_IRPT_INTR
#define INTC_TMR_INTERRUPT_ID XPAR_FABRIC_AXI_TIMER_0_INTERRUPT_INTR

#define INTC		XScuGic
#define INTC_HANDLER	XScuGic_InterruptHandler
#define TMR_RESET_VALUE	 0xFF000000
#define TIMER_CNTR_0	 0
#define XPAR_TMRCTR_0_CLOCK_FREQ_HZ XPAR_AXI_TIMER_0_CLOCK_FREQ_HZ
#define BTN_INT 			XGPIO_IR_CH1_MASK
#define TIMER_COUNT_LIM 10

// Global variables:
XTmrCtr timer_instance;
XScuGic interrupt_ctl_instance;
XGpio LEDInst, BTNInst;
static int led_data;
static u8 led_mask;
static int btn_value;
static int tmr_count;
volatile int timer_expired;


// Function Prototypes:
static void BTN_Intr_Handler(void *baseaddr_p);
static void TMR_Intr_Handler(void *baseaddr_p);
static int InterruptSystemSetup(XScuGic *XScuGicInstancePtr);
static int IntcInitFunction(u16 DeviceId, XTmrCtr *TmrInstancePtr, XGpio *GpioInstancePtr);

// Interrupt Handler Definitions:
// Used for timer_counter and for push_buttons (gpio_1)
void BTN_Intr_Handler(void *InstancePtr)
{
	// Disable button interrupts:
	XGpio_InterruptDisable(&BTNInst, BTN_INT);
	// Ignore additional button presses
	// i.e. the interrupt handler is already handling a button interrupt
	if ((XGpio_InterruptGetStatus(&BTNInst) & BTN_INT) != BTN_INT)
	{
		return;
	}
	// Check which button was pressed:
	btn_value = XGpio_DiscreteRead(&BTNInst, 1);
	// Note: the above does exactly what the commented line does below, but has some checks as well.
//	btn_value = Xil_In32(BTNInst.BaseAddress + XGPIO_DATA_OFFSET + XGPIO_CHAN_OFFSET);
	printf("Button %x was pressed!\n\r", btn_value);
	XGpio_InterruptClear(&BTNInst, BTN_INT);
	// Re-enable GPIO Interrupts
	XGpio_InterruptEnable(&BTNInst, BTN_INT);
}


void TMR_Intr_Handler(void *data)
{
	if (XTmrCtr_IsExpired(&timer_instance, 0))
	{
		// if the timer has expired TIMER_COUNT_LIM times, stop and increment the counter
		// Then reset the timer and start it again
		// Also blink the 7th LED.
		if (tmr_count >= TIMER_COUNT_LIM)
		{
			printf("Timer count > %d\n\r", TIMER_COUNT_LIM);
			XTmrCtr_Stop(&timer_instance, 0);
			tmr_count = 0;
			led_mask = XGpio_DiscreteRead(&LEDInst, 1);
//			if (led_data == 0)
//			{
//				led_data = 0xAA;
//			}
			if (led_mask >= 0x80u)
			{
				led_mask &= 0x7Fu;
			}
			else
			{
				led_mask |= 0x80u;
			}
			XGpio_DiscreteWrite(&LEDInst, 1, (u32)led_mask);
			// Reset the timer counter
			XTmrCtr_Reset(&timer_instance, 0);
			XTmrCtr_Start(&timer_instance, 0);
		}
		else tmr_count ++;
	}
}


// Main function
int main()
{
    init_platform();

    int Status;
    // Initialize the LEDs:
    Status = XGpio_Initialize(&LEDInst, LEDS_DEVICE_ID);
    if (Status != XST_SUCCESS) return XST_FAILURE;
    // Init the pushbuttons:
    Status = XGpio_Initialize(&BTNInst, BTNS_DEVICE_ID);
    if (Status != XST_SUCCESS) return XST_FAILURE;
    // Set direction of LEDs to be outputs:
    XGpio_SetDataDirection(&LEDInst, 1, 0x00);
    // Set buttons to be inputs:
    XGpio_SetDataDirection(&BTNInst, 1, 0xFF);

    // Initialize the timer:
    Status = XTmrCtr_Initialize(&timer_instance, TMRCTR_DEVICE_ID);
    if (Status != XST_SUCCESS) return XST_FAILURE;
    // Note that self-test is destructive (resets all settings from whatever they
    // currently are) so plan to set it back up after calling this:
    //Status = XTmrCtr_SelfTest(&timer_instance, TMRCTR_DEVICE_ID);
    //if (Status != XST_SUCCESS) return XST_FAILURE;
    // Set the interrupt handler for the timer:
    XTmrCtr_SetHandler(&timer_instance, TMR_Intr_Handler, &timer_instance);
    XTmrCtr_SetResetValue(&timer_instance, 0, TMR_RESET_VALUE);
    XTmrCtr_SetOptions(&timer_instance, 0, XTC_INT_MODE_OPTION | XTC_AUTO_RELOAD_OPTION);

    // Initialize the interrupt controller:
    Status = IntcInitFunction(INTC_DEVICE_ID, &timer_instance, &BTNInst);
    if(Status != XST_SUCCESS) return XST_FAILURE;

    // Finish by starting the timer:
    XTmrCtr_Start(&timer_instance, 0);
    print("Hello World\n\r");

    while(1);


    cleanup_platform();
    return 0;
}

// Function definitions:

// Initial setup functions:
int InterruptSystemSetup(XScuGic *XScuGicInstancePtr)
{
	// Enable interrupt
	XGpio_InterruptEnable(&BTNInst, BTN_INT);
	XGpio_InterruptGlobalEnable(&BTNInst);

	Xil_ExceptionRegisterHandler(XIL_EXCEPTION_ID_INT,
			 	 	 	 	 	 (Xil_ExceptionHandler)XScuGic_InterruptHandler,
			 	 	 	 	 	 XScuGicInstancePtr);
	Xil_ExceptionEnable();
	return XST_SUCCESS;
}

// Setup the interrupt controller:
int IntcInitFunction(u16 DeviceId, XTmrCtr *TmrInstancePtr, XGpio *GpioInstancePtr)
{
	XScuGic_Config *IntcConfig;
	int status;

	// Interrupt controller initialisation
	IntcConfig = XScuGic_LookupConfig(DeviceId);
	status = XScuGic_CfgInitialize(&interrupt_ctl_instance, IntcConfig, IntcConfig->CpuBaseAddress);
	if(status != XST_SUCCESS) return XST_FAILURE;

	// Call to interrupt setup
	status = InterruptSystemSetup(&interrupt_ctl_instance);
	if(status != XST_SUCCESS) return XST_FAILURE;

	// Connect GPIO interrupt to handler
	status = XScuGic_Connect(&interrupt_ctl_instance,
					  	  	 INTC_GPIO_INTERRUPT_ID,
					  	  	 (Xil_ExceptionHandler)BTN_Intr_Handler,
					  	  	 (void *)GpioInstancePtr);
	if(status != XST_SUCCESS) return XST_FAILURE;


	// Connect timer interrupt to handler
	status = XScuGic_Connect(&interrupt_ctl_instance,
							 INTC_TMR_INTERRUPT_ID,
							 (Xil_ExceptionHandler)TMR_Intr_Handler,
							 (void *)TmrInstancePtr);
	if(status != XST_SUCCESS) return XST_FAILURE;

	// Enable GPIO interrupts interrupt
	XGpio_InterruptEnable(GpioInstancePtr, 1);
	XGpio_InterruptGlobalEnable(GpioInstancePtr);

	// Enable GPIO and timer interrupts in the controller
	XScuGic_Enable(&interrupt_ctl_instance, INTC_GPIO_INTERRUPT_ID);

	XScuGic_Enable(&interrupt_ctl_instance, INTC_TMR_INTERRUPT_ID);


	return XST_SUCCESS;
}
