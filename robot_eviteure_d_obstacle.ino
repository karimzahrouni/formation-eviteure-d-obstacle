int trig = 12; 
int echo = 13; 
int pin1a = 2 ;
int pin1b = 3 ;
int pin2a = 4 ;
int pin2b = 5 ;

long lecture_echo; 
long distance;

void setup() 
{ 
  pinMode(pin1a,OUTPUT);
  pinMode(pin1b,OUTPUT);
  pinMode(pin2a,OUTPUT);
  pinMode(pin2b,OUTPUT);
  pinMode(trig, OUTPUT); 
  digitalWrite(trig, LOW); 
  pinMode(echo, INPUT); 
  Serial.begin(9600); 
}

void loop() 
{ 
  digitalWrite(trig, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trig, LOW); 
  lecture_echo = pulseIn(echo, HIGH); // dureé d'impulsion !!!0.
  distance = lecture_echo / 58; 
//  Serial.print("Distancem : "); 
// Serial.println(distance); 
//  delay(1000);

  if(distance<20)
  {
    arriert();
    delay(500);
    droit();
    delay(1000);
  }

  else 
  {
    avant();
  }

}


void arriert()
{
  digitalWrite(pin1a,LOW);
  digitalWrite(pin1b,HIGH);
  digitalWrite(pin2a,LOW);
  digitalWrite(pin2b,HIGH);
}

void avant()
{
  digitalWrite(pin1a,HIGH);
  digitalWrite(pin1b,LOW);
  digitalWrite(pin2a,HIGH);
  digitalWrite(pin2b,LOW);
}

void droit()
{
  digitalWrite(pin1a,LOW);
  digitalWrite(pin1b,HIGH);
  digitalWrite(pin2a,HIGH);
  digitalWrite(pin2b,LOW);
}
  
  


