################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/DataReader.cpp \
../src/Fit.cpp \
../src/FitExceptions.cpp \
../src/Fitter.cpp \
../src/LinearFit.cpp \
../src/SlopeFit.cpp \
../src/main.cpp 

OBJS += \
./src/DataReader.o \
./src/Fit.o \
./src/FitExceptions.o \
./src/Fitter.o \
./src/LinearFit.o \
./src/SlopeFit.o \
./src/main.o 

CPP_DEPS += \
./src/DataReader.d \
./src/Fit.d \
./src/FitExceptions.d \
./src/Fitter.d \
./src/LinearFit.d \
./src/SlopeFit.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


