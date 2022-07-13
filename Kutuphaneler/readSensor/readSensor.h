#ifndef readSensor_H
#define readSensor_H

#include <Arduino.h>

class readSensor{
public:
    readSensor(int pin1);
    int SensordenGelenDeger();
    void SensorPowerLow();

private:
    int _pin1;

};

#endif