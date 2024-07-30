#ifndef C23META_I32_EXP
#define C23META_I32_EXP
#include "../../util.h"
#include "../bits/sign.h"
#include "../../uint32/math/exp.h"


#define I32_EXP(X,N) I32_EXP_EVAL(_I32_EXP_PREAMBLE(I32_EQ(N,I32_0),X,N))
#define I32_EXP_EVAL(X) I32_EXP_EVAL1(X)
#define I32_EXP_EVAL1(X) X

#define _I32_EXP_PREAMBLE(G,X,N) DEFER(CAT(_I32_EXP_P,G))(X,N)
#define _I32_EXP_P0(X,N) _I32_EXP(I32_CMP_SIGN(X,N),X,N)
#define _I32_EXP_P1(X,N) I32_1

#define _I32_EXP(S,X,N) DEFER(CAT(_I32_EXP_X_,S))(X,N)
#define _I32_EXP_X_POS_POS(X,N) U32_EXP(X,N)
#define _I32_EXP_X_NEG_POS(X,N) I32_NEG(U32_EXP(I32_NEG(X),N))
#define _I32_EXP_X_POS_NEG(X,N) I32_0
#define _I32_EXP_X_NEG_NEG(X,N) I32_0

#endif