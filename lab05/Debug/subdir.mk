################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../BaseClass.cpp \
../CountedPtr.cpp \
../array.cpp \
../lab_2012-11-14.cpp 

OBJS += \
./BaseClass.o \
./CountedPtr.o \
./array.o \
./lab_2012-11-14.o 

CPP_DEPS += \
./BaseClass.d \
./CountedPtr.d \
./array.d \
./lab_2012-11-14.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


