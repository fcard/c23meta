#ifndef C23META_I32_DIV
#define C23META_I32_DIV
#include "../../util.h"
#include "../bits/sign.h"
#include "../../uint32/cmp/geq.h"

#define I32_DIV(X,Y) I32_DIV_EVAL(_I32_DIV(I32_CMP_SIGN(X,Y),X,Y))
#define I32_DIV_EVAL(X) X

#define _I32_DIV(S,X,Y) DEFER(CAT(_I32_DIV_X_,S))(X,Y)
#define _I32_DIV_X_POS_POS(X,Y) U32_DIV(X,Y)
#define _I32_DIV_X_NEG_NEG(X,Y) U32_DIV(I32_NEG(X),I32_NEG(Y))
#define _I32_DIV_X_POS_NEG(X,Y) I32_NEG(U32_DIV(X,I32_NEG(Y)))
#define _I32_DIV_X_NEG_POS(X,Y) I32_NEG(U32_DIV(I32_NEG(X),Y))

#endif