#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085_U.h>
#include <MPU6050.h>
#include <HMC5883L.h>
#include <arduino.h>



class IMU6050{
    private:
       MPU6050 mpu;
       HMC5883L mag;
       Adafruit_BMP085_Unified bmp = Adafruit_BMP085_Unified(10085); 
       int16_t ax, ay, az;
       int16_t gx, gy, gz;
    public:
       IMUMP6050();
       float readIMU();

}


 




