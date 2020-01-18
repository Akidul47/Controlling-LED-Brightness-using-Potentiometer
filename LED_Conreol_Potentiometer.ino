int potpin=A0;
int led=6;
int readvalue;     //variable to store the pot value which ranges from 0 to 1023
int writevalue;    //variable to store the LED output value which ranges from 0 to 255
void setup(){
  Serial.print(9600);
  pinMode(potpin,INPUT);
  pinMode(led,OUTPUT);
}
void loop(){
  readvalue=analogRead(potpin);
  writevalue=(255/1023)*readvalue;   //converting the pot value to 0 to 255 
  analogWrite(led,writevalue);
  Serial.println(writevalue);
}
  
