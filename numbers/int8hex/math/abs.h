#ifndef C23META_I8H_ABS
#define C23META_I8H_ABS
#include "neg.h"

#define I8H_ABS(X) _I8H_ABS_C(X)
#define _I8H_ABS_C(X) I8H_ABS_EVAL(_I8H_ABS(I8H_SIGN_BIT(X),X))
#define I8H_ABS_EVAL(X) X

#define _I8H_ABS(S,X) CAT(_I8H_ABS_X,S)(X)
#define _I8H_ABS_X0(X) X
#define _I8H_ABS_X1(X) I8H_NEG(X)

#endif