#include <OneWire.h>
#include <DallasTemperature.h>
#include "Temperature.h"

OneWire  ds(47);  

void setup(void) {
}

void loop(void) {
  float celsius, fahrenheit;  
  ds.reset();
  TemperatureSensor temp;
  celsius =   temp.celsiusTemperature();
  fahrenheit = temp.fahrenheitTemperature();
  Serial.print("Temperature = ");
  Serial.print(celsius);
  Serial.print("Celsius, ");
  Serial.print(fahrenheit);
  Serial.println("Fahrenheit");
  delay(1000);

}
