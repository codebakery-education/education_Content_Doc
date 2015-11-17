int lightPin = 0;
int ledPin = 13;
int threshold = 250;

void setup(){
    pinMode(ledPin, OUTPUT); 
}

void loop(){
    int inputValue = analogRead(lightPin);
  
    if(inputValue > threshold){    
        digitalWrite(ledPin, HIGH);
    }
    
    else{
        digitalWrite(ledPin, LOW);
    }
    
    delay(1000);
}
