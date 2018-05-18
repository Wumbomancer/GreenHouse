/* WaterControl.h
   Class file for WaterControl Class
   Created by Kelly Holstrom
*/
#include "WaterControl.h"

WaterControl::WaterControl(int pin)
{
  wpin = pin;
  pinMode(wpin, OUTPUT);
}

void WaterControl::EnableWater()
{
  waterEnable = 1;
  digitalWrite(wpin,HIGH);
}

void WaterControl::ChangeSettings()
{

}

void WaterControl::DisableWater()
{
  waterEnable = 0;
  digitalWrite(wpin, LOW);
}
