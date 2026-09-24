#include<iostream>

template  <typename P, typename U>	//This is the template parameter declaration defining T as a type template		       //parameter
auto max(P x, U y){    // This is the function template definition for max<T>
    return (x < y) ? y : x;
}

int main(){
    std::cout << "Type two numbers to kwon which one is the greates of them: " << std::endl;
    int x{};
    std::cin >> x;
    double y{};
    std::cin >> y;

    std::cout << max(x, y) << " is the greates of the set." << std::endl;
    return 0;
}

