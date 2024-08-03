#include "GPS.h"

UbxGpsNavPvt<HardwareSerial> gps();
HardwareSerial hw = static_cast<HardwareSerial>(Serial);
 
GPSNEOM8N::GPSNEOM8N()
{
    Serial.begin(PC_BAUDRATE);
    gps.begin(GPS_BAUDRATE);
}

void GPSNEOM8N::gpsReader()
{
    if (gps.ready())
    {
        snprintf(datetime, DATETIME_LENGTH, DATETIME_FORMAT, gps.year, gps.month, gps.day, gps.hour, gps.min, gps.sec);

        Serial.print(datetime);
        Serial.print(',');
        Serial.print(gps.lat / 10000000.0, 7);
        Serial.print(',');
        Serial.print(gps.lon / 10000000.0, 7);
        Serial.print(',');
        Serial.println(gps.numSV);
    }
}
