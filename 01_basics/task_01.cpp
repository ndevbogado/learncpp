#include <iostream>
int main(int argc, char *argv[]) {

  // First, let’s create a program that asks the user to enter an integer, waits
  // for them to input an integer
  int number{};
  std::cout << "Enter a number: ";
  std::cin >> number;

  std::cout << number << " times 2 is: " << number * 2 << '\n';
  // then tells them what 2 times that number is.

  return 0;
}
