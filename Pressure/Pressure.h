#pragma once
#include <Arduino.h>

enum PRESSURE_UNIT {
    BAR,
    PASCAL
};

class PressureSensor {
private:  
    int sensorPin= A0;
    const float parameter =5.0 / 1023.0;
    const float V_MIN = 0.0; 
    const float V_MAX = 5.0;  
    const float P_MIN = 0.0; 
    const float P_MAX = 30.0;
    float measuredVoltage;
    float pressure;
public:
    void readPressure();
    float getLastPressure(const PRESSURE_UNIT unit);    
};

