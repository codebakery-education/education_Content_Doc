int lightPin = 0;  

void setup(){
    Serial.begin(9600);
}

void loop(){
    int inputValue = analogRead(lightPin); 
    
    Serial.println(inputValue);
    
    delay(1000);
}
