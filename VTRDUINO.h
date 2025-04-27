#ifndef VTRDUINO_h
#define VTRDUINO_h
#include <Arduino.h>

#define ESC 27
#define NL 10
#define CR 13

class Term{
  public:
  void Clear();
  void Return();
  void SetCursPos(uint8_t x, uint8_t y);
};

#endif