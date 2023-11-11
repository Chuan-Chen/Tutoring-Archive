#ifndef WHEEL_H
#define WHEEL_H


struct Wheel{
    float thickness;
    float diameter;
    std::string wheelPosition;

    Wheel();
    Wheel(float t, float d, std::string n); 
    
    void print();
};



#endif