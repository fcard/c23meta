#ifndef C23META_I32H_LEQ
#define C23META_I32H_LEQ
#include "../bits/sign.h"
#include "../../uint32/cmp/leq.h"

#define I32H_LEQ(X,Y) _I32H_LEQ_C(X,Y)
#define _I32H_LEQ_C(X,Y) I32H_LEQ_EVAL(_I32H_LEQ(I32H_CMP_SIGN(X,Y),X,Y))
#define I32H_LEQ_EVAL(X) X

#define _I32H_LEQ(S,X,Y) CAT(_I32H_LEQ_X_,S)(X,Y)
#define _I32H_LEQ_X_POS_POS(X,Y) U32H_LEQ(X,Y)
#define _I32H_LEQ_X_NEG_NEG(X,Y) U32H_LEQ(X,Y)
#define _I32H_LEQ_X_POS_NEG(X,Y) 0
#define _I32H_LEQ_X_NEG_POS(X,Y) 1

#endif