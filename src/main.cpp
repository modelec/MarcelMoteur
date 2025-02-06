//
// Created by CHAUVEAU Maxime on 06/02/2025.
//

#include <Arduino.h>
#include "motor_control.h"

void setup() {
    initMotors();
}

void loop() {
    accelerateForward(200, 20);

    delay(500);

    decelerateForward(200, 20);
    delay(500);

    moveOpposite(80, 3000);
    delay(2000);

    accelerateReverse(200, 20);
    delay(500);

    decelerateReverse(200, 20);
    delay(500);

    moveOpposite(80, 3000);
    delay(2000);

    stopMotors();
    delay(2000);
}
