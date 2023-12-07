#include <iostream>


template <typename TYPE1, typename TYPE2>
void output (TYPE1 a, TYPE2 b){
    std::cout << a << " " << b << std::end;
}

template <typename T1, typename T2, typename T3>
T3 output (T1 a, T2 b, T3 c){
    std::cout << a << " " << b << " " << c << std::end;
    return c;
}

int main() {

    int a = 0;
    float b = 2.1;
    char c = 'd';

    output(a, b);

    std::cout << output(a, b, c) << std::endl;

    return 0;
}