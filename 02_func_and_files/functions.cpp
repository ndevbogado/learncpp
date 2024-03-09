#include <iostream>

int doPrint() {
  std::cout << "Hello There from doPrint!\n";
  return 0;
}

int main(int argc, char *argv[]) {
  std::cout << "Hello there from main!\n";
  doPrint();
  std::cout << "Ending main\n";
  return 0;
}
