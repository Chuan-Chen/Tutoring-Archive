#include <iostream>
using namespace std;

int Factor(int x){
    for(int i = x; i >= 1; i--){
        if(x%i == 0){
            cout << i << endl;
            if(i == x){
                return i;
            }
        }
    }
    return 0;
}

int LF(int x){
    for(int i = 1; i <= x; i++){
        if(x%i == 0){
            cout << i << endl;
        }
    }
    return 0;
}

int main(){
    
    int x;
    cout << "Input a numbers: ";
    cin >> x;

    cout << "Factor of " << x << " is " << Factor(x);

    int FactorOFx = Factor(x);
    return 0;
}