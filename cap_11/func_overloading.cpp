#include<iostream>
#include<string>

int add(int x, int y){
    return x + y;
}

std::string add(std::string x, std::string y){
    return x + " " + y;
}
int main(){
    std::cout<<add(1,2)<<std::endl;
    std::cout<<add("Nahuel","D. Bogado")<<std::endl;
    return 0;
}
