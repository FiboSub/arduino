#include <Arduino.h>
#include <UbxGpsNavPvt.h>

#define GPS_BAUDRATE 115200L
#define PC_BAUDRATE 115200L
#define DATETIME_FORMAT "%04d.%02d.%02d %02d:%02d:%02d"
#define DATETIME_LENGTH 20

class GPSNEOM8N
{

private:

    char datetime[DATETIME_LENGTH];

public:
    GPSNEOM8N();
            void gpsReader();
};
