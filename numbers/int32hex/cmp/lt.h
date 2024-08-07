#ifndef C23META_I32H_LT
#define C23META_I32H_LT
#include "../bits/sign.h"
#include "../../uint32/cmp/lt.h"

#define I32H_LT(X,Y) _I32H_LT_C(X,Y)
#define _I32H_LT_C(X,Y) I32H_LT_EVAL(_I32H_LT(I32H_CMP_SIGN(X,Y),X,Y))
#define I32H_LT_EVAL(X) X

#define _I32H_LT(S,X,Y) CAT(_I32H_LT_X_,S)(X,Y)
#define _I32H_LT_X_POS_POS(X,Y) U32H_LT(X,Y)
#define _I32H_LT_X_NEG_NEG(X,Y) U32H_LT(X,Y)
#define _I32H_LT_X_POS_NEG(X,Y) 0
#define _I32H_LT_X_NEG_POS(X,Y) 1

#endif