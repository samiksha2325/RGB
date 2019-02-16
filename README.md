void setup()
{
#define red 6
#define blue 5
#define green 3
pinMode(red,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(green,OUTPUT);
}
void loop()
{
digitalWRITE(green,LOW);
digitalWRITE(red,HIGH);
delay(500);
digitalWrite(red,LOW);
digitalWrite(blue,HIGH);
delay(1000);
digitalWrite(blue,LOW);
digitalWrite(green,HIGH);
}
