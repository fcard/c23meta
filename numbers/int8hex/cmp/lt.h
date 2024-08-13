#ifndef C23META_I8H_LT
#define C23META_I8H_LT
#include "../bits/sign.h"
#include "../../uint32/cmp/lt.h"

#define I8H_LT(X,Y) _I8H_LT_C(X,Y)
#define _I8H_LT_C(X,Y) I8H_LT_EVAL(_I8H_LT(I8H_CMP_SIGN(X,Y),X,Y))
#define I8H_LT_EVAL(X) X

#define _I8H_LT(S,X,Y) CAT(_I8H_LT_X_,S)(X,Y)
#define _I8H_LT_X_POS_POS(X,Y) U8H_LT(X,Y)
#define _I8H_LT_X_NEG_NEG(X,Y) U8H_LT(X,Y)
#define _I8H_LT_X_POS_NEG(X,Y) 0
#define _I8H_LT_X_NEG_POS(X,Y) 1

#endif