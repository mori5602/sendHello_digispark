#include "DigiKeyboard.h"
void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);

}

void loop() {
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.print("hello");
  DigiKeyboard.delay(1000);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);

  DigiKeyboard.delay(4000);
}
