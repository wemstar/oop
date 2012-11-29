################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BadIndexError.cpp \
../src/Container.cpp \
../src/Dobule.cpp \
../src/Int.cpp \
../src/Object.cpp \
../src/SquenceContainer.cpp \
../src/Vector.cpp \
../src/VectorStandardError.cpp \
../src/main.cpp 

OBJS += \
./src/BadIndexError.o \
./src/Container.o \
./src/Dobule.o \
./src/Int.o \
./src/Object.o \
./src/SquenceContainer.o \
./src/Vector.o \
./src/VectorStandardError.o \
./src/main.o 

CPP_DEPS += \
./src/BadIndexError.d \
./src/Container.d \
./src/Dobule.d \
./src/Int.d \
./src/Object.d \
./src/SquenceContainer.d \
./src/Vector.d \
./src/VectorStandardError.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


