/* WaterControl.cpp
   Class file for FanControl Class
   Created by Kelly Holstrom
*/

#include "FanControl.h"

FanControl::FanControl(int pin)
{
  fpin = pin;
  pinMode(pin , OUTPUT);
  fspeed = 0;
}

void FanControl::Enable(float speed)
{
  fspeed = speed;
  /* analogWrite some calculation to get a certain speed

  */
}

void FanControl::Disable()
{
  fspeed = 0;
  analogWrite(fpin,0);
}
