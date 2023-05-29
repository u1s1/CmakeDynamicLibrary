#include "CrossPlatformLoad.h"
#include "IMessage.h"

typedef void (*_VOID_)();
typedef IMessage *(_IMessage_)(const char* m);

_VOID_ hello = (_VOID_)gdl_GetProc("hello");
_IMessage_* Message=(_IMessage_ *)gdl_GetProc("NewMessage");
