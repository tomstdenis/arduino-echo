#include <echo.h>
#include "Arduino.h"

unsigned ultrasonic_mm(int trig, int echo)
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  return (pulseIn(echo, HIGH, 1000000) * 10) / 58;
}

unsigned ultrasonic1_mm(int pin)
{
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin, LOW);
  pinMode(pin, INPUT);
  return (pulseIn(pin, HIGH, 1000000) * 10) / 58;
}
