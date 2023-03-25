
#ifndef EXERCITIILAB6_FORD_H
#define EXERCITIILAB6_FORD_H
#include "Car.h"

class Ford: public Car{
    void setName() override;
    void setFuelCapacity() override;
    void setFuelComsumption() override;
    void setRainSpeed() override;
    void setSunnySpeed() override;
    void setSnowSpeed() override;

};

#endif //EXERCITIILAB6_FORD_H
