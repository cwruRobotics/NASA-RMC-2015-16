################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../cpp/src/Autonomous/AutonomousNode.cpp 

OBJS += \
./cpp/src/Autonomous/AutonomousNode.o 

CPP_DEPS += \
./cpp/src/Autonomous/AutonomousNode.d 


# Each subdirectory must supply rules for building sources it contributes
cpp/src/Autonomous/%.o: ../cpp/src/Autonomous/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -DGXX_EXPERIMENTAL_CXX0X -D__cplusplus=201103L -I"/home/anno/Projects/Eclipse C++ Workspace/NASA_RMC_2015_16/MessageSystem/cpp/Robos/include" -I"/home/anno/Projects/Eclipse C++ Workspace/NASA_RMC_2015_16/MessageSystem/cpp/Async/include" -I"/home/anno/Projects/Eclipse C++ Workspace/NASA_RMC_2015_16/cpp/include" -I"/home/anno/Projects/Eclipse C++ Workspace/NASA_RMC_2015_16/MessageSystem/cpp/Utilities/include" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


