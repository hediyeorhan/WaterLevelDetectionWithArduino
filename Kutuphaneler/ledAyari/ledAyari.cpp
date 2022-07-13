#include "ledAyari.h"
#include "Arduino.h"

ledAyari::ledAyari(int red, int yellow, int green){
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
    _red = red;
    _yellow = yellow;
    _green = green;
}

void ledAyari::ledLow(){
    digitalWrite(_red, LOW);
    digitalWrite(_yellow, LOW);
    digitalWrite(_green, LOW);
}


void ledAyari::redHIGH(){
    digitalWrite(_red, HIGH);
    digitalWrite(_yellow, LOW);
    digitalWrite(_green, LOW);

}

void ledAyari::yellowHIGH(){
    digitalWrite(_red, LOW);
    digitalWrite(_yellow, HIGH);
    digitalWrite(_green, LOW);

}

void ledAyari::greenHIGH(){
    digitalWrite(_red, LOW);
    digitalWrite(_yellow, LOW);
    digitalWrite(_green, HIGH);

}
