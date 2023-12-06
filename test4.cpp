#include <iostream>
using namespace std;

class Room{
    private:
    int NumberOfSafes = 0;

    public: 
    string RoomName;
    int NumberOfWindows;
    int NumberOfDoors;
    float RoomSize;
    
    void output(){
        cout << "NumberOfSafes: " << NumberOfSafes << endl;
        cout <<"RoomName: " << RoomName << endl;
        cout << "NumberOfWindows: "<< NumberOfWindows << endl;
        cout << "NumberOfDoors: " << NumberOfDoors << endl;
        cout << "RoomSize: " <<RoomSize << endl << endl;
    };

    Room(string name, int windows, int doors, float Size):
    RoomName(name),
    NumberOfWindows(windows), 
    NumberOfDoors(doors), 
    RoomSize(Size){};

    string getName(){
        return RoomName; // return roomname its a shallow copy
    }

    int getSafe(){
        return NumberOfSafes; // shallow copy
    }

    Room operator+(const Room &Bathroom)const {
        Room temp{
            (this->RoomName+Bathroom.RoomName), 
            (this->NumberOfWindows + Bathroom.NumberOfWindows), 
            (this->NumberOfDoors + Bathroom.NumberOfDoors), 
            (this->RoomSize + Bathroom.RoomSize)
        };
        return temp;
    };

};

    int operator-(const Room &Kitchen, const Room &Bathroom){
        cout << "- operator was called" << endl;
        return Kitchen.NumberOfDoors - Bathroom.NumberOfDoors; 
    };

int main(){

    Room Kitchen{"Kitchen" , 2, 1, 200};
    Room Bathroom{"Bathroom", 1, 1, 20};

    Kitchen.output();
    Bathroom.output();

    Room KitchenBathroom = (Kitchen + Bathroom);
    KitchenBathroom.output();

    return 0;
}