#include <iostream>
using namespace std;

template <typename TypeClass> class Array{
    const int CAP = 10;
    int size = 0;
    TypeClass array[10]; //{10}
    
    public: 
    void append(TypeClass a){
        if(size < CAP){
            array[size++] = a;
        }
    }

    void print(){
        for(int i = 0; i < size; i++){
            cout << array[i] << endl;
        }
    }
    //array that can store up to 10 data of what ever type the user chooses
    //pop function, and append function
};


int main(){

    Array<int> a{};
    a.append(10);
    a.append(20);

    a.print();

    //YOU CANNOT CHANGE THE SIZE OF THE ARRAY;
    //NOT STATIC ONES





    return 0;
}