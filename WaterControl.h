/* WaterControl.h
   Header file for WaterControl Class
   Created by Kelly Holstrom
*/

#include <arduino.h>

#ifndef WaterControl_h
#define WaterControl_h

class WaterControl
{
private:
  bool waterEnable;
  int wpin;

public:
  WaterControl(int pin);
  void EnableWater();
  void ChangeSettings();
  void DisableWater();


};

#endif
