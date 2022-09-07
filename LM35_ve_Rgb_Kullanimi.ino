int gelen =0;
int mV= 0;
void setup() {
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

void loop() {
gelen = analogRead(A0);
mV = (gelen/1023.0)*5000;
float sonuc = mV/10.0;
Serial.println(sonuc);

  delay(100);
  if(sonuc<= 25){ //kırmızı
    digitalWrite(13,0);
    analogWrite(9,0);
    analogWrite(10,255);
    analogWrite(11,255);
    
  }else{ //mavi
    analogWrite(9,255);
    analogWrite(10,255);
    analogWrite(11,0);
    digitalWrite(13,1);
  }

}
