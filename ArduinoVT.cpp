#include "VTRDUINO.h"

void Term::Clear() {
  Serial.write(28); // ESC command (Required to send the Clear Screen instruction)
  Serial.print("[2J"); // Clears the Terminal
  Serial.write(ESC); // ESC command (Required to send the Clear Screen instruction)
  Serial.print("[1;1f"); // Sets the Cursor to 1;1
}

void Term::Return() {
  Serial.write(CR);
  Serial.write(NL);
}

void Term::SetPos(uint8_t x, uint8_t y) {
  Serial.write(ESC); // ESC command (Required to send the Clear Screen instruction)
  Serial.print("[");
  Serial.print(y);
  Serial.print(";");
  Serial.print(x);
  Serial.print("f");
}

