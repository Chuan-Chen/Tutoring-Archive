#ifndef CAR_H
#define CAR_H
#include <string>
#include <./Wheel.h>

struct Car{
    std::string model;
    int numOfDoors;
    Wheel wheels[4] = {};
    Car();
};

#endif