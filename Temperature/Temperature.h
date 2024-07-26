#pragma once
#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>

class TemperatureSensor {
private:  
    float lastTemperature; 

public:
    void TemperatureSensor();
    float LastTemperature();
};
