################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Container.cpp \
../src/HashMultiTree.cpp \
../src/HashTree.cpp \
../src/HashTreeContainer.cpp \
../src/List.cpp \
../src/Object.cpp \
../src/SortedMultiTree.cpp \
../src/SortedTree.cpp \
../src/SortedTreeContainer.cpp \
../src/SquenceContainer.cpp \
../src/TreeContainer.cpp \
../src/Vector.cpp \
../src/main.cpp 

OBJS += \
./src/Container.o \
./src/HashMultiTree.o \
./src/HashTree.o \
./src/HashTreeContainer.o \
./src/List.o \
./src/Object.o \
./src/SortedMultiTree.o \
./src/SortedTree.o \
./src/SortedTreeContainer.o \
./src/SquenceContainer.o \
./src/TreeContainer.o \
./src/Vector.o \
./src/main.o 

CPP_DEPS += \
./src/Container.d \
./src/HashMultiTree.d \
./src/HashTree.d \
./src/HashTreeContainer.d \
./src/List.d \
./src/Object.d \
./src/SortedMultiTree.d \
./src/SortedTree.d \
./src/SortedTreeContainer.d \
./src/SquenceContainer.d \
./src/TreeContainer.d \
./src/Vector.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


