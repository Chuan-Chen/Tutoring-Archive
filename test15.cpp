#include <iostream>

using namespace std;

/*
class Wheel{
    public: 
    int d;
};

class Car{
    Wheel w1;
    int name

};

*/



class Node{
    public:
    int data;
    Node *next;
    Node():data(0), next(nullptr){};
    Node(int n): data(n), next(nullptr){};
};


int main(){

    Node n1{10};

    n1.next = new Node(20);
    n1.next->next = new Node(30);

    cout << n1.data << endl;
    cout << n1.next->data << endl;
    cout << n1.next->next->data << endl;

    return 0;
}