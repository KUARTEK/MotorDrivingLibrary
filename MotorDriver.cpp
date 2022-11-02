#include "MotorDriver.h"

#define EN_DIGITALWRITE
#define STEP_DIGITALWRITE
#define DIR_DIGITALWRITE
MotorDriver::MotorDriver(int enPin, int stepPin, int dirPin)
{
    switch (enPin)
    {
        case 0:
            D0_pinMode = OUTPUT;
            EN_DIGITALWRITE D0_digitalWrite;
            break;
        case 1:
            D1_pinMode = OUTPUT;
            EN_DIGITALWRITE D1_digitalWrite;
            break;
        case 2:
            D2_pinMode = OUTPUT;
            EN_DIGITALWRITE D2_digitalWrite;
            break;
        case 3:
            D3_pinMode = OUTPUT;
            EN_DIGITALWRITE D3_digitalWrite;
            break;
        case 4:
            D4_pinMode = OUTPUT;
            EN_DIGITALWRITE D4_digitalWrite;
            break;
        case 5:
            D5_pinMode = OUTPUT;
            EN_DIGITALWRITE D5_digitalWrite;
            break;
        case 6:
            D6_pinMode = OUTPUT;
            EN_DIGITALWRITE D6_digitalWrite;
            break;
        case 7:
            D7_pinMode = OUTPUT;
            EN_DIGITALWRITE D7_digitalWrite;
            break;
        case 8:
            D8_pinMode = OUTPUT;
            EN_DIGITALWRITE D8_digitalWrite;
            break;
        case 9:
            D9_pinMode = OUTPUT;
            EN_DIGITALWRITE D9_digitalWrite;
            break;
        case 10:
            D10_pinMode = OUTPUT;
            EN_DIGITALWRITE D10_digitalWrite;
            break;
        case 11:
            D11_pinMode = OUTPUT;
            EN_DIGITALWRITE D11_digitalWrite;
            break;
        case 12:
            D12_pinMode = OUTPUT;
            EN_DIGITALWRITE D12_digitalWrite;
            break;
        case 13:
            D13_pinMode = OUTPUT;
            EN_DIGITALWRITE D13_digitalWrite;
            break;
    }
    switch (stepPin)
    {
       case 0:
            D0_pinMode = OUTPUT;
            STEP_DIGITALWRITE D0_digitalWrite;
            break;
        case 1:
            D1_pinMode = OUTPUT;
            STEP_DIGITALWRITE D1_digitalWrite;
            break;
        case 2:
            D2_pinMode = OUTPUT;
            STEP_DIGITALWRITE D2_digitalWrite;
            break;
        case 3:
            D3_pinMode = OUTPUT;
            STEP_DIGITALWRITE D3_digitalWrite;
            break;
        case 4:
            D4_pinMode = OUTPUT;
            STEP_DIGITALWRITE D4_digitalWrite;
            break;
        case 5:
            D5_pinMode = OUTPUT;
            STEP_DIGITALWRITE D5_digitalWrite;
            break;
        case 6:
            D6_pinMode = OUTPUT;
            STEP_DIGITALWRITE D6_digitalWrite;
            break;
        case 7:
            D7_pinMode = OUTPUT;
            STEP_DIGITALWRITE D7_digitalWrite;
            break;
        case 8:
            D8_pinMode = OUTPUT;
            STEP_DIGITALWRITE D8_digitalWrite;
            break;
        case 9:
            D9_pinMode = OUTPUT;
            STEP_DIGITALWRITE D9_digitalWrite;
            break;
        case 10:
            D10_pinMode = OUTPUT;
            STEP_DIGITALWRITE D10_digitalWrite;
            break;
        case 11:
            D11_pinMode = OUTPUT;
            STEP_DIGITALWRITE D11_digitalWrite;
            break;
        case 12:
            D12_pinMode = OUTPUT;
            STEP_DIGITALWRITE D12_digitalWrite;
            break;
        case 13:
            D13_pinMode = OUTPUT;
            STEP_DIGITALWRITE D13_digitalWrite;
            break;
    }
    switch (dirPin)
    {
        case 0:
            D0_pinMode = OUTPUT;
            DIR_DIGITALWRITE D0_digitalWrite;
            break;
        case 1:
            D1_pinMode = OUTPUT;
            DIR_DIGITALWRITE D1_digitalWrite;
            break;
        case 2:
            D2_pinMode = OUTPUT;
            DIR_DIGITALWRITE D2_digitalWrite;
            break;
        case 3:
            D3_pinMode = OUTPUT;
            DIR_DIGITALWRITE D3_digitalWrite;
            break;
        case 4:
            D4_pinMode = OUTPUT;
            DIR_DIGITALWRITE D4_digitalWrite;
            break;
        case 5:
            D5_pinMode = OUTPUT;
            DIR_DIGITALWRITE D5_digitalWrite;
            break;
        case 6:
            D6_pinMode = OUTPUT;
            DIR_DIGITALWRITE D6_digitalWrite;
            break;
        case 7:
            D7_pinMode = OUTPUT;
            DIR_DIGITALWRITE D7_digitalWrite;
            break;
        case 8:
            D8_pinMode = OUTPUT;
            DIR_DIGITALWRITE D8_digitalWrite;
            break;
        case 9:
            D9_pinMode = OUTPUT;
            DIR_DIGITALWRITE D9_digitalWrite;
            break;
        case 10:
            D10_pinMode = OUTPUT;
            DIR_DIGITALWRITE D10_digitalWrite;
            break;
        case 11:
            D11_pinMode = OUTPUT;
            DIR_DIGITALWRITE D11_digitalWrite;
            break;
        case 12:
            D12_pinMode = OUTPUT;
            DIR_DIGITALWRITE D12_digitalWrite;
            break;
        case 13:
            D13_pinMode = OUTPUT;
            DIR_DIGITALWRITE D13_digitalWrite;
            break;
    }
}
// EN_DIGITALWRITE LOW;
void MotorDriver::Clockwise(int step)
{
    DIR_DIGITALWRITE LOW;
    for(int x=0;x<step;x++){
        STEP_DIGITALWRITE HIGH;
        _delay_ms(1);
        STEP_DIGITALWRITE LOW;
        _delay_ms(1);
    }
    _delay_ms(500);
}

void MotorDriver::Counterclockwise(int step)
{
    DIR_DIGITALWRITE HIGH;
    for(int x=0;x<step;x++){
        STEP_DIGITALWRITE HIGH;
        _delay_ms(1);
        STEP_DIGITALWRITE LOW;
        _delay_ms(1);
    }

  _delay_ms(500);
}

void MotorDriver::Stop()
{
  
}
