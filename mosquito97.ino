  int sensorPin = A0;
  int sensorValue = 0;
void setup() {
  // put your setup code here, to run once:

  pinMode (LED_BUILTIN, OUTPUT);
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead (sensorPin);
  if(sensorValue>250){
    digitalWrite (LED_BUILTIN, HIGH);  
  }else{
   digitalWrite (LED_BUILTIN, LOW); 
  }
  
  Serial.println (sensorValue, DEC);

}
