################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Chapter14Project.cpp \
../src/Date.cpp 

CPP_DEPS += \
./src/Chapter14Project.d \
./src/Date.d 

OBJS += \
./src/Chapter14Project.o \
./src/Date.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Chapter14Project.d ./src/Chapter14Project.o ./src/Date.d ./src/Date.o

.PHONY: clean-src

