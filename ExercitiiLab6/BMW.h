//
// Created by Daniel on 23-Mar-23.
//

#ifndef EXERCITIILAB6_BMW_H
#define EXERCITIILAB6_BMW_H
#include "Car.h"

class BMW: public Car{
    void setName() override;
    void setFuelCapacity() override;
    void setFuelComsumption() override;
    void setRainSpeed() override;
    void setSunnySpeed() override;
    void setSnowSpeed() override;
};


#endif //EXERCITIILAB6_BMW_H
