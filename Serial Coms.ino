
void setup(){
  Serial.begin(9600);
  
}


void loop(){
  
  if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n').c_str();
    
    if (data == "") {
      
    }
  
  
}
