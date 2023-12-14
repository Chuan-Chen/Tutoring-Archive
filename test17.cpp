#include <iostream>
#include <vector>
using namespace std;


void convertZero(int *a[5][5], int size){

}


int main(){


    int a = 10;

    int *p = &a;

    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;



    *p = 20;

    cout << new int(2) << endl;

    cout << a << endl;
    
    return 0;
}


