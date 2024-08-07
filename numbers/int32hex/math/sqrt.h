#ifndef C23META_I32H_SQRT
#define C23META_I32H_SQRT

#define I32H_SQRT(X) _I32H_SQRT_C(X)
#define _I32H_SQRT_C(X) I32H_SQRT_EVAL(_I32H_SQRT(I32H_SIGN_BIT(X),X))
#define I32H_SQRT_EVAL(X) I32H_SQRT_EVAL1(X)
#define I32H_SQRT_EVAL1(X) X

#define _I32H_SQRT(S,X) CAT(_I32H_SQRT_X,S)(X)
#define _I32H_SQRT_X0(X) U32H_SQRT(X)
#define _I32H_SQRT_X1(X) I32H_0 _Pragma("GCC error \"Square root of negative value\"")

#endif