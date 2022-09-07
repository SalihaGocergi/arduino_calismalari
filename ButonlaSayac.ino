int i=0;
void setup() {
  pinMode(2,INPUT);
  Serial.begin(9600);

}

void loop() {
  
if(digitalRead(2) == 1){ //butona basıldı ise ledleri yak
  i++;
  delay(200);
  
  while(i>20){
    Serial.println("Butonu bozucaksınnn yeterr :)");
    Serial.end();
  }
  Serial.print("Sayac degeri =");
  Serial.println(i);

  
  }


}
