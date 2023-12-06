#include <iostream>


class Car{
    public:
    int *p;
    Car(int a):p(&a){
        std::cout << "constructor called" << std::endl;
    };
    //called when object is created

    ~Car(){
        std::cout << "destructor called" << std::endl;
        delete p;
    }
    //called when object is deleted
};

int main() {

    Car a1{};


    return 0;
}