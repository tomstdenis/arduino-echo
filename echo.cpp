#include <echo.h>
#include "Arduino.h"

unsigned ultrasonic_mm(int trig, int echo)
{
  unsigned long v;
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  while (digitalRead(echo) == LOW);
  v = micros();
  while (digitalRead(echo) == HIGH);
  v = micros() - v;
  return (v * 10) / 58;
}

unsigned ultrasonic1_mm(int pin)
{
  unsigned long v;
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin, LOW);
  pinMode(pin, INPUT);
  while (digitalRead(pin) == LOW);
  v = micros();
  while (digitalRead(pin) == HIGH);
  v = micros() - v;
  return (v * 10) / 58;
}
