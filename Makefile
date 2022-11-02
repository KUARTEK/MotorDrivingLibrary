default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o MotorDriver.o MotorDriver.cpp
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o Main.o Main.cpp
	avr-gcc MotorDriver.o main.o -o proj