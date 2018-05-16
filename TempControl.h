/*TempControl.h
  Header file for Fan Control Class
  Created by Kelly Holstrom
*/

#include <arduino.h>

#ifndef TempControl_h
#define TempControl_h

Class TempControl
{
  private:
    int tempPin;

  public:
    TempControl(int pin);
    float ReadTemp();

};


#endif
