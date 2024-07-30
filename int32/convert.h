#ifndef C23META_I32_CONVERT
#define C23META_I32_CONVERT
#include "../util.h"
#include "math/neg.h"
#include "bits/sign.h"

#define I32_CONVERT(X) I32_CONVERT_EVAL(_I32_CONVERT(I32_SIGN_BIT(X),X))
#define I32_CONVERT_EVAL(X) X

#define _I32_CONVERT(S,X) _I32_CONVERT_X(S,X)
#define _I32_CONVERT_X(S,X) DEFER(CAT(_I32_CONVERT_X,S))(X)
#define _I32_CONVERT_X0(X) U32_CONVERT(X)
#define _I32_CONVERT_X1(X) (-U32_CONVERT(I32_NEG(X)))

#endif