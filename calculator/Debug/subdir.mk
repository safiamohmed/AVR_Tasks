################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DIO_program.c \
../KEYPAD_PROGRAM.c \
../LCD_PROGRAM.c \
../LED_Programe.c \
../calc.c \
../main.c 

OBJS += \
./DIO_program.o \
./KEYPAD_PROGRAM.o \
./LCD_PROGRAM.o \
./LED_Programe.o \
./calc.o \
./main.o 

C_DEPS += \
./DIO_program.d \
./KEYPAD_PROGRAM.d \
./LCD_PROGRAM.d \
./LED_Programe.d \
./calc.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


