#ifndef CAR_H
#define CAR_H 

#include <string>
#include <iostream>

class Car{
    private:
        int numberOfDoors;
        int numberOfWheels;
        double weight;
        std::string make;
        std::string model;
    public:
        Car(int numdoors);

        void print(std::string printstring);

};



#endif