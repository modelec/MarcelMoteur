#include "motor_control.h"


void initMotors() {
    pinMode(IN1A, OUTPUT);
    pinMode(IN1B, OUTPUT);
    pinMode(IN2A, OUTPUT);
    pinMode(IN2B, OUTPUT);

    stopMotors();
}

void accelerateForward(int speed, int delayTime) {
    digitalWrite(IN1A, LOW);
    digitalWrite(IN1B, LOW);

    for (int i = 0; i < speed; i++) {
        analogWrite(IN2A, i);
        analogWrite(IN2B, i);
        delay(delayTime);
    }
}

void decelerateForward(int speed, int delayTime) {
    for (int i = speed; i >= 0; i--) {
        analogWrite(IN2A, i);
        analogWrite(IN2B, i);
        delay(delayTime);
    }
}

void accelerateReverse(int speed, int delayTime) {
    digitalWrite(IN2A, LOW);
    digitalWrite(IN2B, LOW);
    for (int i = 0; i < speed; i++) {
        analogWrite(IN1A, i);
        analogWrite(IN1B, i);
        delay(delayTime);
    }
}

void decelerateReverse(int speed, int delayTime) {
    for (int i = speed; i >= 0; i--) {
        analogWrite(IN1A, i);
        analogWrite(IN1B, i);
        delay(delayTime);
    }
}

void moveOpposite(int speed, int duration) {
    digitalWrite(IN1A, LOW);
    digitalWrite(IN2B, LOW);
    analogWrite(IN1B, speed);
    analogWrite(IN2A, speed);
    delay(duration);
}

void stopMotors() {
    analogWrite(IN1A, 0);
    analogWrite(IN1B, 0);
    analogWrite(IN2A, 0);
    analogWrite(IN2B, 0);
}
