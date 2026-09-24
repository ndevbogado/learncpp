#include<iostream>
#include<string>

auto get_name(){
    std::string name{};
    std::cin>>name;

    return name;
}

int main(){
    std::cout<<"type your name: "<<std::endl;
    auto name{get_name()};
    std::cout<<"Hello There! "<<name<<" !\n";
    return 0;
}
