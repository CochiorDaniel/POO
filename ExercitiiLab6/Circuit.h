
#ifndef EXERCITIILAB6_CIRCUIT_H
#define EXERCITIILAB6_CIRCUIT_H
#include "Car.h"
#include "Weather.h"

class Circuit {
private:
    Car* cars[5];
    int numberOfCars, length;
    double times[5], fuelStatus[5];
    Weather weather;
public:
    void AddCar(Car*);
    void showCars();
    void SetLength(int);
    void SetWeather(Weather);
    void Race();
    void ShowFinalRanks();
    void ShowWhoDidNotFinish();
    //void sortByTimes();
    Circuit(): cars{}, numberOfCars(0), length(0),times{},fuelStatus{}, weather(Weather::Sunny) {};

};


#endif //EXERCITIILAB6_CIRCUIT_H
