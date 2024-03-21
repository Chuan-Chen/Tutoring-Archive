#include <iostream>
using namespace std;


float maxdiff(float *array, int size){

    

    float maxd = 0;
    for(int i = 0; i < size-1; i++){
        if(abs(array[i+1] - array[i]) > maxd){
            maxd = abs(array[i] - array[i+1]);
        }
    }

    cout << "maxdiff: " << maxd;
    return maxd;
}


int main(){

    maxdiff(new float[8]{1,2,6,7,3,7,3,10}, 8);

    return 0;
}

