#include <cstdlib>
#include <iostream>
#include "head.h"

int main() {
  hello_str();
  Interface *face = pfn();
  face->ShowMsg();
  face->SetStr("再见，太阳系");
  face->ShowMsg();
  std::cout << face->GetStr();
  return 0;
}
