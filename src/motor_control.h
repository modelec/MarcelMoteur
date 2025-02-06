#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

#include <Arduino.h>  // Nécessaire pour PlatformIO


// Définition des broches moteur (PWM)
#define IN1A 3
#define IN1B 5
#define IN2A 6
#define IN2B 9

// Fonction pour initialiser les moteurs
void initMotors();

// Fonction pour accélérer les moteurs vers l'avant
void accelerateForward(int speed, int delayTime);

// Fonction pour décélérer les moteurs
void decelerateForward(int speed, int delayTime);

// Fonction pour accélérer en marche arrière
void accelerateReverse(int speed, int delayTime);

// Fonction pour décélérer en marche arrière
void decelerateReverse(int speed, int delayTime);

// Fonction pour faire tourner les moteurs dans des directions opposées
void moveOpposite(int speed, int duration);

// Fonction pour arrêter les moteurs
void stopMotors();

#endif

