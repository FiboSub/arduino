#include <Arduino.h>
#include <Servo.h>


servo upRightMotor, upLeftMotor, upBackMotor, forwardRightMotor, forwardLeftMotor;

class BrushlessMotorsController
{
public:
  BrushlessMotorsController()
  {
    upRightMotor.attach(UP_RIGHT_MOTOR_CONNECTION_PIN);
    upLeftMotor.attach(UP_LEFT_MOTOR_CONNECTION_PIN);
    upBackMotor.attach(UP_BACK_MOTOR_CONNECTION_PIN);
    forwardRightMotor.attach(FORWARD_RIGHT_MOTOR_CONNECTION_PIN);
    forwardLeftMotor.attach(FORWARD_LEFT_MOTOR_CONNECTION_PIN);
  }

  void changeSpeed(MOTOR_NUMBER motor, int dutyCycle)
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
}
