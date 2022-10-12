#include MotorDriver.h
#include <avr/io.h>
#include <util/delay.h>

MotorDriver::MotorDriver()
{
  
}
DDRD |= _BV(DDD5);
DDRD |= _BV(DDD6);
DDRD |= _BV(DDD2);

PORTD &= ~_BV(PORTD2);
void MotorDriver::forward(int step)
{
    PORTD &= ~_BV(PORTD5);
    for(int x=0;x<1000;x++){
        PORTD |= _BV(PORTD6);
        _delay_ms(1);
        PORTD &= ~_BV(PORTD6);
        _delay_ms(1);
    }
    _delay_ms(500);
}

void MotorDriver::backward(int step)
{
  PORTD |= _BV(PORTD5);
  for(int x=0;x<1000;x++){
  PORTD |= _BV(PORTD6);
  _delay_ms(1);
  PORTD &= ~_BV(PORTD6);
  _delay_ms(1);
  }
        _delay_ms(500);
}

void MotorDriver::stop()
{
  
}
