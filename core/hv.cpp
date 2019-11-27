#include "../header/hv.h"

Hv::Hv()
{
    hvTemp = 0;
    hvVolt = 0;
}

void Hv::setHvTemperature(int val1, int val2){
    hvTemp = ((val1 << 8) + val2 ) / 10;
}

void Hv::setHvVoltage(int val1, int val2, int val3){
    hvVolt = ((val1 << 16) + (val2 << 8) + val3 ) / 1000;
}

int Hv::getHvTemperature()const{
    return hvTemp;
}


int Hv::getHvVoltage() const{
    return hvVolt;
}