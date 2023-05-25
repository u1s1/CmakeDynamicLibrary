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

extern "C" CROSS_PLATFORM_API Interface* NewMessage(void)
{
  return new Message("this is test message");
}