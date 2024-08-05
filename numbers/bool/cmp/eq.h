#ifndef C23META_BOOL_EQ
#define C23META_BOOL_EQ

#define BOOL_EQ(X,Y) _BOOL_EQ(X,Y)
#define _BOOL_EQ(X,Y) _BOOL_EQ ## X ## Y
#define _BOOL_EQ00 1
#define _BOOL_EQ10 0
#define _BOOL_EQ01 0
#define _BOOL_EQ11 1

#endif