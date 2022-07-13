#ifndef ledAyari_H
#define ledAyari_H

#include <Arduino.h>

class ledAyari{
public:
    ledAyari(int red, int yellow, int green);
    void ledLow();
    void redHIGH();
    void yellowHIGH();
    void greenHIGH();

private:
    int _red;
    int _yellow;
    int _green;

};

#endif