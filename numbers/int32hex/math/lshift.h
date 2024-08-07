#ifndef C23META_I32H_LSH
#define C23META_I32H_LSH
#include "../bits/sign.h"
#include "../../uint32/math/lshift.h"

#define I32H_LSH(X,N) _I32H_LSH_C(X,N)
#define _I32H_LSH_C(X,N) I32H_LSH_EVAL(_I32H_LSH(I32H_CMP_SIGN(X,N),X,N))
#define I32H_LSH_EVAL(X) X

#define _I32H_LSH(S,X,N) CAT(_I32H_LSH_X_,S)(X,N)
#define _I32H_LSH_X_POS_POS(X,N) U32H_LSH(X,N)
#define _I32H_LSH_X_NEG_POS(X,N) I32H_NEG(U32H_LSH(I32H_NEG(X),N))
#define _I32H_LSH_X_POS_NEG(X,N) U32H_RSH(X,I32H_NEG(N))
#define _I32H_LSH_X_NEG_NEG(X,N) I32H_NEG(U32H_RSH(I32H_NEG(X),I32H_NEG(N)))

#endif