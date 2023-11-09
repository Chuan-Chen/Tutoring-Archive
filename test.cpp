#include <iostream>
using namespace std;

int main() {

    int size = 11;
    for(int r = 1; r <= size; r++){
        for(int c = 1; c <= size; c++){
            if(c == size + 1 - r){
                cout << "x ";
            }
            else{
                cout << "- ";
            }
        }
        cout << endl;
    }

    return 0;
};