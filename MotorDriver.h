#ifndef MotorDriver
#define MotorDriver

#include <avr/io.h>
#include <util/delay.h>

class MotorDriver
{
  public:
    MotorDriver();
    void forward(int step);
    void backward(int step);
    void stop();
  private:
};

#endif

