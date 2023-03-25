
#ifndef EXERCITIILAB6_TOYOTA_H
#define EXERCITIILAB6_TOYOTA_H
#include "Car.h"

class Toyota: public Car{
    void setName() override;
    void setFuelCapacity() override;
    void setFuelComsumption() override;
    void setRainSpeed() override;
    void setSunnySpeed() override;
    void setSnowSpeed() override;

};


#endif //EXERCITIILAB6_TOYOTA_H
