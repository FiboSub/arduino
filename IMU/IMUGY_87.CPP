#include "IMUMP6050.h"

IMUMP6050::IMUMP6050(){
  Serial.begin(9600);
  Wire.begin();
  mpu.initialize();
}

float IMUMP6050::readIMU(){
    
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
  float temperature = bmp.readTemperature();
  float pressure = bmp.readPressure();
  float altitude = bmp.readAltitude(); 
  return temperature;
  return pressure;
  return altitude;
}

