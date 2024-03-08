// S. Trowbridge 2023
#ifndef STUDENT_H                   // preprocessor directives
#define STUDENT_H

#include <iostream>                 // iostream required for string type and cout/cin commands

struct Student                      
{
    std::string name;              
    int id;                         
    
    Student();                      // member function declaration
    void print();                   // member function declaration
};

void print(Student &s);             // non-member function declaration (pass an object by reference)



#endif

