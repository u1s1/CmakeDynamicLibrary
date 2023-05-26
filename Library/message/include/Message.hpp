#ifndef _MESSAGE_H_
#define _MESSAGE_H_

#include <iosfwd>
#include <string>
#include "InterfaceInclude.h"

class CROSS_PLATFORM_API Message : public Interface{
public:
  Message(const char* m);
  virtual void ShowMsg();
  virtual void SetStr(const char* m);
  virtual const char* GetStr();

private:
  const char* message_;
};

extern "C" CROSS_PLATFORM_API void hello();

#endif     //_MESSAGE_H_
