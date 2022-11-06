#include "MotorDriver.h"

int main (void) {
    MotorDriver m(2,5,6);
    m.Clockwise(1000);
    // m.Counterclockwise(1000);
}