#include <windows.h>
#include "Interface.hpp"

typedef void (*_VOID_)();
typedef Interface *(Inter)(void);

HMODULE hModule = LoadLibrary("message.dll");
_VOID_ hello_str = (_VOID_)GetProcAddress(hModule, "hello");

HMODULE  hModule1 = LoadLibraryEx("message.dll", NULL, LOAD_WITH_ALTERED_SEARCH_PATH);
Inter* pfn=(Inter *)::GetProcAddress(hModule1,"NewMessage");