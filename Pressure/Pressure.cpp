#include "Pressure.h"
#include <Arduino.h>

void PressureSensor::readPressure()
{

    this.measuredVoltage = (5.0 / 1023.0) * (analogRead(sensorPin));
}
float PressureSensor::getLastPressure(const PRESSURE_UNIT unit)
{

    if (unit == BAR)
    {
        this.pressure = ((this.measuredVoltage - this.V_MIN) * (this.P_MAX - this.P_MIN) / (this.V_MAX - this.V_MIN)) + this.P_MIN;
    }
    else
    {
        this.pressure = this.measuredVoltage*10;
    }
}
