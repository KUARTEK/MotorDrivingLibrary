#include "MotorDriver.h"

char enablePin;
char directionPin;
char stepPin;
MotorDriver::MotorDriver(int enPin, int dirPin, int stepPins)
{
    switch (enPin)
    {
        case 0:
            D0_pinMode = 1;
            enablePin =  D0_digitalWrite;
            break;
        case 1:
            D1_pinMode = 1;
            enablePin =  D1_digitalWrite;
            break;
        case 2:
            D2_pinMode = 1;
            enablePin =  D2_digitalWrite;
            break;
        case 3:
            D3_pinMode = 1;
            enablePin =  D3_digitalWrite;
            break;
        case 4:
            D4_pinMode = 1;
            enablePin =  D4_digitalWrite;
            break;
        case 5:
            D5_pinMode = 1;
            enablePin =  D5_digitalWrite;
            break;
        case 6:
            D6_pinMode = 1;
            enablePin =  D6_digitalWrite;
            break;
        case 7:
            D7_pinMode = 1;
            enablePin =  D7_digitalWrite;
            break;
        case 8:
            D8_pinMode = 1;
            enablePin =  D8_digitalWrite;
            break;
        case 9:
            D9_pinMode = 1;
            enablePin =  D9_digitalWrite;
            break;
        case 10:
            D10_pinMode = 1;
            enablePin =  D10_digitalWrite;
            break;
        case 11:
            D11_pinMode = 1;
            enablePin =  D11_digitalWrite;
            break;
        case 12:
            D12_pinMode = 1;
            enablePin =  D12_digitalWrite;
            break;
        case 13:
            D13_pinMode = 1;
            enablePin =  D13_digitalWrite;
            break;
    }
    switch (dirPin)
    {
       case 0:
            D0_pinMode = 1;
            directionPin =  D0_digitalWrite;
            break;
        case 1:
            D1_pinMode = 1;
            directionPin =  D1_digitalWrite;
            break;
        case 2:
            D2_pinMode = 1;
            directionPin =  D2_digitalWrite;
            break;
        case 3:
            D3_pinMode = 1;
            directionPin =  D3_digitalWrite;
            break;
        case 4:
            D4_pinMode = 1;
            directionPin =  D4_digitalWrite;
            break;
        case 5:
            D5_pinMode = 1;
            directionPin =  D5_digitalWrite;
            break;
        case 6:
            D6_pinMode = 1;
            directionPin =  D6_digitalWrite;
            break;
        case 7:
            D7_pinMode = 1;
            directionPin =  D7_digitalWrite;
            break;
        case 8:
            D8_pinMode = 1;
            directionPin =  D8_digitalWrite;
            break;
        case 9:
            D9_pinMode = 1;
            directionPin =  D9_digitalWrite;
            break;
        case 10:
            D10_pinMode = 1;
            directionPin =  D10_digitalWrite;
            break;
        case 11:
            D11_pinMode = 1;
            directionPin =  D11_digitalWrite;
            break;
        case 12:
            D12_pinMode = 1;
            directionPin =  D12_digitalWrite;
            break;
        case 13:
            D13_pinMode = 1;
            directionPin =  D13_digitalWrite;
            break;
    }
    switch (stepPins)
    {
        case 0:
            D0_pinMode = 1;
            stepPin =  D0_digitalWrite;
            break;
        case 1:
            D1_pinMode = 1;
            stepPin =  D1_digitalWrite;
            break;
        case 2:
            D2_pinMode = 1;
            stepPin =  D2_digitalWrite;
            break;
        case 3:
            D3_pinMode = 1;
            stepPin =  D3_digitalWrite;
            break;
        case 4:
            D4_pinMode = 1;
            stepPin =  D4_digitalWrite;
            break;
        case 5:
            D5_pinMode = 1;
            stepPin =  D5_digitalWrite;
            break;
        case 6:
            D6_pinMode = 1;
            stepPin =  D6_digitalWrite;
            break;
        case 7:
            D7_pinMode = 1;
            stepPin =  D7_digitalWrite;
            break;
        case 8:
            D8_pinMode = 1;
            stepPin =  D8_digitalWrite;
            break;
        case 9:
            D9_pinMode = 1;
            stepPin =  D9_digitalWrite;
            break;
        case 10:
            D10_pinMode = 1;
            stepPin =  D10_digitalWrite;
            break;
        case 11:
            D11_pinMode = 1;
            stepPin =  D11_digitalWrite;
            break;
        case 12:
            D12_pinMode = 1;
            stepPin =  D12_digitalWrite;
            break;
        case 13:
            D13_pinMode = 1;
            stepPin =  D13_digitalWrite;
            break;
    }
    enablePin = 0;
    directionPin = 0;
}

void MotorDriver::Clockwise(int step, int delayTime)
{
    for(int x=0; x<step ;x++){
        stepPin = 1;
        _delay_ms(delayTime);
        stepPin = 0;
        _delay_ms(delayTime);
    }
    // _delay_ms(500);
}

void MotorDriver::Counterclockwise(int step, int delayTime)
{
    for(int x=0;x<step;x++){
        stepPin = 1;
        _delay_ms(delayTime);
        stepPin = 0;
        _delay_ms(delayTime);
    }
    _delay_ms(500);
}

void MotorDriver::Stop()
{
  stepPin = 0;
}
