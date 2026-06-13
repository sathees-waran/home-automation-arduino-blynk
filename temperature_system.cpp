/===================================================== /
    File: temperature_system.cpp
    breif: Controlling Temperature in room
/=======================================================/
#include "temperature_system.h"
#include "Arduino.h"
#include "main.h"

float temperature;
void init_temperature_system(void)
{
    pinMode(HEATER,OUTPUT);
    pinMode(COOLER,OUTPUT);
}

float read_temperature(void)
{
   // read the temperature sensor return the temperature
temperature = (((analogRead(A0) * (float)5/1024)) / (float) 0.01);
return temperature;
}

void cooler_control(bool control)
{
   if(control)
   {
    digitalWrite(COOLER,1);
    
   }
   else
   {
    digitalWrite(COOLER,0);
      
   }
}
void heater_control(bool control)
{
     if(control)
   {
    digitalWrite(HEATER,1);
     
   }
   else
   {
    digitalWrite(HEATER,0);

   }
}
