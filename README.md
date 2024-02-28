# sprint-1----class-skeleton----version-1.0
# consits of 5 classes :Home_Owner,SmartBed,SmartGyser,EnvironmentSensor,WaterHeater.
# we need to make use of virtual class.
class EnvironmentSensor
{
public:virtual bool isAwake()
};

class WaterHeater
{
  public:
          virtual void setTargetTemp(int temp)=0;
          virtual int getTargetTemp() const =0;
          virtual void turnOn() const =0;
          virtual void turnOff() const =0;
 };         
# 1. SmartBed will give boolean value if owner is out of bed or sleeping.We are assuming that its having a smart floormat that detects/senses the steping out of person from bed.
class SmartBed : public EnvironmentSensor
{
  public:
  //return true if owner is out of bed
  bool isAwake() const override
  {
    bool isStepoutdetected=false;
    if(isStepoutdetected)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
 }; 

 class Geyser : public WaterHeater
 {
   public:
           void setTargetTemp(int temp) override 
           { targetTemp = temperature; }
            int getTargetTemp() const override { return targetTemp; }

            void turnOn() const override {
      cout << " geyser on" <<endl;
    }

    void turnOff() const override {
       cout << " geyser off." <<endl;
    }

private:
    int targetTemperature = 0; // Target temperature for the geyser
};
 # 2. Home_Owner will provide some desired temperature. 
  class HomeOwner
  {
    public:
      void setTemp(int temp)
      {
        if(temp<30 || temp >60)
        {
          cout<<"Enter valid Temperature"<<endl;
        }
        else
        {  Temp =temp; }
      } 
     int Temp;  
     int getTemp() const
     { return Temp; }
   };  

   # 3. SmartGyser inherit classes EnvironmentalSensor,WaterHeater.
  class SmartGeyser
  {
      public:
              SmartGeyser(const EnvironmentSensor& sensor, const 
             WaterHeater& heater) : sensor(sensor), heater(heater) {}
        void start()
        {
          while (true)
          {
            if (Sensor.isAwake())
            {
              int Temp = 30;
              if (heater.getTargetTemp()!= Temp)
              {
                if(true)
                {
                  //check pressure using some boolean condition,if its true
                  if(true)
                  { 
                    heater.setTargetTemp(Temp);
                    heater.turnOn();
                    //check target temp with current 
                    while(true)
                   {
                       int currTemp=0;
                       //to provide some delay
                       this_thread::sleep_for(chrono::seconds(1));

                       if(currTemp >= Temp)
                       {
                         heater.turnOff();
                         break;
                       }
                    }
                }
                else
                {
                  cout<<"Geyser not activated"<<endl;
                }
             }
             else
             {
                 cout<<"Geyser  activated at set Temp"<<endl;
             }
         }
         else
         {
             cout<<"User not awake"<<endl;
          }
   }
   private :
   const EnvironmentSensor& sensor;
   const WaterHeater& heater;
};   

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
   
                       


