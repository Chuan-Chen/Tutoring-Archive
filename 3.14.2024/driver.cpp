#include <iostream>
using namespace std;


class Circle{
    private: 
        //data members 
        double radius;
        double pi = 3.14;

    public: 
        //member functions 
        Circle(double r):radius(r){};
        double area(){
            return pi * (radius * radius);
        }
        double circumference(){
            return 2 * pi * radius;
        }

};

int main(){

    Circle a{5.2};
    cout << a.area() << endl;
    cout << a.circumference() << endl;

    return 0;
}