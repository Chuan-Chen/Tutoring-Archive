#include <iostream>
#include <vector>
using namespace std;

template <typename A>
class Array{
    public:
    int size = 0;
    const int cap = 10;
    A a[10] = {0,0,0,0,0,0,0,0,0,0}; // 0,0,0,0,0,0,0,..0


    void print(){
        for(int i = 0; i < cap; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    };

    void push_back(A value){
        a[size++] = value;

    }
    void pop_back(){
        a[--size] = 0;
    }
};



int main(){

    Array<char> a;

    vector<char> b;

    b.push_back('A');
    b.push_back('B');
    b.push_back('C');


    // go through the list
  for (std::vector<char>::iterator it = b.begin() ; it != b.end(); ++it){
    cout << *it << endl;
  }


    
    return 0;
}