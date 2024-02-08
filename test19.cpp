#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node():data(0), next(nullptr){};
    Node(int a): data(a), next(nullptr){};
};


int main(){

    //what is n1 getting init with
    Node n1{10};

    Node n2{20};

    n1.next = &n2;

    n2.next = new Node();
    
    int a = 12;
    int *p = &a;




    cout << n1.data << endl;
    cout << n1.next->data << endl;
    cout << n1.next << endl;
    cout << &n2 << endl << endl;


    cout << &a << endl;
    cout << *p << endl;


    return 0;
}