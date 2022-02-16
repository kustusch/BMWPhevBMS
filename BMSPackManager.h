//https://rishabhdevyadav.medium.com/create-your-own-arduino-library-h-and-cpp-files-62ab456453e0

//#ifndef BMSPACKMANAGER_H
//#define BMSPACKMANAGER_H

#include <Arduino.h>
#include "BMSModuleManager.h"

#define MAX_PACK_NO 4
#define BASE_PACK_STATUS_CAN_ID 0x400 //CAN message id for pack 0
#define BASE_PACK_ERROR_CAN_ID 0x410 //CAN message id for pack 0
#define BASE_PACK_VOLTAGE_CAN_ID 0x420 //CAN message id for pack 0
#define BASE_PACK_TEMP_CAN_ID 0x430 //CAN message id for pack 0
#define BASE_PACK_SETTINGS_CAN_ID 0x440 //CAN message id for pack 0
#define BMS_SAVE_SETTINGS_CAN_ID 0x449 //CAN message id for all packs

typedef struct {
    bool isPresent;
    bool isFaulted;
    int errorReason;
    int batteryId;
    float packVolt;
    float lowCellVolt;
    float highCellVolt;
    float lowestPackTemp;
    float highestPackTemp;
    float lowTemp;
    float highTemp;
    unsigned char alarm[4] = {0, 0, 0, 0};
    unsigned char warning[4] = {0, 0, 0, 0};
    unsigned char error[4] = {0, 0, 0, 0};
} BatteryPackStatus;

BatteryPackStatus updatePackStatus(BMSModuleManager bms);

//#endif
