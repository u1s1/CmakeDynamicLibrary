#include "Message.hpp"

#include <iostream>
#include <string>

Message::Message(const std::string &m):message_(m) {}

void Message::ShowMsg()
{
  std::cout << message_ << std::endl;
}

void hello()
{
  std::cout << "hello world test" << std::endl;
}

Interface* NewMessage(void)
{
  return new Message("这是测试文本");
}