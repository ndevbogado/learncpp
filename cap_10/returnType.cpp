#include<iostream>

auto returnType(){
    std::cout<<"type an int number: "<<std::endl;
    int x{};
    std::cin>>x;
    if (x>5)
	return 10;
    else
	return 0.5;
}
int main(){
    returnType();
    return 0;
}
