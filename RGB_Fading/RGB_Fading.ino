void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int fade = 0; fade <=255; fade +=5){
    analogWrite(9,fade);
    delay(30);
  }
   for(int fade = 255; fade >= 0; fade -=5){
    analogWrite(9,fade);
    delay(30);
  }
    for(int fade = 0; fade <=255; fade +=5){
    analogWrite(10,fade);
    delay(30);
  }
   for(int fade = 255; fade >= 0; fade -=5){
    analogWrite(10,fade);
    delay(30);
  }
    for(int fade = 0; fade <=255; fade +=5){
    analogWrite(11,fade);
    delay(30);
  }
   for(int fade = 255; fade >= 0; fade -=5){
    analogWrite(11,fade);
    delay(30);
  }

}
