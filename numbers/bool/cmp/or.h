#ifndef C23META_BOOL_OR
#define C23META_BOOL_OR

#define BOOL_OR(X,Y) _BOOL_OR(X,Y)
#define _BOOL_OR(X,Y) _BOOL_OR ## X ## Y
#define _BOOL_OR00 0
#define _BOOL_OR10 1
#define _BOOL_OR01 1
#define _BOOL_OR11 1

#endif