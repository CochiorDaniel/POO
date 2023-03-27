
#ifndef EXERCITIILAB6_VOLVO_H
#define EXERCITIILAB6_VOLVO_H
#include "Car.h"

class Volvo: public Car{
    void setName() override;
    void setFuelCapacity() override;
    void setFuelComsumption() override;
    void setRainSpeed() override;
    void setSunnySpeed() override;
    void setSnowSpeed() override;

};

#endif //EXERCITIILAB6_VOLVO_H
