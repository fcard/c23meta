#ifndef C23META_I32_POW
#define C23META_I32_POW
#include "../bits/sign.h"
#include "../../uint32/math/pow.h"


#define I32_POW(X,N) _I32_POW_C(X,N)
#define _I32_POW_C(X,N) I32_POW_EVAL(_I32_POW_PREAMBLE(I32_EQ(N,I32_0),X,N))
#define I32_POW_EVAL(X) I32_POW_EVAL1(X)
#define I32_POW_EVAL1(X) X

#define _I32_POW_PREAMBLE(G,X,N) CAT(_I32_POW_P,G)(X,N)
#define _I32_POW_P0(X,N) _I32_POW(I32_CMP_SIGN(X,N),X,N)
#define _I32_POW_P1(X,N) I32_1

#define _I32_POW(S,X,N) CAT(_I32_POW_X_,S)(X,N)
#define _I32_POW_X_POS_POS(X,N) U32_POW(X,N)
#define _I32_POW_X_NEG_POS(X,N) I32_NEG(U32_POW(I32_NEG(X),N))
#define _I32_POW_X_POS_NEG(X,N) I32_0
#define _I32_POW_X_NEG_NEG(X,N) I32_0

#endif