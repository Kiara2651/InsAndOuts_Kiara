const int buttonPin = 9;     // the number of the pushbutton pin
const int ledPin1 =  6;      // the number of the LED pin
const int ledPin2 = 5;

//Next pattern

const int ledPin3 = 4;
const int ledPin4 = 3;
const int sensorPin = A0;


// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int pattern = 1;
int value;
void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2,OUTPUT);

  //next pattern
  pinMode(ledPin3,OUTPUT);
   pinMode(ledPin4,OUTPUT);
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600); 
}

void loop() {
value = analogRead(sensorPin);       //Read and save analog value from sensor
  Serial.println(value);               //Print value
  value = map(value, 0, 1023, 0, 255); //Map value 0-1023 to 0-255 (PWM)
  analogWrite(ledPin4, value);          //Use value to control LED
  delay(100);                          //Small delay
  
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
//PATTERN 1
if(pattern = 1){
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH ) {
    // turn LED on:
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4,LOW);
    
  }else if (buttonState == LOW){
    // turn LED off:
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4,LOW);

    
  } else{
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4,LOW);

  }
}
}
