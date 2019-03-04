int trig = 12; 
int echo = 13; 
long lecture_echo; 
long cm;

void setup() 
{ 
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
  cm = lecture_echo / 58; 
  Serial.print("Distancem : "); 
  Serial.println(cm); 
  delay(1000);

}
