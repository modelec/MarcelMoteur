#ifndef MOTORTASK_H
#define MOTORTASK_H

#include "Task.h"

class MotorTask : public Task
{
public:
    MotorTask();
    ~MotorTask();
    void start();
    void stop();
    void goForward(int speed, int delayTime);
    void goReverse(int speed, int delayTime);
};

#endif // MOTORTASK_H