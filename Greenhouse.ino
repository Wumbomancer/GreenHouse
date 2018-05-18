/* Greenhouse sketch
   Created by Kelly Holstrom

*/

#define TEMP_PIN_1 10
#define TEMP_PIN_2 11
#define TEMP_PIN_3 12
#define FAN_PIN_1 32
#define FAN_PIN_2 33
#define WATER_PIN 52

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




void setup()
{
  Talker = new Bluetooth();
  Faucet = new WaterControl(WATER_PIN);
  AirIn = new FanControl(FAN_PIN_1);
  AirOut = new FanControl(FAN_PIN_2);
  Temp1 = new TempControl(TEMP_PIN_1);
  Temp2 = new TempControl(TEMP_PIN_2);
  Temp3 = new TempControl(TEMP_PIN_3);
}

void loop()
{

}
