
#include "Circuit.h"
#include <iostream>

void Circuit::AddCar(Car *car) {
    car -> setName();
    car -> setFuelCapacity();
    car -> setFuelComsumption();
    car -> setRainSpeed();
    car -> setSunnySpeed();
    car -> setSnowSpeed();
    cars[numberOfCars] = car;
    numberOfCars++;
}

void Circuit::showCars() {
    for(int i = 0; i < numberOfCars; ++i) {
        std::cout << cars[i] -> name << " --> " << cars[i] -> sunnySpeed << ' ' << cars[i]->fuelComsumption << '\n';
    }
}