int value;
 
void setup() 
{
  Serial.begin(115200); 
  pinMode(A0, INPUT); 
}
 
void loop() 
{
  value = analogRead(A0); 
  
  Serial.println(value); 
  
  delay(10);
}