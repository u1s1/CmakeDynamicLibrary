#include <cstdlib>
#include <iostream>
#include "head.h"

int main() {
#ifndef _WIN32
  void (*hello_str)(void);
  *(void **)(&hello_str) = fun;
#endif
  hello_str();
  Interface *face = pfn();
  face->ShowMsg();
  face->SetStr("再见，太阳系");
  face->ShowMsg();
  std::cout << face->GetStr() << std::endl;
  face->SetStr("我回来了，太阳系");
  face->ShowMsg();
  std::cout << face->GetStr() << std::endl;
  return 0;
}
