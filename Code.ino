int dc1=5;
int dc2=6;
int push1=3;
int push2=2;

void setup()
{
 pinMode(dc1,OUTPUT);
 pinMode(dc2,OUTPUT);
 pinMode(push1,INPUT);
 pinMode(push2,INPUT);
 attachInterrupt(digitalPinToInterrupt(push1), button1, RISING);
 attachInterrupt(digitalPinToInterrupt(push2), button2, RISING);
}
void loop()
{}
void button1()
{
  digitalWrite(dc2,LOW);
  digitalWrite(dc1,HIGH);
}
void button2()
{
 digitalWrite(dc1,LOW);
 digitalWrite(dc2,HIGH);
}
