#include "IMUGY_87.h"

IMUGY_87::IMUGY_87()
{
    Serial.begin(9600);
    Wire.begin();
    mpu.initialize();
}

float IMUGY_87::readMPU6050(int16_t *ax, int16_t *ay, int16_t *az, int16_t *gx, int16_t *gy, int16_t *gz)
{
    mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
    float temperature = bmp.readTemperature();
    float pressure = bmp.readPressure();
    float altitude = bmp.readAltitude();
    return temperature, pressure, altitude;
}

float IMUGY_87::readHMC5883L(int16_t *mag_x, int16_t *mag_y, int16_t *mag_z)
{
    sensors_event_t event;
    mag.getEvent(&event);
    *mag_x = event.magnetic.x;
    *mag_y = event.magnetic.y;
    *mag_z = event.magnetic.z;
}

float IMUGY_87::readBMP180()
{
    return bmp.readPressure();
}
