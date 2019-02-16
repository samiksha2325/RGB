void setup() {
  // put your setup code here, to run once:
#define Red 6
#define blue 5
#define green 3
pinMode(Red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(green,OUTPUT);
}

void loop() {
  digitalWrite(green,LOW);
  digitalWrite(blue,HIGH);
  delay(1000);
  digitalWrite(blue,LOW);
  digitalWrite(Red,HIGH);
  delay(500);
  digitalWrite(Red,OW);
  digitalWrite(green,HIGH);
  delay(500);
  // put your main code here, to run repeatedly:
}
