#ifndef EXERCITIILAB6_CAR_H
#define EXERCITIILAB6_CAR_H
class Car{
    friend class Circuit;
protected:
    const char* name;
    double fuelCapacity, fuelComsumption;
    double rainSpeed, sunnySpeed, snowSpeed;
    virtual void setName() = 0;
    virtual void setFuelCapacity() = 0;
    virtual void setFuelComsumption() = 0;
    virtual void setRainSpeed() = 0;
    virtual void setSunnySpeed() = 0;
    virtual void setSnowSpeed() = 0;
};


#endif //EXERCITIILAB6_CAR_H
