#include <iostream>

using namespace std;

/*
                            //this is what gets passed through
return_type function_name(parameters){
    //definition or whatever this function runs
}
*/
        //parameter it has type, and name of parameter
void print(int n){
    cout << n << endl;
};


int add(int a, int b){
    return a + b;
};

template <typename type1, typename type2>
type1 add(type1 a, type2 b){
    return a + b;
}


int main(){

    cout << add("hi" , 5.213) << endl;
    
    cout << "hi " << "bye" << endl;

    return 0;
};