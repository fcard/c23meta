#ifndef C23META_I32_ABS
#define C23META_I32_ABS
#include "neg.h"

#define I32_ABS(X) I32_ABS_EVAL(_I32_ABS(I32_SIGN_BIT(X),X))
#define I32_ABS_EVAL(X) X

#define _I32_ABS(S,X) DEFER(CAT(_I32_ABS_X,S))(X)
#define _I32_ABS_X0(X) X
#define _I32_ABS_X1(X) I32_NEG(X)

#endif