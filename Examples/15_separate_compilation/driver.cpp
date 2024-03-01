// S. Trowbridge 2023
#include <iostream>                 // include requisite files
#include "Student.h"

int main()                          // driver program contains a main function to test/run the program
{
    std::cout << std::endl;

    const int SIZE = 3;
    Student students[5];            // array of student objects

    students[0].name = "John";      // store data into each student object
    students[0].id = 14141414;
    students[1].name = "Kim";
    students[1].id = 25252525;
    students[2].name = "Ara";
    students[2].id = 53246534;

    for(int i=0; i<SIZE; ++i) {     // iterate through the array
        print(students[i]);         // non-member print function call syntax: student parameter object passed by reference
        //students[i].print();      // member print function call syntax: student object is the calling object
    }

    std::cout << std::endl;    
    return 0;
}

