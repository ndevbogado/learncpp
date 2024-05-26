#include <iostream>

int add(int x, int y);

int main() {
  int x{};
  std::cout << "Type first number: ";
  std::cin >> x;

  int y{};
  std::cout << "type second nubmer: ";
  std::cin >> y;

  std::cout << x << " + " << y << " = " << add(x, y) << '\n';
  return 0;
}
