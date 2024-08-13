#ifndef C23META_I8H_SQRT
#define C23META_I8H_SQRT

#define I8H_SQRT(X) _I8H_SQRT_C(X)
#define _I8H_SQRT_C(X) I8H_SQRT_EVAL(_I8H_SQRT(I8H_SIGN_BIT(X),X))
#define I8H_SQRT_EVAL(X) I8H_SQRT_EVAL1(X)
#define I8H_SQRT_EVAL1(X) X

#define _I8H_SQRT(S,X) CAT(_I8H_SQRT_X,S)(X)
#define _I8H_SQRT_X0(X) U8H_SQRT(X)
#define _I8H_SQRT_X1(X) I8H_0 _Pragma("GCC error \"Square root of negative value\"")

#endif