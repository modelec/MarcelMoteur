#include "motor_task.h"
#include "motor_control.h"

MotorTask::MotorTask() : Task() {}

MotorTask::~MotorTask()
{
    stop();
}

void MotorTask::start()
{
    Task::start();
}

void MotorTask::stop()
{
    Task::stop();
    stopMotors();
}

void MotorTask::goForward(int speed, int delayTime)
{
    if (isRunning())
    {
        // Code pour accélérer vers l'avant
        accelerateForward(speed, delayTime);
    }
}
void MotorTask::goReverse(int speed, int delayTime)
{
    if (isRunning())
    {
        // Code pour accélérer en marche arrière
        accelerateReverse(speed, delayTime);
    }
}