
#ifndef EXERCITIILAB6_CIRCUIT_H
#define EXERCITIILAB6_CIRCUIT_H
#include "Car.h"

class Circuit {
private:
    Car* cars[5];
    int numberOfCars;
public:
    void AddCar(Car*);
    void showCars();
    Circuit(): cars{}, numberOfCars(0) {};
};


#endif //EXERCITIILAB6_CIRCUIT_H
