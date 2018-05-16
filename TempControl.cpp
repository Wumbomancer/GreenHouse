/*TempControl.cpp
  Header file for Fan Control Class
  Created by Kelly Holstrom
*/

#include "Tempcontrol.h"

TempControl::TempControl(int pin)
{
  tempPin = pin;
}

float TempControl::ReadTemp()
{
  analogRead(tempPin);
}
