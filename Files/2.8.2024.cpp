#include <iostream>

//parameter is denoting that it takes a reference

/*

void | returns nothing
int | returns int
char | returns char
boolean | returns true/false
double | returns double
float | returns float
string | returns string
long | returns long



*/
void func(int &a){ // a = &b
    std::cout << "&a: " << &a << std::endl;
    a = 10;
}

int main(){

    int b = 20;

    std::cout << "&b: " << &b << std::endl;
    //what does this print out
    //&b = ??? Memory address

    func(b);

    std::cout << "b: " << b << std::endl;


}