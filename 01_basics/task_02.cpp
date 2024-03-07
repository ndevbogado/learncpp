#include <iostream>

int main(int argc, char *argv[]) {
  std::cout << "Enter the first integer: ";
  int num1{};
  std::cin >> num1;

  std::cout << "Enter a second int: ";
  int num2{};
  std::cin >> num2;

  std::cout << "The addition's result is: " << num1 + num2 << '\n';
  std::cout << "The subtraction's result is: " << num1 - num2 << '\n';

  return 0;
}
