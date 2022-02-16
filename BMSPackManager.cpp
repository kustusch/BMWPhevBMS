#include "BMSPackManager.h"
#include "BMSModuleManager.h"


BatteryPackStatus updatePackStatus(BMSModuleManager bms)
{
    BatteryPackStatus packStatus;

    packStatus.lowCellVolt = uint16_t(bms.getLowCellVolt() * 1000);
    packStatus.highCellVolt = uint16_t(bms.getHighCellVolt() * 1000);
    packStatus.lowTemp = byte(bms.getLowTemperature());
    packStatus.highTemp = byte(bms.getHighTemperature());

    return packStatus;
}

