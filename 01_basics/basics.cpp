#include <iostream>

int main(int argc, char *argv[]) {
  [[maybe_unused]] int unused_variable = 1;
  int copy_initialization = 5.5;

  std::cout << copy_initialization << "\n";

  int list_initialization{7};

  std::cout << list_initialization << "\n";

  return 0;
}
