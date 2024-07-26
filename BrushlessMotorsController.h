#include <Arduino.h>
#include <Servo.h>

enum BRUSHLESS_MOTOR_CONNECTION_PIN
{
  UP_RIGHT_MOTOR_CONNECTION_PIN = 2,
  UP_LEFT_MOTOR_CONNECTION_PIN = 3,
  UP_BACK_MOTOR_CONNECTION_PIN = 5,
  FORWARD_RIGHT_MOTOR_CONNECTION_PIN = 6,
  FORWARD_LEFT_MOTOR_CONNECTION_PIN = 7
  // pwm pin numbers : 2 3 5 6 7 8 9 11 12 13 44 45 46
};

enum MOTOR_NUMBER
{
  UP_RIGHT_MOTOR,
  UP_LEFT_MOTOR,
  UP_BACK_MOTOR,
  FORWARD_RIGHT_MOTOR,
  FORWARD_LEFT_MOTOR
};

class BrushlessMotorsController
{
private:
   servo upRightMotor, upLeftMotor, upBackMotor, forwardRightMotor, forwardLeftMotor; 
public:
  BrushlessMotorsController()
  {
   
  }
  void changeSpeed(MOTOR_NUMBER motor, int dutyCycle){

  }
}
