// S. Trowbridge 2023
#include "Student.h"  
                                        // include the associated .h file
#include "Car.h"
Student::Student(): name(""), id(0)                             // member function definition (use classname scope resolution)
{
}    
       
void Student::print()                                           // member function definition (use classname scope resolution)
{     
    std::cout << name << " " << id << std::endl;   
}

void print(Student &s)                                          // non-member function definition
{    
    std::cout << s.name << " " << s.id << std::endl;
}

