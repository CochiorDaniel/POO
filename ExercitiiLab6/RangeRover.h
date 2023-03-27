
#ifndef EXERCITIILAB6_RANGEROVER_H
#define EXERCITIILAB6_RANGEROVER_H
#include "Car.h"

class RangeRover: public Car{
    void setName() override;
    void setFuelCapacity() override;
    void setFuelComsumption() override;
    void setRainSpeed() override;
    void setSunnySpeed() override;
    void setSnowSpeed() override;

};


#endif //EXERCITIILAB6_RANGEROVER_H
