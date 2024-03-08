// S. Trowbridge 2023
#ifndef CAR_H                   // preprocessor directives
#define CAR_H

#include <iostream>                 // iostream required for string type and cout/cin commands

struct Car                      
{
    std::string name;              
    int id;                         
    
    Car();                      // member function declaration
    void print();                   // member function declaration
};

         // non-member function declaration (pass an object by reference)



#endif

