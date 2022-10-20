#include "MotorDriver.h"

MotorDriver m(2,6,5);

int main (void) {
    
    m.Clockwise(1000);
    m.Counterclockwise(1000);
}