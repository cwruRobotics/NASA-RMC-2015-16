################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../cpp/src/USBSerial/USBSerial.o 

CPP_SRCS += \
../cpp/src/USBSerial/USBSerial.cpp 

OBJS += \
./cpp/src/USBSerial/USBSerial.o 

CPP_DEPS += \
./cpp/src/USBSerial/USBSerial.d 


# Each subdirectory must supply rules for building sources it contributes
cpp/src/USBSerial/%.o: ../cpp/src/USBSerial/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DGXX_EXPERIMENTAL_CXX0X -D__cplusplus=201103L -I"/home/anno/Projects/Eclipse C++ Workspace/NASA_RMC_2015_16/MessageSystem/cpp/Robos/include" -I"/home/anno/Projects/Eclipse C++ Workspace/NASA_RMC_2015_16/MessageSystem/cpp/Async/include" -I"/home/anno/Projects/Eclipse C++ Workspace/NASA_RMC_2015_16/cpp/include" -I"/home/anno/Projects/Eclipse C++ Workspace/NASA_RMC_2015_16/MessageSystem/cpp/Utilities/include" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


