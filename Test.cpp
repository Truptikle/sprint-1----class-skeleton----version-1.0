# Test.cpp
#include<iostream>
int main()
{
  SmartBed sensor;
  Geyser heater;

  SmartGeyser smartGeyser(sensor,heater);

  smartGeyser.start();

  return 0;
}  
