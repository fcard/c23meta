#ifndef C23META_I8H_LSH
#define C23META_I8H_LSH
#include "../bits/sign.h"
#include "../../uint32/math/lshift.h"

#define I8H_LSH(X,N) _I8H_LSH_C(X,N)
#define _I8H_LSH_C(X,N) I8H_LSH_EVAL(_I8H_LSH(I8H_CMP_SIGN(X,N),X,N))
#define I8H_LSH_EVAL(X) X

#define _I8H_LSH(S,X,N) CAT(_I8H_LSH_X_,S)(X,N)
#define _I8H_LSH_X_POS_POS(X,N) U8H_LSH(X,N)
#define _I8H_LSH_X_NEG_POS(X,N) I8H_NEG(U8H_LSH(I8H_NEG(X),N))
#define _I8H_LSH_X_POS_NEG(X,N) U8H_RSH(X,I8H_NEG(N))
#define _I8H_LSH_X_NEG_NEG(X,N) I8H_NEG(U8H_RSH(I8H_NEG(X),I8H_NEG(N)))

#endif