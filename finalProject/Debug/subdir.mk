################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../ExampleWindow.cc \
../MyWindow.cc \
../Window.cc \
../main.cc 

CC_DEPS += \
./ExampleWindow.d \
./MyWindow.d \
./Window.d \
./main.d 

OBJS += \
./ExampleWindow.o \
./MyWindow.o \
./Window.o \
./main.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


