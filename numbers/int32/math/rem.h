#ifndef C23META_I32_REM
#define C23META_I32_REM
#include "../bits/sign.h"
#include "../../uint32/cmp/geq.h"

#define I32_REM(X,Y) _I32_REM_C(X,Y)
#define _I32_REM_C(X,Y) I32_REM_EVAL(_I32_REM(I32_CMP_SIGN(X,Y),X,Y))
#define I32_REM_EVAL(X) X

#define _I32_REM(S,X,Y) CAT(_I32_REM_X_,S)(X,Y)
#define _I32_REM_X_POS_POS(X,Y) U32_REM(X,Y)
#define _I32_REM_X_NEG_NEG(X,Y) I32_NEG(U32_REM(I32_NEG(X),I32_NEG(Y)))
#define _I32_REM_X_POS_NEG(X,Y) U32_REM(X,I32_NEG(Y))
#define _I32_REM_X_NEG_POS(X,Y) I32_NEG(U32_REM(I32_NEG(X),Y))

#endif