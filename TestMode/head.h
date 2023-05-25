
#if defined(_WIN32)
#include <windows.h>
#else
#include <dlfcn.h>
#endif
#include "Interface.hpp"

typedef void (*_VOID_)();
typedef Interface *(Inter)(void);

HMODULE hModule = LoadLibrary("message.dll");
_VOID_ hello_str = (_VOID_)GetProcAddress(hModule, "hello");
Inter* pfn=(Inter *)::GetProcAddress(hModule,"NewMessage");