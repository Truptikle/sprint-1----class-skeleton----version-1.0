# sprint-1----class-skeleton----version-1.0
# consits of 5 classes :Home_Owner,SmartBed,SmartGyser,EnvironmentSensor,WaterHeater.
# we need to make use of virtual class.
         
# 1. SmartBed will give boolean value if owner is out of bed or sleeping.We are assuming that its having a smart floormat that detects/senses the steping out of person from bed.

 # 2. Home_Owner will provide some desired temperature. 
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


   
                       


