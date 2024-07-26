#include <Arduino.h>
#include "Temperature.h"
#include <OneWire.h>
#include <DallasTemperature.h>

#define DATA_PIN_NUMBER 30

OneWire onewire(DATA_PIN_NUMBER);

DallasTemperature sensor(&onewire);

TemperatureSensor::TemperatureSensor()
{
    Serial.begin(9600);
    sensors.begin();
}
float TemperatureSensor::LastTemperature()
{
    sensors.requestTemperatures();
    this.LastTemperature = sensors.getTempCByIndex(0);
    delay(1000);
    return LastTemperature;
}
}