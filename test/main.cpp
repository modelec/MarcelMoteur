#include "Arduino.h"
#include "motor_control.h"
#include "tasks/motor_task.h"

MotorTask motorTask;

void setup()
{
    initMotors();
    motorTask = MotorTask();
}

void loop()
{
    // Imaginons un obstacle
    if (false)
    {
        motorTask.stop();
    }
    else if (!motorTask.isRunning())
    {
        motorTask.start();
        motorTask.goForward(200, 20);
    }
    delay(20);
}
