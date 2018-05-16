/* Greenhouse sketch
   Created by Kelly Holstrom

*/
#include <WaterControl.h>
#include <FanControl.h>
#include <TempControl.h>
#include <Bluetooth.h>

Bluetooth *Talker;
WaterControl *Faucet;
FanControl *AirIn;
FanControl *AirOut;
TempControl *Temp1;
TempControl *Temp2;
TempControl *Temp3;

Talker = new Bluetooth();
Faucet = new WaterControl();
AirIn = new FanControl();
AirOut = new FanControl();
Temp1 = new TempControl();
Temp2 = new TempControl();
Temp3 = new TempControl();


void setup
{
  
}

void loop
{

}
