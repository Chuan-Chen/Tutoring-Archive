#include <./Wheel.h>
#include <iostream>


Wheel::Wheel(): thickness(0), diameter(0){};

void Wheel::print(){
    std::cout << "Tire Thickness: " << thickness << std::endl;
    std::cout << "Tire Diameter: " << diameter << std::endl;
}

