#include <iostream>

using namespace std;

class Node{
    public:
    Node(int a): data(a), next(nullptr){};
    Node():data(0), next(nullptr){};
    int data;
    Node *next;

    void print(){
        cout << data << endl;
    }
};

//node1 -> node2 -> node3 -> nullptr

class List{
    public: 
    Node *head;
    Node *current;

    List():head(new Node(10)), current(head){};//constructor
    ~List(){}; //destructor


    void append(int value){
        current->next = new Node(value);
        current = current->next;
    }

    void pop(){
        
    }
    //usually belong in iterator class
    void print(){
        Node *temp = head;
        while(temp->next != nullptr){
            temp->next->print();
            temp = temp->next;
        }
    }

};

//Node1 -> Node2 -> Node3 -> null

int main(){

    List L1{};

    L1.append(20);
    L1.append(30);

    L1.print();

    Node n1{};


    //&p mem of pointer p
    //p mem of what its pointing to
    // *p value or object of the pointer p


    return 0;
}