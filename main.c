#include <stdio.h>
#include <stdlib.h>
#include "crcLib.h"
#include "cr.h"

int main()
{
    uint8_t data;
    uint8_t crc;
    data = 0x34;//原始数据 
    crc = crc8_maxim(&data, 1);//校验码 
    printf("data:%02x, crc:%02x\n", data, crc);
    return 0;
}
