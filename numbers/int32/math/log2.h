#ifndef C23META_I32_LOG2
#define C23META_I32_LOG2
#include "../bits/sign.h"
#include "../../uint32/math/log2.h"


#define I32_LOG2(X) I32_LOG2_EVAL(_I32_LOG2(I32_SIGN_BIT(X),X))
#define I32_LOG2_EVAL(X) I32_LOG2_EVAL1(X)
#define I32_LOG2_EVAL1(X) X

#define _I32_LOG2(S,X) DEFER(CAT(_I32_LOG2_X,S))(X)
#define _I32_LOG2_X0(X) U32_LOG2(X)
#define _I32_LOG2_X1(X) I32_0 _Pragma("GCC error \"Log2 of negative value\"")

#endif