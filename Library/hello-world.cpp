#include "Message.hpp"

#include <cstdlib>
#include <iostream>

int main() {
  Message say_hello("Hello, CMake World!");

  say_hello.ShowMsg();

  Message say_goodbye("Goodbye, CMake World");

  say_goodbye.ShowMsg();

  hello();

  system("pause");

  return EXIT_SUCCESS;
}
