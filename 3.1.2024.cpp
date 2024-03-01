
#include <iostream>

using namespace std;


int main(){

    int a = 25;
    int *p = &a;

    int *x = p;

    cout << "p: "<< p << endl;
    cout << "&p: " << &p << endl;
 
    //what does this * do ?
    cout << "*p: " << *p << endl;


    cout << "x: " << x << endl;
    cout << "&x: " << &x << endl;
    cout << "*x: " << *x << endl;

    //what is a? 10
    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;

    cout << endl;
    *p = 20;
    

    *x = 1;


    a = 10;

    cout << "*p: " << *p << endl;   


    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;


    return 0;
}