#ifndef C23META_BOOL_XOR
#define C23META_BOOL_XOR

#define BOOL_XOR(X,Y) _BOOL_XOR(X,Y)
#define _BOOL_XOR(X,Y) _BOOL_XOR ## X ## Y
#define _BOOL_XOR00 0
#define _BOOL_XOR10 1
#define _BOOL_XOR01 1
#define _BOOL_XOR11 0

#endif