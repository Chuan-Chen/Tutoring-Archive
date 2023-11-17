#include <./Wheel.h>
#include <iostream>


Wheel::Wheel(): thickness(0), diameter(0), wheelPosition("NA"){};
Wheel::Wheel(float t, float d, std::string n): thickness(t), diameter(d), wheelPosition(n){}
Wheel::~Wheel(){};

void Wheel::print(){
    std::cout << "Tire Thickness: " << thickness << std::endl;
    std::cout << "Tire Diameter: " << diameter << std::endl;
    std::cout << "Wheel Position: " << wheelPosition << std::endl;
}

