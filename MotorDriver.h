#include <avr/io.h>
#include <util/delay.h>

#ifndef MOTORDRIVER_H
#define MOTORDRIVER_H

typedef struct
{
	unsigned char bit0:1;
	unsigned char bit1:1;
	unsigned char bit2:1;
	unsigned char bit3:1;
	unsigned char bit4:1;
	unsigned char bit5:1;
	unsigned char bit6:1;
	unsigned char bit7:1;
}io_register;

#define D0_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRD))->bit0
#define D1_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRD))->bit1
#define D2_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRD))->bit2
#define D3_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRD))->bit3
#define D4_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRD))->bit4
#define D5_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRD))->bit5
#define D6_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRD))->bit6
#define D7_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRD))->bit7
#define D8_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRB))->bit0
#define D9_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRB))->bit1
#define D10_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRB))->bit2
#define D11_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRB))->bit3
#define D12_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRB))->bit4
#define D13_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRB))->bit5
#define A0_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRC))->bit0
#define A1_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRC))->bit1
#define A2_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRC))->bit2
#define A3_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRC))->bit3
#define A4_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRC))->bit4
#define A5_pinMode  ((volatile io_register*)_SFR_MEM_ADDR(DDRC))->bit5
#define D0_digitalWrite ((volatile io_register*)_SFR_MEM_ADDR(PORTD))->bit0
#define D1_digitalWrite ((volatile io_register*)_SFR_MEM_ADDR(PORTD))->bit1
#define D2_digitalWrite ((volatile io_register*)_SFR_MEM_ADDR(PORTD))->bit2
#define D3_digitalWrite ((volatile io_register*)_SFR_MEM_ADDR(PORTD))->bit3
#define D4_digitalWrite ((volatile io_register*)_SFR_MEM_ADDR(PORTD))->bit4
#define D5_digitalWrite ((volatile io_register*)_SFR_MEM_ADDR(PORTD))->bit5
#define D6_digitalWrite ((volatile io_register*)_SFR_MEM_ADDR(PORTD))->bit6
#define D7_digitalWrite ((volatile io_register*)_SFR_MEM_ADDR(PORTD))->bit7
#define D8_digitalWrite  ((volatile io_register*)_SFR_MEM_ADDR(PORTB))->bit0
#define D9_digitalWrite  ((volatile io_register*)_SFR_MEM_ADDR(PORTB))->bit1
#define D10_digitalWrite  ((volatile io_register*)_SFR_MEM_ADDR(PORTB))->bit2
#define D11_digitalWrite  ((volatile io_register*)_SFR_MEM_ADDR(PORTB))->bit3
#define D12_digitalWrite  ((volatile io_register*)_SFR_MEM_ADDR(PORTB))->bit4
#define D13_digitalWrite  ((volatile io_register*)_SFR_MEM_ADDR(PORTB))->bit5
#define A0_digitalWrite ((volatile io_register*)_SFR_MEM_ADDR(PORTC))->bit0
#define A1_digitalWrite ((volatile io_register*)_SFR_MEM_ADDR(PORTC))->bit1
#define A2_digitalWrite ((volatile io_register*)_SFR_MEM_ADDR(PORTC))->bit2
#define A3_digitalWrite ((volatile io_register*)_SFR_MEM_ADDR(PORTC))->bit3
#define A4_digitalWrite ((volatile io_register*)_SFR_MEM_ADDR(PORTC))->bit4
#define A5_digitalWrite ((volatile io_register*)_SFR_MEM_ADDR(PORTC))->bit5

class MotorDriver
{
  public:
    MotorDriver(int enPin, int dirPin, int stepPins);
    void Clockwise(int step,int delayTime);
    void Counterclockwise(int step, int delayTime);
    void Stop();
};

#endif

