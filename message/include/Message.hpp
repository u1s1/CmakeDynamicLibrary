#ifndef _MESSAGE_H_
#define _MESSAGE_H_

#include <iosfwd>
#include <string>

#ifdef _WIN32   //用于判断是否是win平台
    #define CROSS_PLATFORM_HIDDEN_API
    #ifdef CROSS_PLATFORM_LIBRARY_EXPORTS
        #define CROSS_PLATFORM_API __declspec(dllexport)
    #else
        #define CROSS_PLATFORM_API __declspec(dllimport)
    #endif
#else // 说明是 OSX 或者 Linux
    #define CROSS_PLATFORM_API __attribute((visibility("default"))) // 明确指示，这个函数在动态库中可见
    #define CROSS_PLATFORM_HIDDEN_API __attribute((visibility("hidden"))) // 明确指示，这个函数在动态库中不可见
#endif

class CROSS_PLATFORM_API Message {
public:
  Message(const std::string &m) : message_(m) {}

  friend std::ostream &operator<<(std::ostream &os, Message &obj) {
    return obj.printObject(os);
  }

private:
  std::string message_;
  std::ostream &printObject(std::ostream &os);
};

CROSS_PLATFORM_API void hello();

#endif
