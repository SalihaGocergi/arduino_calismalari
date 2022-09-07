#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,5,4,3,2);
int olcum,cm;
void setup() {
  
  lcd.begin(16,2); //16X2 lik olduğu için
  lcd.clear();
  pinMode(7,OUTPUT);  //TRİG
  pinMode(8,INPUT); //ECHO 
  pinMode(9,OUTPUT); 
  pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);

  Serial.begin(9600);


}

void loop() {
    digitalWrite(7,LOW);
    delayMicroseconds(10);
    digitalWrite(7,HIGH);
    delayMicroseconds(10);
    digitalWrite(7,LOW);
    olcum = pulseIn(8,HIGH);
    cm = olcum/58;

    lcd.setCursor(8,0); //0.sütun 1.satır
    lcd.print(cm);
    lcd.setCursor(0,0); //1.satır 1.sütun
    lcd.print("Mesafe:");
    
    lcd.clear();
    Serial.println(cm);
    delay(300);
    if(cm<10 && cm>=0){
     digitalWrite(9,HIGH);
          digitalWrite(10,0);
      digitalWrite(11,0);

    }else if(cm>=10){
     digitalWrite(10,HIGH);
     digitalWrite(9,0);
      digitalWrite(11,0);

    }else{
      digitalWrite(10,0);
      digitalWrite(9,0);
      digitalWrite(11,1);

    }
}
