#include <iostream>
using namespace std;


void shape1(int size, float ri) {
    for(int r = 1; r <= size; ++r){
        for(int c = 1; c <= size; ++c){
            if(r <= c){
                cout << "*";
            }else{
                cout << " ";
            }
            
        }
        cout << endl;
    }
}



int main(){

    shape1(20, 1);

    return 0;
}