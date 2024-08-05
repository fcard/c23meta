#ifndef C23META_I32_LSH
#define C23META_I32_LSH
#include "../bits/sign.h"
#include "../../uint32/math/lshift.h"


#define I32_LSH(X,N) _I32_LSH_C(X,N)
#define _I32_LSH_C(X,N) I32_LSH_EVAL(_I32_LSH(I32_CMP_SIGN(X,N),X,N))
#define I32_LSH_EVAL(X) X

#define _I32_LSH(S,X,N) CAT(_I32_LSH_X_,S)(X,N)
#define _I32_LSH_X_POS_POS(X,N) U32_LSH(X,N)
#define _I32_LSH_X_NEG_POS(X,N) I32_NEG(U32_LSH(I32_NEG(X),N))
#define _I32_LSH_X_POS_NEG(X,N) U32_RSH(X,I32_NEG(N))
#define _I32_LSH_X_NEG_NEG(X,N) I32_NEG(U32_RSH(I32_NEG(X),I32_NEG(N)))

#endif