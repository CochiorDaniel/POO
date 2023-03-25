#ifndef EXERCITIILAB6_DACIA_H
#define EXERCITIILAB6_DACIA_H
#include "Car.h"

class Dacia: public Car{
    void setName() override;
    void setFuelCapacity() override;
    void setFuelComsumption() override;
    void setRainSpeed() override;
    void setSunnySpeed() override;
    void setSnowSpeed() override;
};


#endif //EXERCITIILAB6_DACIA_H
