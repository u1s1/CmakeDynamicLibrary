#include "Message.hpp"

#include <cstdlib>
#include <iostream>

int main() {
  Message say_hello("Hello, CMake World!");

  say_hello.ShowMsg();

  Message say_goodbye("Goodbye, CMake World");

  say_goodbye.ShowMsg();

  hello();

  say_goodbye.SetStr("goodbye solar system");
  std::cout << say_goodbye.GetStr() << std::endl;

  system("pause");

  return EXIT_SUCCESS;
}
