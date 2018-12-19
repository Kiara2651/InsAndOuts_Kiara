int pot1= A0;//Declare pot1 to be analog pin A0
int pot2 =A1;//Declare pot2 to be analog pin A1
int LED1= 3;  // Declare LEDPin to be arduino pin 3
int LED2= 5;
int LED3= 6;
int LED4= 9;
int LED5 = 10;
int LED6 = 11;
int val1; 
int val2; 
 
void setup() {
  pinMode(pot1, INPUT);  //set pot1 to be an input
  pinMode(pot2, INPUT);  //set pot2 to be an input
  pinMode(LED1, OUTPUT); //set LED1 to be an OUTPUT
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  Serial.begin(9600);      
}
 
void loop() {
  
 val1 = analogRead(pot1);  //Read the value pot1
  val1 = map(val1, 0, 1023, 0, 180);//map the value to 180. you can change this if you want
 val2 = analogRead(pot2); //Read the value pot2
   val2 = map(val2, 0, 1023, 0, 180);
 Serial.println(val1);
 
 /*
 if (val1 > 10 && val1 < 30)//the first pot value determines the amount of led lights up
 {
   digitalWrite(LED1,LOW);//turn on and off selected leds
   digitalWrite(LED2,LOW);
   digitalWrite(LED3,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED5,LOW);
   digitalWrite(LED6,LOW);
   analogWrite(LED1,val2);//the intensity of the led is controlled by the second pot
 }
 */
 if (val1 > 10 && val1 < 50)
 { 
   digitalWrite(LED1,HIGH);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   digitalWrite(LED6,HIGH);
  delay(1000);
   ///
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED3,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED5,LOW);
   digitalWrite(LED6,LOW);
   delay(1000);
   ///
   
   analogWrite(LED1,val2);
   analogWrite(LED2,val2);
 }
 if (val1>50 && val1<70) 
 { 
   digitalWrite(LED1,HIGH);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   digitalWrite(LED4,LOW);
   digitalWrite(LED5,LOW);
   digitalWrite(LED6,LOW);
   analogWrite(LED1,val2);
   analogWrite(LED2,val2);
   analogWrite(LED3,val2);
   delay(1000);
  ///
   digitalWrite(LED1,HIGH);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,LOW);
   digitalWrite(LED6,LOW);
   analogWrite(LED1,val2);
   analogWrite(LED2,val2);
   analogWrite(LED3,val2);
   delay(1000);
   ///

   digitalWrite(LED1,HIGH);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   digitalWrite(LED4,LOW);
   digitalWrite(LED5,LOW);
   digitalWrite(LED6,LOW);
   analogWrite(LED1,val2);
   analogWrite(LED2,val2);
   analogWrite(LED3,val2);
   delay(1000);


   
 }
 if (val1 > 70 && val1<90)
 {
   
   digitalWrite(LED1,HIGH);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,LOW);
   digitalWrite(LED6,LOW);
   analogWrite(LED1,val2);
   analogWrite(LED2,val2);
   analogWrite(LED3,val2);
   analogWrite(LED4,val2);
   delay(1000);

   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED3,LOW);
   digitalWrite(LED4,LOW);
   digitalWrite(LED5,LOW);
   digitalWrite(LED6,LOW);
   analogWrite(LED1,val2);
   analogWrite(LED2,val2);
   analogWrite(LED3,val2);
   analogWrite(LED4,val2);
   delay(1000);
   
   digitalWrite(LED1,HIGH);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,LOW);
   digitalWrite(LED6,LOW);
   analogWrite(LED1,val2);
   analogWrite(LED2,val2);
   analogWrite(LED3,val2);
   analogWrite(LED4,val2);
   delay(1000);

   
 }

 if (val1 > 90 && val1<110)
 {
   
   digitalWrite(LED1,HIGH);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   digitalWrite(LED6,LOW);
   analogWrite(LED1,val2);
   analogWrite(LED2,val2);
   analogWrite(LED3,val2);
   analogWrite(LED4,val2);
   analogWrite(LED5,val2);
 }

 if (val1 > 160)
 {
   
   digitalWrite(LED1,HIGH);
   digitalWrite(LED2,HIGH);
   digitalWrite(LED3,HIGH);
   digitalWrite(LED4,HIGH);
   digitalWrite(LED5,HIGH);
   digitalWrite(LED6,HIGH);
   analogWrite(LED1,val2);
   analogWrite(LED2,val2);
   analogWrite(LED3,val2);
   analogWrite(LED4,val2);
   analogWrite(LED5,val2);
   analogWrite(LED6,val2);
 }
 
}
