#ifndef EXERCITIILAB6_FIAT_H
#define EXERCITIILAB6_FIAT_H
#include "Car.h"

class Fiat: public Car{
    void setName() override;
    void setFuelCapacity() override;
    void setFuelComsumption() override;
    void setRainSpeed() override;
    void setSunnySpeed() override;
    void setSnowSpeed() override;
};


#endif //EXERCITIILAB6_FIAT_H
