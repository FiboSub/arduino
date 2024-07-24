#include <Arduino.h>
#include <Servo.h>

enum BRUSHLESS_MOTOR_CONNECTION_PIN{
 BRUSHLESS_MOTOR1_CONNECTION_PIN = 2, 
 BRUSHLESS_MOTOR2_CONNECTION_PIN = 3,
 BRUSHLESS_MOTOR3_CONNECTION_PIN = 5,
 BRUSHLESS_MOTOR4_CONNECTION_PIN = 6,
 BRUSHLESS_MOTOR5_CONNECTION_PIN = 7
// pwm pin numbers : 2 3 5 6 7 8 9 11 12 13 44 45 46 
};

enum MOTOR_NUMBER{
 UP_RIGHT_MOTOR = 1,
 UP_LEFT_MOTOR = 2,
 UP_BACK_MOTOR = 3,
 FORWARD_RIGHT_MOTOR = 4,
 FORWARD_LEFT_MOTOR = 5
};
 
servo Motor1;
servo Motor2;
servo Motor3;
servo Motor4;
servo Motor5;

public class brushlessMotorControler{

  private:
     
    BRUSHLESS_MOTOR_CONNECTION_PIN  pin;
    MOTOR_NUMBER motor;


  
  public:
     brushlessMotorControler(MOTOR_NUMBER motor){
   
     switch(motor){
            case 1 : Motor1.attach(BRUSHLESS_MOTOR1_CONNECTION_PIN);
             break;
            case 2 : Motor2.attach(BRUSHLESS_MOTOR2_CONNECTION_PIN);
             brak;
            case 3 : Motor3.attach(BRUSHLESS_MOTOR3_CONNECTION_PIN);
             brak;
            case 4 : Motor4.attach(BRUSHLESS_MOTOR4_CONNECTION_PIN);
             brak;
            case 5 : Motor5.attach(BRUSHLESS_MOTOR5_CONNECTION_PIN);
             brak;
             
     }
    }
     void changeSpeed( MOTOR_NUMBER motor, int dutyCycle){
      switch(motor){
        case 1 :  Motor1.writeMicroseconds(dutyCycle);
           break;
       case 2 :  Motor2.writeMicroseconds(dutyCycle);
           break;
       case 3 :   Motor3.writeMicroseconds(dutyCycle);
           break;
       case 4 :  Motor4.writeMicroseconds(dutyCycle);
           break;
       case 5 :  Motor5.writeMicroseconds(dutyCycle);
           break;
      }
     }
}         
