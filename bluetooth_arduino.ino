String input; 
void setup() {
pinMode(7, OUTPUT);  
Serial.begin(9600);
} 
void loop() {
  while (Serial.available())
  { 
  delay(10); 
  char c = Serial.read(); 
  input += c; 
  }  
  if (input.length() > 0)
  {
    Serial.println(input); 
       if(input == "on")
       {
         digitalWrite(7, HIGH);
        }  
  if(input == "off")
  {
   digitalWrite(7, LOW);
    } 
input="";
}
}

