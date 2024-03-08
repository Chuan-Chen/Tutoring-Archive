// S. Trowbridge 2023
#include "Car.h"                                            // include the associated .h file

Car::Car(): name(""), id(0)                             // member function definition (use classname scope resolution)
{
}    
       
void Car::print()                                           // member function definition (use classname scope resolution)
{     
    std::cout << name << " " << id << std::endl;   
}

