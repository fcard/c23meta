#ifndef C23META_BOOL_AND
#define C23META_BOOL_AND

#define BOOL_AND(X,Y) _BOOL_AND(X,Y)
#define _BOOL_AND(X,Y) _BOOL_AND ## X ## Y
#define _BOOL_AND00 0
#define _BOOL_AND10 0
#define _BOOL_AND01 0
#define _BOOL_AND11 1

#endif