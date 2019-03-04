

int pin1=3;
int pin2=4;
int pin3=8;
int pin4=9;


void setup() {
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);

}

void loop() {

digitalWrite (pin1,HIGH);
digitalWrite(pin2,LOW);
digitalWrite (pin4,HIGH);
digitalWrite(pin3,LOW);



}
