#include<iostream>
#include<string>

std::string  foo(char a, char b) = delete;

int foo(int a, int b){
    return a + b;
}

int main(){
    std::cout<<foo(1,2)<<std::endl;
    std::cout<<foo('a','b')<<std::endl;
    return 0;
}
