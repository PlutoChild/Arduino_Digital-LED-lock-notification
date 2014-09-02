int buttonPin = 2;         
int ledPin = 13;       

int state = HIGH;      
int reading;           
int previous = LOW;    


long time = 0;         
long debounce = 200;   

void setup()
{ pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);}

void loop()
{ reading = digitalRead(buttonPin);


  if (reading == HIGH && previous == LOW && millis() - time > debounce) {
    if (state == HIGH){
      state = LOW;
      blinkit();
      blinkit(); }
      
    else{
      state = HIGH;
      blinkit();
      digitalWrite(ledPin, LOW); }
      
    time = millis(); } }
void blinkit ()
{ digitalWrite(ledPin, HIGH);
  delay (100);
  digitalWrite(ledPin, LOW);
  delay (100); }
