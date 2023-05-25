#ifndef _MESSAGE_H_
#define _MESSAGE_H_

#include <iosfwd>
#include <string>
#include "Interface.hpp"

class CROSS_PLATFORM_API Message : public Interface{
public:
  Message(const std::string &m);
  virtual void ShowMsg();

private:
  std::string message_;
};

extern "C" CROSS_PLATFORM_API void hello();

#endif
