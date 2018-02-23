################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Client.cpp \
../src/Date.cpp \
../src/tp2.cpp \
../src/validationFormat.cpp 

OBJS += \
./src/Client.o \
./src/Date.o \
./src/tp2.o \
./src/validationFormat.o 

CPP_DEPS += \
./src/Client.d \
./src/Date.d \
./src/tp2.d \
./src/validationFormat.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++1y -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


