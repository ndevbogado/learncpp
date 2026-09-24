#include<iostream>

template  <typename T>	//This is the template parameter declaration defining T as a type template		       //parameter
T max(T x, T y){    // This is the function template definition for max<T>
    return (x < y) ? y : x;
}

int main(){
    std::cout << "Type two numbers to kwon which one is the greates of them: " << std::endl;
    int x{};
    std::cin >> x;
    int y{};
    std::cin >> y;

    std::cout << max<int>(x, y) << " is the greates of the set." << std::endl;
    return 0;
}

