#include <LedControl.h>
LedControl matrix(12, 11, 10, 1);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7, INPUT);
pinMode(6, INPUT);
pinMode(5, INPUT);
matrix.shutdown(0, false);

}

void loop() {
   matrix.clearDisplay(0);
   int buttonState = digitalRead(7);
   int buttonState2 = digitalRead(6);
   int buttonState3 = digitalRead(5);
  Serial.println(buttonState);
   if(buttonState == 1) {
    matrix.setLed(0, 0, 3, true);
    matrix.setLed(0, 1, 2, true);
    matrix.setLed(0, 1, 3, true);
    matrix.setLed(0, 1, 4, true);
    matrix.setLed(0, 2, 1, true);
    matrix.setLed(0, 2, 3, true);
    matrix.setLed(0, 2, 5, true);
    matrix.setLed(0, 3, 3, true);
    matrix.setLed(0, 4, 3, true);
    
   }
   
   if(buttonState2 == 1) {
    matrix.setLed(0, 7, 3, true);
    matrix.setLed(0, 6, 3, true);
    matrix.setLed(0, 5, 3, true);
    matrix.setLed(0, 4, 3, true);
    matrix.setLed(0, 6, 2, true);
    matrix.setLed(0, 5, 1, true);
    matrix.setLed(0, 6, 4, true);
    matrix.setLed(0, 5, 5, true);
    matrix.setLed(0, 3, 3, true);
}
   
   if(buttonState3 == 1) {
    matrix.setLed(0, 1, 1, true);
    matrix.setLed(0, 1, 6, true);
    matrix.setLed(0, 2, 2, true);
    matrix.setLed(0, 2, 5, true);
    matrix.setLed(0, 3, 3, true);
    matrix.setLed(0, 3, 4, true);
    matrix.setLed(0, 4, 4, true);
    matrix.setLed(0, 4, 3, true);
    matrix.setLed(0, 5, 2, true);
    matrix.setLed(0, 6, 1, true);
    matrix.setLed(0, 4, 3, true);
    matrix.setLed(0, 4, 4, true);
    matrix.setLed(0, 5, 5, true);
    matrix.setLed(0, 6, 6, true);
}

}
