#ifndef C23META_BOOL_NEQ
#define C23META_BOOL_NEQ

#define BOOL_NEQ(X,Y) _BOOL_NEQ(X,Y)
#define _BOOL_NEQ(X,Y) _BOOL_NEQ ## X ## Y
#define _BOOL_NEQ00 0
#define _BOOL_NEQ10 1
#define _BOOL_NEQ01 1
#define _BOOL_NEQ11 0

#endif