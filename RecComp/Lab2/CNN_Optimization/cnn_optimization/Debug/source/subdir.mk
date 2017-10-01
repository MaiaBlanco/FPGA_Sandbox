################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/afs/ece.cmu.edu/usr/markb1/Documents/fpga_sandbox/RecComp/Lab2/CNN_Optimization/kernel.cpp 

OBJS += \
./source/kernel.o 

CPP_DEPS += \
./source/kernel.d 


# Each subdirectory must supply rules for building sources it contributes
source/kernel.o: /afs/ece.cmu.edu/usr/markb1/Documents/fpga_sandbox/RecComp/Lab2/CNN_Optimization/kernel.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DAESL_TB -D__llvm__ -D__llvm__ -I/afs/ece/support/xilinx/xilinx.release/Vivado-2017.2/Vivado_HLS/2017.2/lnx64/tools/auto_cc/include -I/afs/ece.cmu.edu/usr/markb1/Documents/fpga_sandbox/RecComp/Lab2/CNN_Optimization -I/afs/ece/support/xilinx/xilinx.release/Vivado-2017.2/Vivado_HLS/2017.2/include/ap_sysc -I/afs/ece/support/xilinx/xilinx.release/Vivado-2017.2/Vivado_HLS/2017.2/include -I/afs/ece/support/xilinx/xilinx.release/Vivado-2017.2/Vivado_HLS/2017.2/lnx64/tools/systemc/include -I/afs/ece/support/xilinx/xilinx.release/Vivado-2017.2/Vivado_HLS/2017.2/include/etc -IC:/Users/markb/Source/Repos/FPGA_Sandbox/RecComp/Lab2/CNN_Optimization -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


