#ifndef C23META_I32_RSH
#define C23META_I32_RSH
#include "../../util.h"
#include "../bits/sign.h"
#include "../../uint32/math/lshift.h"


#define I32_RSH(X,N) I32_RSH_EVAL(_I32_RSH(I32_CMP_SIGN(X,N),X,N))
#define I32_RSH_EVAL(X) X

#define _I32_RSH(S,X,N) DEFER(CAT(_I32_RSH_X_,S))(X,N)
#define _I32_RSH_X_POS_POS(X,N) U32_RSH(X,N)
#define _I32_RSH_X_NEG_POS(X,N) I32_NEG(U32_RSH(I32_NEG(X),N))
#define _I32_RSH_X_POS_NEG(X,N) U32_LSH(X,I32_NEG(N))
#define _I32_RSH_X_NEG_NEG(X,N) I32_NEG(U32_LSH(I32_NEG(X),I32_NEG(N)))

#endif