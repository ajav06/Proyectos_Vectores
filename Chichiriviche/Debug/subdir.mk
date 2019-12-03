################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Controlador.cpp \
../MArticulo.cpp \
../MAsociacion.cpp \
../MCayo.cpp \
../MLanchero.cpp \
../MPersona.cpp \
../MTraslado.cpp \
../Principal.cpp \
../VAsociacion.cpp \
../VGeneral.cpp 

OBJS += \
./Controlador.o \
./MArticulo.o \
./MAsociacion.o \
./MCayo.o \
./MLanchero.o \
./MPersona.o \
./MTraslado.o \
./Principal.o \
./VAsociacion.o \
./VGeneral.o 

CPP_DEPS += \
./Controlador.d \
./MArticulo.d \
./MAsociacion.d \
./MCayo.d \
./MLanchero.d \
./MPersona.d \
./MTraslado.d \
./Principal.d \
./VAsociacion.d \
./VGeneral.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


