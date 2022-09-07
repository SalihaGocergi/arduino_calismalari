///LDR den gelen değerle led yakıp söndürme
int deger;
void setup() {
  pinMode(A0,INPUT);
  pinMode(6,OUTPUT);
  //Serial.begin(9600);

}

void loop() {
  //Serial.println(analogRead(A0));
  deger = analogRead(A0);
  if(deger <=300){
    digitalWrite(6,1);
  }else{
    digitalWrite(6,0);
  }
  delay(500);

}
