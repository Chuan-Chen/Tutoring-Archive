#include <iostream>

using namespace std;


class Car{
    public:
    string name;
    Car(string n): name(n){};
    Car(): name(""){};
    Car(Car &a){
        name = a.name;
    };
};

template <typename TYPE>
class Node{
    public: 
    TYPE data;

    Node(TYPE d):data(d){};
    Node(TYPE *d): data(&d){};
    Node(): data(new TYPE()){};
};


int main(){

    Car Toyota{"Toyota"};
    Node<int> n1{10};

    cout << n1.data << endl;


    return 0;
}