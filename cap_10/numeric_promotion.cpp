#include<iostream>

void printInt(int x){
    std::cout << x << std::endl;
}
void printUnsignedInt(unsigned int x){
    std::cout << x << std::endl;
}

int main(){
    printInt(5);
    for (int i = 3; i > -5 ; --i){
	printUnsignedInt(i);
    }
    return 0;
}
