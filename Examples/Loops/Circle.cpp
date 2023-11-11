//(x-h)^2 + (y-k)^2 = r^2

#include <iostream>
#include <cmath> //pow(a,b) = a^b;
#include <math.h>
using namespace std;

void circle(int size, float h, float k, float r){
    for(float y = 0; y <= size; y++){
        for(float x = 0; x <= size; x++){
            //cout << pow(r,2) << " " << pow((x-h), 2) << " " << pow((y-k),2) << endl;
            if(pow(r,10) > pow((x-h), 2) + pow((y-k),2)){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int pth (int x,int y)  {
    return sqrt (pow(x,2)+pow(y,2));
 }


int main(){
    int c=0;
    int r=10;

    const int width=r;
    const int length=r*1.5;

    for (int y=width;y >= -width;y-=2)  {
        for (int x=-length;x <= length;x++)  {

            if ((int) pth(x,y)==r) cout << "*";
            else cout << " ";

         }
         cout << "\n";
     }
     cin.get();
    return 0;
}