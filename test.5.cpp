#include <iostream>
#include <vector>

using namespace std;

class Car{
    public:
    string CarName;
    Car(string n): CarName(n){};
};

void func(vector<int> &a){
    a.push_back(20);
}

class Array{
    public:
    int a[10];
    int current = 0;

    void push_back(int value){
        a[current++] = value;
    }

    void pop(){
        a[current-1] = 0;
        current--;
    }

    void output(){
        for(int i = 0; i < 10; i++){
            cout << a[i] << ", ";
        }
        cout << endl;
    }
};

void readFile(int data, Array &a){
    a.push_back(data);
}

int main() {

    Array a{};

    readFile(10 ,a);

    a.output();


    return 0;
}


/*
    vector<string *> vectorStrings;
    string data1 = "hi";
    string data2 = "bye";

    vectorStrings.push_back(new string(data1 + data2));

    string *p;




    cout << new string(data1 + data2) << endl;
*/



/*
vector &contestants
readContestant(type parametersName)


*/