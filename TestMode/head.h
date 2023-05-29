#include "CrossPlatformLoad.h"
#include "IMessage.h"

typedef void (*_VOID_)();
typedef IMessage *(_IMessage_)(const char* m);

#if defined(_WIN32)
    _VOID_ hello_str = (_VOID_)gdl_GetProc("hello");
    _IMessage_* Message=(_IMessage_ *)gdl_GetProc("NewMessage");
#else
    void *fun = gdl_GetProc("hello");
    _IMessage_ *Message = (_IMessage_ *)gdl_GetProc("NewMessage");
#endif

