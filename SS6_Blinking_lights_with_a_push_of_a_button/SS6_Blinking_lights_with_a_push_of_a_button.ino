const int buttonPin = 7;     // the number of the pushbutton pin
const int ledPin1 =  6;      // the number of the LED pin
const int ledPin2 = 5;

//Next pattern

const int ledPin3 = 4;
const int ledPin4 = 3;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int pattern = 1;
void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2,OUTPUT);

  //next pattern
  pinMode(ledPin3,OUTPUT);
   pinMode(ledPin4,OUTPUT);
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
//PATTERN 1
if(pattern = 1){
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH ) {
    // turn LED on:
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2,HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4,LOW);
    
  } else {
    // turn LED off:
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4,HIGH);
  }
  
}
}
