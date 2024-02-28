#include <iostream>
int main(int argc, char *argv[]) {
  int x{}; // value-initialized varialble
  // std::cout << x << '\n';
  int y{};
  std::cout << "Enter two numbers: ";

  std::cin >> x >> y;
  std::cout << "Number entered by user: " << x << " and " << y << '\n';

  return 0;
}
