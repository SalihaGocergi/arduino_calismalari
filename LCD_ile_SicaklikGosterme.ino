#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,5,4,3,2);
void setup() {
  pinMode(A0,INPUT); //sıcaklık
  lcd.begin(16,2); //16X2 lik olduğu için
    lcd.clear();

}

void loop() {
  float deger = analogRead(A0);
  deger = (deger/1023.0)*5000;
  float sonuc = deger/10.0;

  lcd.setCursor(0,1);
  lcd.print(sonuc);
  delay(300);

}
