
const int ledPin_3 = 3; 
const int ledPin_5 = 5; 
const int ledPin_6 = 6; 
const int ledPin_9 = 9; 
const int ledPin_10 = 10; 
const int ledPin_11 = 11; 

int ledState_3 = LOW;  
int ledState_5 = LOW;  
int ledState_6 = LOW;  
int ledState_9 = LOW;  
int ledState_10 = LOW;  
int ledState_11 = LOW;  

unsigned long previousMillis_3 = 0;  
unsigned long previousMillis_5 = 0;  
unsigned long previousMillis_6 = 0;  
unsigned long previousMillis_9 = 0;  
unsigned long previousMillis_10= 0;  
unsigned long previousMillis_11 = 0;  

const long interval_3 = micros(1000);  
const long interval_5 = micros(2000);  
const long interval_6 = micros(3000);  
const long interval_9 = micros(4000);  
const long interval_10 = micros(5000);  
const long interval_11 = micros(6000);  

void setup() {
  // set the digital pin as output:
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis_3 >= interval_3) {
    // save the last time you blinked the LED
    previousMillis_3 = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState_3 == LOW) {
      ledState_3 = HIGH;
    } else {
      ledState_3 = LOW;
    }
    digitalWrite(ledPin_3, ledState_3);


    if (currentMillis - previousMillis_5 >= interval_5) {
    // save the last time you blinked the LED
    previousMillis_5 = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState_5 == LOW) {
      ledState_5 = HIGH;
    } else {
      ledState_5 = LOW;
    }
    digitalWrite(ledPin_5, ledState_5);


    if (currentMillis - previousMillis_6 >= interval_6) {
    // save the last time you blinked the LED
    previousMillis_6 = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState_6 == LOW) {
      ledState_6 = HIGH;
    } else {
      ledState_6 = LOW;
    }
    digitalWrite(ledPin_6, ledState_6);


    if (currentMillis - previousMillis_9 >= interval_9) {
    // save the last time you blinked the LED
    previousMillis_9 = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState_9 == LOW) {
      ledState_9 = HIGH;
    } else {
      ledState_9 = LOW;
    }
    digitalWrite(ledPin_9, ledState_9);


    if (currentMillis - previousMillis_10 >= interval_10) {
    // save the last time you blinked the LED
    previousMillis_10 = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState_10 == LOW) {
      ledState_10 = HIGH;
    } else {
      ledState_10 = LOW;
    }
    digitalWrite(ledPin_10, ledState_10);


    if (currentMillis - previousMillis_11 >= interval_11) {
    // save the last time you blinked the LED
    previousMillis_11 = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState_11 == LOW) {
      ledState_11 = HIGH;
    } else {
      ledState_11 = LOW;
    }
    digitalWrite(ledPin_11, ledState_11);
  }
}
