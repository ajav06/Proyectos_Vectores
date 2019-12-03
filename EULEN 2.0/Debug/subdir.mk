################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Controlador.cpp \
../MArticulo.cpp \
../MCovencional.cpp \
../MEULEN.cpp \
../MHospital.cpp \
../MINdustrial.cpp \
../MPersona.cpp \
../MServicios.cpp \
../Principal.cpp \
../VEULEN.cpp \
../VGeneral.cpp \
../VServicios.cpp 

OBJS += \
./Controlador.o \
./MArticulo.o \
./MCovencional.o \
./MEULEN.o \
./MHospital.o \
./MINdustrial.o \
./MPersona.o \
./MServicios.o \
./Principal.o \
./VEULEN.o \
./VGeneral.o \
./VServicios.o 

CPP_DEPS += \
./Controlador.d \
./MArticulo.d \
./MCovencional.d \
./MEULEN.d \
./MHospital.d \
./MINdustrial.d \
./MPersona.d \
./MServicios.d \
./Principal.d \
./VEULEN.d \
./VGeneral.d \
./VServicios.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


