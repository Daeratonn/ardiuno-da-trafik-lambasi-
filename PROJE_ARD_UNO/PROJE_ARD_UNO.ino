//integer olarak tanımladığım değişkenler oluşturdum.
int led1=6;
int led2=5;
int led3=4;
int led4=3;
int led5=2;
int led6=9;
int led7=11;
int led8=7;
int led9=8;
int led10=10;
void setup()
{
  //makinenin giriş pinlerine hangi led in geleceğini anlaması için değişkenleri pinlerle eşledim.
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
pinMode(led7,OUTPUT);
pinMode(led8,OUTPUT);
pinMode(led9,OUTPUT);
pinMode(led10,OUTPUT);
}  
void loop()
{
  //led yakma ve söndürme işlemlerini ve dealy ile ne kadar bekleyeceklerini ayarlayıp döngü içerisine yazdım.
digitalWrite(led1,HIGH);
digitalWrite(led9,HIGH);
delay(2000);
digitalWrite(led9,LOW);
digitalWrite(led10,HIGH); 
digitalWrite(led5,HIGH);
digitalWrite(led6,HIGH);
delay(5000);
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
delay(2000);
digitalWrite(led2,LOW); 
digitalWrite(led10,LOW);  
digitalWrite(led5,LOW);  
digitalWrite(led6,LOW);
digitalWrite(led3,HIGH);
digitalWrite(led9,HIGH);
delay(2000);
digitalWrite(led9,LOW);  
digitalWrite(led4,HIGH);
digitalWrite(led8,HIGH);
digitalWrite(led7,HIGH);
delay(5000);
digitalWrite(led3,LOW);
digitalWrite(led2,HIGH);
delay(2000);
digitalWrite(led2,LOW);
digitalWrite(led9,LOW);
digitalWrite(led4,LOW);
digitalWrite(led8,LOW);
digitalWrite(led7,LOW);
}
