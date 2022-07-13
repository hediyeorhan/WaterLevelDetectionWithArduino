#include "readSensor.h"
#include "Arduino.h"

readSensor::readSensor(int pin1){
    pinMode(pin1, OUTPUT);
    _pin1 = pin1;
}

void readSensor::SensorPowerLow(){
    digitalWrite(_pin1, LOW);
}

int readSensor::SensordenGelenDeger(){
    digitalWrite(_pin1, HIGH);
    delay(100);
    int val = analogRead(A0);
    digitalWrite(_pin1, LOW);
    return val;
}