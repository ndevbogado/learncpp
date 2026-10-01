#include<iostream>

template <typename T>
T add(T x, T y){
    return x + y;
}

int main(){
    std::cout << add(2,3) << std::endl;
    std::cout << add(1.2,3.4) << std::endl;

    return 0;
}
