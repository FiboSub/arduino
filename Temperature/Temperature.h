#pragma once
#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>

class TemperatureSensor {
private:  
    float Temperature; 
    float Ftemperature;

public:
    TemperatureSensor();
    float celsiusTemperature();
    float fahrenheitTemperature();
};
