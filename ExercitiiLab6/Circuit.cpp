#include "Circuit.h"
#include "Weather.h"
#include <iostream>

void Circuit::SetLength(int l) {
    length = l;
}

void Circuit::SetWeather(Weather w) {
    weather = w;
}

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

void Circuit::Race() {
    for (int i = 0; i < numberOfCars; ++i) {
        double speed;
        switch (weather) {
            case 0:
                speed = cars[i]->rainSpeed;
                break;
            case 1:
                speed = cars[i]->sunnySpeed;
                break;
            case 2:
                speed = cars[i]->snowSpeed;
                break;
        }
        times[i] = length / speed;
        fuelStatus[i] = cars[i]->fuelComsumption/100.0 * length;
    }
}

void Circuit::ShowFinalRanks() {
    for(int i = 0; i < numberOfCars; ++i) {
        for(int j = 0; j < numberOfCars - 1; ++j) {
            if(times[j] > times[j + 1]) {
                std::swap(times[j], times[j + 1]);
                std::swap(cars[j], cars[j + 1]);
                std::swap(fuelStatus[j], fuelStatus[j + 1]);
            }
        }
    }
    printf("Final Ranks:\n");
    int finished = 0;
    for(int i = 0; i < numberOfCars; ++i) {
        if(fuelStatus[i] <= cars[i] -> fuelCapacity) {
            printf("Place %d: Car: %s, Time: %f\n", finished + 1, cars[i] -> name, times[i]);
            ++finished;
        }
    }
}

void Circuit::ShowWhoDidNotFinish() {
    printf("Participants who did not finish the race:\n");
    int notFinished = 0;
    for(int i = 0; i < numberOfCars; ++i) {
        if(fuelStatus[i] > cars[i] -> fuelCapacity) {
            printf("Car %s did not finish the race. Max Fuel Capacity: %f. Fuel Capacity Needed: %f\n", cars[i] -> name, cars[i] -> fuelCapacity, fuelStatus[i]);
        }
    }
}
