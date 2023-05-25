
#if defined(_WIN32)
    #include <windows.h>
    typedef HMODULE  MODULE_HANDLE;
#else
    #include <dlfcn.h>
    typedef void *  MODULE_HANDLE;
#endif

#include "Interface.hpp"

typedef void (*_VOID_)();
typedef Interface *(Inter)(void);

#if defined(_WIN32)
    MODULE_HANDLE hModule = LoadLibrary("message.dll");
#else
    MODULE_HANDLE hModule = dlopen("message.dll", RTLD_NOW | RTLD_GLOBAL);
#endif

#if defined(_WIN32)
    _VOID_ hello_str = (_VOID_)GetProcAddress(hModule, "hello");
    Inter* pfn=(Inter *)::GetProcAddress(hModule,"NewMessage");
#else
    void *fun = dlsym(hModule, "hello");
    Inter *pfn = (Inter *)dlsym(hModule, "NewMessage");
#endif

