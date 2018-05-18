/*FanControl.h
  Header file for Fan Control Class
  Created by Kelly Holstrom
*/

#include <arduino.h>

#ifndef FanControl_h
#define FanControl_h

class FanControl {
private:
  int fpin;
  float fspeed;
  bool enable;


public:
  FanControl (int pin);
  void Enable(float speed);
  void Disable();
};

#endif
