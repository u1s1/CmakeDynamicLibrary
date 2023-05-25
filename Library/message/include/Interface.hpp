#ifndef _INTERFACE_H_
#define _INTERFACE_H_

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

class CROSS_PLATFORM_API Interface
{
public:
	virtual void ShowMsg() = 0; // 将调用方需要调用的成员函数声明成纯虚函数
    virtual void SetStr(const char* m) = 0;
    virtual const char* GetStr() = 0;
};

//导出函数的参数必须是void
extern "C" CROSS_PLATFORM_API Interface* NewMessage(const char* m);

#endif     //_INTERFACE_H_
