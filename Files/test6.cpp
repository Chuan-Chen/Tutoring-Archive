#include <iostream>


class Wheel{
    public:
    int numberofwheels;
};

class Car{
    private: 
        int doors;
        Wheel *w1; //stores references or memory address
    public:

    Wheel getWheel(){
        return *w1;
    }

    //two parameters constructor
    Car(int w, int d): doors(d){
        
        w1->numberofwheels = w;
    };
    //copy constructor
    Car(Car &a):doors(a.doors){
        w1->numberofwheels = a.w1->numberofwheels;
    };
    //default constructor
    Car():doors(0){
        w1 = new Wheel{};
    };
    
    Car(Wheel &obj){
        w1 = &obj;
    }

    friend void print(Car &a);
    
};


int add(int a, int b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}

std::string add(std::string a, std::string b){
    return a + b;
}


int main(){
    Wheel aWheel{};

    Car a{aWheel};
    Car b{a};


    std::cout << add(2,3);
    std::cout << add(2,3,4);
    std::cout << add("hello", "world");


    
    std::cout << b.getWheel().numberofwheels << std::endl;

    return 0;
}