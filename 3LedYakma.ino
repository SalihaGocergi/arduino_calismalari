///3 led üzerinde for döngüsü ile isik yakma

void setup() {
  pinMode(7,OUTPUT); ///led için
  pinMode(6,OUTPUT); ///led için
  pinMode(5,OUTPUT); ///led için

}

void loop() {
  for(int i=5;i<=7;i++){
    digitalWrite(i,1);
    delay(50);
    digitalWrite(i,0);
  }
  for(int y=7;y>=5;y--){
    digitalWrite(y,1);
    delay(50);
    digitalWrite(y,0);
  }

}
