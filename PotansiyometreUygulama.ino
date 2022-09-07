///Pot üzerinden gelen değeri serial ekranda gösterme

int mapDeger;
int port;
void setup() {
  pinMode(A5,INPUT);
  Serial.begin(9600);

}

void loop() {
  port = analogRead(A5);
  mapDeger = map(port,0,1023,0,255);
  
  Serial.println(mapDeger);
  delay(1000);

}
