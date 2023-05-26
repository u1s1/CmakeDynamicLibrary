#ifndef _CROSSPLATFORMLOAD_H_
#define _CROSSPLATFORMLOAD_H_

#if defined(_WIN32)
    #include <windows.h>
    typedef HMODULE  MODULE_HANDLE;
#else
    #include <dlfcn.h>
    typedef void *  MODULE_HANDLE;
#endif

#include "Interface.hpp"


void *gdl_GetProc(const char *pfname)
{
#if defined(_WIN32)
    MODULE_HANDLE hModule = LoadLibrary("CrossPlatformLib.dll");
#else
    MODULE_HANDLE hModule = dlopen("./libCrossPlatformLib.so", RTLD_NOW | RTLD_GLOBAL);
#endif

   if(hModule)
   {
#if defined(_WIN32)
        return (void *)GetProcAddress(hModule, pfname);
#else
        return dlsym(hModule,pfname);
#endif
    }
    return 0;
};

#endif
