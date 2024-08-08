#include "BrushlessMotorsController.h"

void setup()
{ BrushlessMotorsController motor;
    motor.changeSpeed(UP_RIGHT_MOTOR,1500);
    delay(2000);
    for(int i =1500; i <= 1900; i=i+50 ){
            motor.changeSpeed(UP_RIGHT_MOTOR,i);
            delay(2000);
    }

}
void loop()
{
   

}
