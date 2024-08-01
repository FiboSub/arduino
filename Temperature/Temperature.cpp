#include <Arduino.h>
#include "Temperature.h"
#include <OneWire.h>
#include <DallasTemperature.h>

#define DATA_PIN_NUMBER 47

OneWire onewire(DATA_PIN_NUMBER);

DallasTemperature sensor(&onewire);

TemperatureSensor::TemperatureSensor()
{
    Serial.begin(9600);
    sensor.begin();
}
float TemperatureSensor::celsiusTemperature()
{
    sensor.requestTemperatures();
    this->Temperature = sensor.getTempCByIndex(0);
    return Temperature;
}

float TemperatureSensor::fahrenheitTemperature()
{
    sensor.requestTemperatures();
    this->Ftemperature = (this->Temperature * 1.8) + 32.0;
    return Ftemperature;
}
