default:
	avr-gcc -Wall -Os -mmcu=atmega328p -c Main.cpp -o Main.o
	avr-gcc -Wall -Os -mmcu=atmega328p -c MotorDriver.cpp -o MotorDriver.o
	avr-gcc -Wall -Os -mmcu=atmega328p -o main.elf Main.o MotorDriver.o
	avr-objcopy -j .text -j .data -O ihex main.elf main.hex 
	avr-size --format=avr --mcu=atmega328p main.elf
	avrdude -v -p atmega328p -c arduino -P COM7 -b 115200 -U flash:w:main.hex:i