#ifndef C23META_BOOL_NOT
#define C23META_BOOL_NOT

#define BOOL_NOT(X) _BOOL_NOT(X)
#define _BOOL_NOT(X) _BOOL_NOT ## X
#define _BOOL_NOT0 1
#define _BOOL_NOT1 0

#endif