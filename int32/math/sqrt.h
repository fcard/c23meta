#ifndef C23META_I32_SQRT
#define C23META_I32_SQRT
#include "../../util.h"
#include "../bits/sign.h"
#include "../../uint32/math/sqrt.h"


#define I32_SQRT(X) I32_SQRT_EVAL(_I32_SQRT(I32_SIGN_BIT(X),X))
#define I32_SQRT_EVAL(X) I32_SQRT_EVAL1(X)
#define I32_SQRT_EVAL1(X) X

#define _I32_SQRT(S,X) DEFER(CAT(_I32_SQRT_X,S))(X)
#define _I32_SQRT_X0(X) U32_SQRT(X)
#define _I32_SQRT_X1(X) I32_0 _Pragma("GCC error \"Square root of negative value\"")

#endif