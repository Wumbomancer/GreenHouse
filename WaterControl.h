/* WaterControl.h
   Header file for WaterControl Class
   Created by Kelly Holstrom
*/

#include <arduino.h>

#ifndef WaterControl_h
#define WaterControl_h

Class WaterControl
{
private:
  bool waterEnable;

public:
  void EnableWater();
  void ChangeSettings();
  void DisableWater();


};

#endif
