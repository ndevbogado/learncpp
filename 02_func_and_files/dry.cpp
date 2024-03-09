#include <iostream>
int askForInteger();

int main(int argc, char *argv[]) {

  int x{askForInteger()};
  int y{askForInteger()};

  std::cout << x << " + " << y << " = " << x + y << '\n';
  return 0;
}

int askForInteger() {
  std::cout << "Enter an Integer: ";
  int input{};
  std::cin >> input;
  return input;
}
