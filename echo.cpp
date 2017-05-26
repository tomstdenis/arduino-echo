#include <echo.h>
#include "Arduino.h"


// returns: distance read from the sensor in centimeters
unsigned ultrasonic_mm(int trig, int echo)
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  return (pulseIn(echo, HIGH, 1000000) * 10) / 58;
}

/*
 * Make sure to wire the trigger and echo pins on the distance sensor
 * together to whatever pin on the Arduino you decide to use
 *
 * returns: distance read from the sensor in centimeters
 */
unsigned ultrasonic1_mm(int pin)
{
  pinMode(pin, OUTPUT);
  digitalWrite(pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin, LOW);
  pinMode(pin, INPUT);
  return (pulseIn(pin, HIGH, 1000000) * 10) / 58;
}
