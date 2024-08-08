/**
 * The sketch parses UBX messages from u-blox NEO-7M and outputs ready GPS data to a serial port in a CSV format.
 *
 * u-blox NEO-7M - Arduino Mega
 * VCC - 5V
 * RX - TX2
 * TX - RX2
 * GND - GND
 */

#include <Arduino.h>
#include <UbxGpsNavPvt.h>

#define GPS_BAUDRATE 115200L
#define PC_BAUDRATE 115200L

#define DATETIME_FORMAT "%04d.%02d.%02d %02d:%02d:%02d"
#define DATETIME_LENGTH 20

UbxGpsNavPvt<HardwareSerial> gps(Serial2);

char datetime[DATETIME_LENGTH];

void setup()
{
    Serial.begin(PC_BAUDRATE);
    gps.begin(GPS_BAUDRATE);
}

void loop()
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
