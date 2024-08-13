#ifndef C23META_I8H_LOG2
#define C23META_I8H_LOG2

#define I8H_LOG2(X) _I8H_LOG2_C(X)
#define _I8H_LOG2_C(X) I8H_LOG2_EVAL(_I8H_LOG2(I8H_SIGN_BIT(X),X))
#define I8H_LOG2_EVAL(X) I8H_LOG2_EVAL1(X)
#define I8H_LOG2_EVAL1(X) X

#define _I8H_LOG2(S,X) CAT(_I8H_LOG2_X,S)(X)
#define _I8H_LOG2_X0(X) U8H_LOG2(X)
#define _I8H_LOG2_X1(X) I8H_0 _Pragma("GCC error \"Log2 of negative value\"")

#endif