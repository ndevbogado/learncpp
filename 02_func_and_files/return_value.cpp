#include <iostream>

int returnValue();

int main(int argc, char *argv[]) {

  int my_input{returnValue()};
  std::cout << "My value is: " << my_input << '\n';

  return 0;
}

int returnValue() {
  // return input entered by user.
  std::cout << "Enter an integer: ";
  int input{};
  std::cin >> input;

  return input;
}
