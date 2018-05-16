/*Bluetooth.cpp
  Class file for Bluetooth Class
  Created by Kelly Holstrom
*/

#include "Bluetooth.h"



Bluetooth::Bluetooth()
{
  dataIndex = 0;
  
}

void Bluetooth::GetData()
{
  if(Serial1.available())
  {
    data[dataIndex]= Serial1.read();
    if(dataIndex = (DATA_SIZE-1))
      dataIndex = 0;
  }
}

float Bluetooth::SendData()
{
  for (int i = 0; i < DATA_SIZE; i++) {
    Serial1.write(data[i]);
  }

}
