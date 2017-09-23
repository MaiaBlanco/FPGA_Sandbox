#include <stdio.h>
//#include "xparameters.h"
#include "platform.h"
#include "xil_printf.h"
/*
#include "xtmrctr.h"
//#include "xil_exception.h"
#include "xscugic.h"
#include "xgpio.h"
#include "xtime_l.h"


// Defines:
#define INTC_DEVICE_ID		XPAR_SCUGIC_SINGLE_DEVICE_ID
#define TMRCTR_DEVICE_ID	XPAR_TMRCTR_0_DEVICE_ID
#define BTNS_DEVICE_ID		XPAR_AXI_GPIO_1_DEVICE_ID
#define LEDS_DEVICE_ID 		XPAR_AXI_GPIO_0_DEVICE_ID

#define INTC_GPIO_INTERRUPT_ID 	XPAR_FABRIC_AXI_GPIO_1_IP2INTC_IRPT_INTR
#define INTC_TMR_INTERRUPT_ID 	XPAR_FABRIC_AXI_TIMER_0_INTERRUPT_INTR

#define INTC				XScuGic
#define INTC_HANDLER		XScuGic_InterruptHandler
#define TMR_RESET_VALUE	 	0xFF000000//0BDBF
#define TIMER_CNTR_0	 	0
#define XPAR_TMRCTR_0_CLOCK_FREQ_HZ XPAR_AXI_TIMER_0_CLOCK_FREQ_HZ
#define BTN_INT 			XGPIO_IR_CH1_MASK
#define TIMER_COUNT_LIM 	100
#define TEST_NUMBER_MASK 	0xF
// Define so that if I increase the BRAM size later I don't need to
// change loop bounds for the BRAM tests:
#define BRAM_SIZE_IN_WORDS ((XPAR_BRAM_0_HIGHADDR-XPAR_BRAM_0_BASEADDR) >> 2)

// Global variables:
XTmrCtr timer_instance;
XScuGic interrupt_ctl_instance;
XGpio LEDInst, BTNInst;
static int led_data;
static int btn_value;
static int tmr_count;
volatile int timer_expired;
static int test_number;
static int timer_count_lim_adj;


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
		//printf("Timertick\n\r");
		// if the timer has expired TIMER_COUNT_LIM times, stop and increment the counter
		// Then reset the timer and start it again
		// Also blink the 7th LED.
		if (tmr_count >= TIMER_COUNT_LIM + timer_count_lim_adj)
		{
			XTmrCtr_Stop(&timer_instance, 0);
			printf("Timer count > %d\n\r", TIMER_COUNT_LIM);
			tmr_count = 0;
			led_data = XGpio_DiscreteRead(&LEDInst, 1);
			if (led_data >= 0x80u)
			{
				led_data &= 0x7Fu;
			}
			else
			{
				led_data |= 0x80u;
			}
			XGpio_DiscreteWrite(&LEDInst, 1, (u32)led_data);
			// Reset the timer counter
			XTmrCtr_Reset(&timer_instance, 0);
			XTmrCtr_Start(&timer_instance, 0);
		}
		else tmr_count ++;
	}
}

*/
// Main function
int main()
{
	init_platform();
//
//	double time_elapsed;
//	XTime t_start, t_end;
//	int i, k;
//	unsigned int data;
//    int Status;
//
//    test_number = 0;
//	timer_count_lim_adj = 0;

    print("Beginning test d: Init timer, GPIO, and buttons with interrupts.\n\r");//,
    		//test_number);

//    // Initialize the LEDs:
//    Status = XGpio_Initialize(&LEDInst, LEDS_DEVICE_ID);
//    if (Status != XST_SUCCESS) return XST_FAILURE;
//    // Init the pushbuttons:
//    Status = XGpio_Initialize(&BTNInst, BTNS_DEVICE_ID);
//    if (Status != XST_SUCCESS) return XST_FAILURE;
//    // Set direction of LEDs to be outputs:
//    XGpio_SetDataDirection(&LEDInst, 1, 0x00);
//    // Set buttons to be inputs:
//    XGpio_SetDataDirection(&BTNInst, 1, 0xFF);
//
//    print("Buttons and LED GPIO initialized!\n\r");
//
//    print("Initializing the timer...\n\r");
//    // Initialize the timer:
//    Status = XTmrCtr_Initialize(&timer_instance, TMRCTR_DEVICE_ID);
//    if (Status != XST_SUCCESS) return XST_FAILURE;
//    // Note that self-test is destructive (resets all settings from whatever they
//    // currently are) so plan to set it back up after calling this:
//    //Status = XTmrCtr_SelfTest(&timer_instance, TMRCTR_DEVICE_ID);
//    //if (Status != XST_SUCCESS) return XST_FAILURE;
//    // Set the interrupt handler for the timer:
//    XTmrCtr_SetHandler(&timer_instance, TMR_Intr_Handler, &timer_instance);
//    XTmrCtr_SetResetValue(&timer_instance, 0, TMR_RESET_VALUE);
//    XTmrCtr_SetOptions(&timer_instance, 0, XTC_INT_MODE_OPTION | XTC_AUTO_RELOAD_OPTION);
//
//    print("Initializing interrupt controller...\n\r");
//
//    // Initialize the interrupt controller:
//    Status = IntcInitFunction(INTC_DEVICE_ID, &timer_instance, &BTNInst);
//    if(Status != XST_SUCCESS) return XST_FAILURE;
//
//    print("Starting timer.\n\r");
//
//    // Finish by starting the timer:
//    XTmrCtr_Start(&timer_instance, 0);
//    print("Everything running!\n\rHello World!\n\r");


    //while(1);
/*

    // Test 1: Initialize all BRAM locations by writing increasing 32-bit counts
    // starting from 0 in location 0.
    // Given a BRAM of size 64KB and a word size of 4B (32 bits),
    // this is 16384 writes starting at offset 0.
    // Note that the defined bound will automatically update for changed BRAM size.
    for (i = 0; i < BRAM_SIZE_IN_WORDS; i++)
    {
    	Xil_Out32(XPAR_BRAM_0_BASEADDR + (i << 2), i);
    }

    // Test 2: Now read back the values from BRAM and verify that they are correct:
    //// (for fun, counting from the high address down to low address
    for (i = 0; i < BRAM_SIZE_IN_WORDS; i++)
    {
    	data = Xil_In32(i);
    	if ( data != i )
    	{
    		printf("ERROR: value read was %u instead of %u.\n\r",
    				data, i);
    	}
    }

    // Test 3: Continue the 32 bit counts, overwriting the old values and
    // continuing the count from earlier.
    k = 16384;	// Starting from last value
    for (i = 0; i < 16384; i++)
    {
    	Xil_Out32(XPAR_BRAM_0_BASEADDR + (i << 2), i+k);
    }

    // Test 4: Read the values back again and check that they are correct.
    for (i = 0; i < BRAM_SIZE_IN_WORDS; i++)
    {
    	data = Xil_In32(i);
    	if ( data != i+k )
    	{
    		printf("ERROR: value read was %u instead of %u.\n\r",
    				data, i+k);
    	}
    }

    // Test 5a: Testing the steady-state BW in B/s when reading the same BRAM location repeatedly.
    // TODO: augment by making a RNG in the FPGA and using that to determine the read address
    k = BRAM_SIZE_IN_WORDS / 2;
    XTime_GetTime(&t_start);
    for (i = 0; i < 0xFFFF; i ++)
    {
    	data = Xil_In32(XPAR_BRAM_0_BASEADDR + (k << 2));
    }
    XTime_GetTime(&t_end);
    time_elapsed = (double) ((t_end-t_start) / COUNTS_PER_SECOND);
    printf("Performed %u memory reads at address %u in %f seconds.\n\r",
    		0xFFFF, XPAR_BRAM_0_BASEADDR + (k << 2), time_elapsed);
    printf("Data read rate: %f B/s\n\r", (0xFFFF << 2) / time_elapsed);

    // Test 5b: Testing the steady-state BW in B/s when writing the same BRAM location repeatedly.
    data = 0x6367u;
    XTime_GetTime(&t_start);
    for (i = 0; i < 0xFFFF; i ++)
    {
    	Xil_Out32(XPAR_BRAM_0_BASEADDR + (k << 2), data);
    }
    XTime_GetTime(&t_end);
    time_elapsed = (double) ((t_end-t_start) / COUNTS_PER_SECOND);
    printf("Performed %u memory writes of %u at address %u in %f seconds.\n\r",
    		0xFFFF, data, XPAR_BRAM_0_BASEADDR + (k << 2), time_elapsed);
    printf("Data write rate: %f B/s\n\r", (0xFFFF << 2) / time_elapsed);

    // Test 6a: Test the steady-state BW in B/s when reading sequential BRAM locations repeatedly.
    XTime_GetTime(&t_start);
    for (i = BRAM_SIZE_IN_WORDS-1; i >= 0; i --)
    {
    	data = Xil_In32(XPAR_BRAM_0_BASEADDR + (i << 2));
    }
    XTime_GetTime(&t_end);
    time_elapsed = (double) ((t_end-t_start) / COUNTS_PER_SECOND);
    printf("Performed %u memory reads at decreasing sequential addresses in %f seconds.\n\r",
    		BRAM_SIZE_IN_WORDS, time_elapsed);
    printf("Data read rate: %f B/s\n\r", (BRAM_SIZE_IN_WORDS << 2) / time_elapsed);

    // Test 6b: Test the steady-state BW in B/s when writing the sequential BRAM locations repeatedly.
    XTime_GetTime(&t_start);
    for (i = BRAM_SIZE_IN_WORDS-1; i >= 0; i --)
    {
    	Xil_Out32(XPAR_BRAM_0_BASEADDR + (i << 2), i);
    }
    XTime_GetTime(&t_end);
    time_elapsed = (double) ((t_end-t_start) / COUNTS_PER_SECOND);
    printf("Performed %u memory writes at decreasing sequential addresses in %f seconds.\n\r",
    		BRAM_SIZE_IN_WORDS, time_elapsed);
    printf("Data read rate: %f B/s\n\r", (BRAM_SIZE_IN_WORDS << 2) / time_elapsed);

    // Test 7: Determine if BRAMS reads and writes are cached by the ARM core.
    // Idea for this: we know that the cache is 64KB
    // Therefore, we can "warm it up" by reading sequentially within one 64KB block.
    // Then we can read, and record the time for accesses.
    // After that, going to need to expand the BRAM size to go beyond cache size...
    // with a bigger BRAM, now write outside of the initial 64KB block, and then measure
    // read times for accesses to the old 64KB block.


    printf("All tests completed. Have a nice day!\n\r");
    timer_count_lim_adj = 90;


    */
    cleanup_platform();
    return 0;
}

// Function definitions:
/*
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
*/
