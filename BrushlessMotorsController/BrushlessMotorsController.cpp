#include <Arduino.h>
#include <Servo.h>
#include "BrushlessMotorsController.h"


BrushlessMotorsController::BrushlessMotorsController()
  {
    this->upRightMotor.attach(UP_RIGHT_MOTOR_CONNECTION_PIN);
    this->upLeftMotor.attach(UP_LEFT_MOTOR_CONNECTION_PIN);
    this->upBackMotor.attach(UP_BACK_MOTOR_CONNECTION_PIN);
    this->forwardRightMotor.attach(FORWARD_RIGHT_MOTOR_CONNECTION_PIN);
    this->forwardLeftMotor.attach(FORWARD_LEFT_MOTOR_CONNECTION_PIN);
  }

  void BrushlessMotorsController::changeSpeed(MOTOR_NUMBER motor, int dutyCycle)
  {
    switch (motor)
    {
    case UP_RIGHT_MOTOR:
      upRightMotor.writeMicroseconds(dutyCycle);
      break;
    case UP_LEFT_MOTOR:
      upLeftMotor.writeMicroseconds(dutyCycle);
      break;
    case UP_BACK_MOTOR:
      upBackMotor.writeMicroseconds(dutyCycle);
      break;
    case FORWARD_RIGHT_MOTOR:
      forwardRightMotor.writeMicroseconds(dutyCycle);
      break;
    case FORWARD_LEFT_MOTOR:
      forwardLeftMotor.writeMicroseconds(dutyCycle);
      break;
    }
  }

