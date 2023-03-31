
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

const long interval_3 = 0;  
const long interval_5 = 0;  
const long interval_6 = 0;  
const long interval_9 = 0;  
const long interval_10 = 0;  
const long interval_11 = 0;  

void setup() {
  DDRD |= D00010110 // 26
  DDRB |=   B00001110  //16
}

void loop() {
  unsigned long currentMillis = micros();
  if (currentMillis - previousMillis_3 >= interval_3) {
    previousMillis_3 = currentMillis;
    if (ledState_3 == LOW) {
      PORTD |= 00001000
    } else {
      PORTD &= 11110111
    }


    if (currentMillis - previousMillis_5 >= interval_5) {
    previousMillis_5 = currentMillis;
    if (ledState_5 == LOW) {
      PORTD |= 00100000
    } else {
      PORTD &= 11011111
    }


    if (currentMillis - previousMillis_6 >= interval_6) {
    previousMillis_6 = currentMillis;
    if (ledState_6 == LOW) {
      PORTD |= 01000000
    } else {
      PORTD &= 10111111
    }


    if (currentMillis - previousMillis_9 >= interval_9) {
    previousMillis_9 = currentMillis;
    if (ledState_9 == LOW) {
      PORTB |= 00000010
    } else {
      PORTB &= 11111101
    }


    if (currentMillis - previousMillis_10 >= interval_10) {
    previousMillis_10 = currentMillis;
    if (ledState_10 == LOW) {
      PORTB |= 00000100
    } else {
      PORTB &= 11111011
    }


    if (currentMillis - previousMillis_11 >= interval_11) {
    previousMillis_11 = currentMillis;
    if (ledState_11 == LOW) {
      PORTB |= 00001000
    } else {
      PORTB &= 11110111
    }
  }
}
