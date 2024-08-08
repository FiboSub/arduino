#include "BrushlessMotorsController.h"

BrushlessMotorsController *motor;

void setup()
{
    Serial.begin(9600);

    motor = new BrushlessMotorsController();

    motor->changeSpeed(UP_RIGHT_MOTOR, 1500);
    delay(2000);


    // for (int i = 1550; i <= 2000; i++)
    // {
    //     motor->changeSpeed(UP_RIGHT_MOTOR, i);
    //     delay(1000);
    // }

    // for (int i = 1450; i <= 1150; i -= 50)
    // {
    //     motor->changeSpeed(UP_RIGHT_MOTOR, i);
    //     delay(1000);
    // }
}

void loop() {
    if (Serial.available() > 0) {
        long dc = Serial.parseInt();
        Serial.read();
        Serial.print("entered value == ");
        Serial.print(dc);
        motor->changeSpeed(UP_RIGHT_MOTOR, dc);
        delay(500);
    }
}
// {
//     for (int i = 1100; i <= 1900; i = i + 50)
//     {
//         motor->changeSpeed(UP_RIGHT_MOTOR, i);
//         delay(1000);
//     }

//     for (int i = 1900; i <= 1100; i -= 50)
//     {
//         motor->changeSpeed(UP_RIGHT_MOTOR, i);
//         delay(1000);
//     }
// }