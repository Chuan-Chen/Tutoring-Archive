#include <iostream>
using namespace std;


class Car{
    private:
    //private data member called name 
    string name = "some random name";
    int wheelCount = 10;



    public:
    //public data member called doorCount
    int doorCount = 50;

    string getName(){
        return name;
    };
    void getWheels(){
        cout << "wheelcount: " <<  wheelCount << endl;
    };
};



int main(){
    Car Civic{};
    Car Honda{};


    Civic.doorCount = 10;
    cout << Civic.doorCount << endl;
    Honda.doorCount = 20;
    cout << Honda.doorCount << endl; 
    Civic.getWheels();

    Civic.getName();

    return 0;
}