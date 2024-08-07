#ifndef C23META_I32H_ABS
#define C23META_I32H_ABS
#include "neg.h"

#define I32H_ABS(X) _I32H_ABS_C(X)
#define _I32H_ABS_C(X) I32H_ABS_EVAL(_I32H_ABS(I32H_SIGN_BIT(X),X))
#define I32H_ABS_EVAL(X) X

#define _I32H_ABS(S,X) CAT(_I32H_ABS_X,S)(X)
#define _I32H_ABS_X0(X) X
#define _I32H_ABS_X1(X) I32H_NEG(X)

#endif