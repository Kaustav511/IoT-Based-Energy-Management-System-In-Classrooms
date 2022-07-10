int relay =10;
int sensor = 13;
int state = LOW;
int val=0;         
void setup() {
 pinMode(relay, OUTPUT);
 pinMode(sensor, INPUT);
}
                            
void loop () {
 val = digitalRead (sensor) ;
if (val == HIGH) {
  digitalWrite (relay, HIGH); 
   delay (100); 
}
 else {
     digitalWrite(relay, LOW); 
    delay (100);
}
}
    
