#include <iostream>


void print(std::string a){
    std::cout << a << std::endl;
}

void print(int a[], int size){
    for(int i = 0; i < size; i++){
        std::cout << a[i] << std::endl;
    }
}


int main() {
    int a[10] = {};
    
    print("hi");
    print(a, 10);


    return 0;
}