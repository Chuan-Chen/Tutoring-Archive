#include <iostream>


template <typename Type, typename B, typename C>
B sub(Type a, B b){
    return a - b;
}



int main(){

    sub(6.4, 34)

    int a = 10;

    std::cout << "&a: " << &a << std::endl;
    std::cout << "a: " << a << std::endl;

    int *p; //does it have a memory address //&p = address of p
    p = &a;

    std::cout << "&p: " << &p << std::endl; //mem of p
    std::cout << "p: " << p << std::endl; // mem of a
    std::cout << "p: " << *p << std::endl; // get value of mem of a

    *p = 20;

    std::cout << "&a: " << &a << std::endl;
    std::cout << "a: " << a << std::endl;

    return 0;
}