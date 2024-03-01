#include <iostream>
using namespace std;

class Car{
    private:
    int NumberOfWheels = 20;
    public:  
    int NumberOfDoors = 10;

    int getWheels(){
        return NumberOfWheels;
    }

    int operator+(const Car &rhs) const {
        return (NumberOfWheels + rhs.);
    }
};


int main(){

    Car a1{};
    Car a2{};

    cout << a1.NumberOfDoors << endl;
    cout << a1 + a2; 

    return 0;
}