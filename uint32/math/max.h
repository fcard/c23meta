#ifndef C23META_U32_MAX
#define C23META_U32_MAX
#include "../../util.h"

#define U32_MAX(X,Y) _U32_MAX(U32_LT(X,Y),X,Y)
#define _U32_MAX(G,X,Y) _U32_MAX_X(G,X,Y)
#define _U32_MAX_X(G,X,Y) _U32_MAX_EVAL(DEFER(_U32_MAX_Y ## G)(X,Y))
#define _U32_MAX_Y0(X,Y) X
#define _U32_MAX_Y1(X,Y) Y
#define _U32_MAX_EVAL(X) X

#endif