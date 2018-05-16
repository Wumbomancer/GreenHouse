/*Bluetooth.h
  Header file for Bluetooth Class
  Created by Kelly Holstrom
*/
#define DATA_SIZE 10;

#include <arduino.h>

#ifndef Bluetooth_h
#define Bluetooth_h

Class Bluetooth
{
  private:
    float data[DATA_SIZE];
    int dataIndex;

  public:
    Bluetooth();
    void GetData();
    float SendData();


};

#endif
