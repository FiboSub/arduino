#include <Wire.h>
#include <MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085_U.h>
#include <Adafruit_HMC5883_U.h>

class IMUGY_87
{
private:
    MPU6050 mpu;
    HMC5883L mag;
    Adafruit_BMP085_Unified bmp = Adafruit_BMP085_Unified();
    int16_t ax, ay, az;
    int16_t gx, gy, gz;
    int16_t mag_x, mag_y, mag_z;

public:
    IMUGY_87();
    void readMPU6050(int16_t *ax, int16_t *ay, int16_t *az, int16_t *gx, int16_t *gy, int16_t *gz);
    void readHMC5883L(int16_t *mag_x, int16_t *mag_y, int16_t *mag_z);
    float readBMP180();
}
