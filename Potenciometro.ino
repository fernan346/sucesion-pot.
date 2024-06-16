float p=A0;

void setup() {
  pinMode(p,INPUT);
  Serial.begin(9600);
   for(int w=2; w<=11;w++){pinMode(w,OUTPUT);}
}

void loop() {
  float k = analogRead(p);
  float h = ((k*5)/1023);
  Serial.println(h);
  delay(500);
 for(int w=2; w<=10;w++){
  if(h>=0.5){ digitalWrite(2,HIGH);}
  else (digitalWrite(2,LOW));
  if(h>=1.0){ digitalWrite(3,HIGH);}
  else (digitalWrite(3,LOW));
  if(h>=1.5){ digitalWrite(4,HIGH);}
  else (digitalWrite(4,LOW));
  if(h>=2.0){ digitalWrite(5,HIGH);}
  else (digitalWrite(5,LOW));
  if(h>=2.5){ digitalWrite(6,HIGH);}
  else (digitalWrite(6,LOW));
  if(h>=3.0){ digitalWrite(7,HIGH);}
  else (digitalWrite(7,LOW));
  if(h>=3.5){ digitalWrite(8,HIGH);}
  else (digitalWrite(8,LOW));
  if(h>=4.0){ digitalWrite(9,HIGH);}
  else (digitalWrite(9,LOW));
  if(h>=4.5){ digitalWrite(10,HIGH);}
  else (digitalWrite(10,LOW));
  if(h>=5.0){ digitalWrite(11,HIGH);}
  else (digitalWrite(11,LOW));
}}
