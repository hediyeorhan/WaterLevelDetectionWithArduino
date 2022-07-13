// Kendi olusturmus oldugum kutuphaneler

#include <readSensor.h>
#include <ledAyari.h>

int lowerThreshold = 450;
int upperThreshold = 580;

int buzzerPin = 3;
int lm35Pin = A1;

int sayacBuzzer = 0;

// Analog A0'dan okuyor 7. pinden güç alıyor. readSensor adinda olusturdugumuz kutuphaneden bir nesne olustuyoruz.
readSensor SuSeviyeSensor(7); 

// Sirasiyle hangi ledlerin hangi pine baglandigini belirtiyoruz ve ledeAyari kutuphanemizden bir nesne olusturuyoruz.
ledAyari ledler(4, 5, 6); 

int okunan_deger = 0;
float sicaklik_gerilim = 0;
float sicaklik = 0;


void setup() {

  pinMode(buzzerPin,OUTPUT);
  
  Serial.begin(9600);  // Seri baglantiyi baslatmak icin 
  
  SuSeviyeSensor.SensorPowerLow();
  ledler.ledLow();
  

  cli();

  // Timer1 kesmesi ayarlanıyor
  TCNT1  = 0;
  TCCR1A = 0;
  TCCR1B = 0;
  OCR1A = 15624;  // Bir saniye çalışması için gerekli zaman kesmesi frekansı
  TCCR1B |= (1 << WGM12);
  TCCR1B |= (1 << CS12) | (1 << CS10);
  TIMSK1 |= (1 << OCIE1A);
  sei();

}
ISR(TIMER1_COMPA_vect){ 

  sayacBuzzer++;

  // Su seviye sensoru bir saniye araliklarla degeri okuyor ve okunan degere gore su seviyesi belirleniyor ve led isiklar yanarak uyari veriyor.
  
  int level = SuSeviyeSensor.SensordenGelenDeger();
  
  if (level == 0) {
     //Serial.print("Water Level: Empty  --> ");
     Serial.println(level);
     Serial.println("/");
     ledler.ledLow();
  }
  else if (level > 0 && level <= lowerThreshold) {
     //Serial.print("Water Level: Low  --> ");
     Serial.println(level);
     Serial.println("/");
     ledler.redHIGH();
  }
  else if (level > lowerThreshold && level <= upperThreshold) {
     //Serial.print("Water Level: Medium  --> ");
     Serial.println(level);
     Serial.println("/");
     ledler.yellowHIGH();
  }
  else if (level > upperThreshold) {
     //Serial.print("Water Level: High  --> ");
     Serial.println(level);
     Serial.println("/");
     ledler.greenHIGH();
  }
    
  if(sayacBuzzer == 2) // iki saniyelik bir timer tutuldu ve sicaklik degeri iki saniyede bir okunuyor.
  {
    sayacBuzzer = 0;
    okunan_deger = analogRead(lm35Pin);
    sicaklik_gerilim = (okunan_deger / 1023.0)*5000;
    sicaklik = sicaklik_gerilim /10.0;
    //Serial.print("SICAKLIK : ");
    
    Serial.println((int)sicaklik);
    Serial.println("/");
    
    if((int)sicaklik >= 25){
      digitalWrite(buzzerPin, HIGH);   // Ortam sicakligi yuksek oldugunda buzzer ile alarm sesi veriliyor.

    }
    else {
      digitalWrite(buzzerPin, LOW);   // Belirtilen seviyenin altına dustugunde sicaklik buzzer alarmı duruyor.
    }
    
  }
 
}
void loop(){
}
