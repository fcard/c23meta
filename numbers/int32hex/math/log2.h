#ifndef C23META_I32H_LOG2
#define C23META_I32H_LOG2

#define I32H_LOG2(X) _I32H_LOG2_C(X)
#define _I32H_LOG2_C(X) I32H_LOG2_EVAL(_I32H_LOG2(I32H_SIGN_BIT(X),X))
#define I32H_LOG2_EVAL(X) I32H_LOG2_EVAL1(X)
#define I32H_LOG2_EVAL1(X) X

#define _I32H_LOG2(S,X) CAT(_I32H_LOG2_X,S)(X)
#define _I32H_LOG2_X0(X) U32H_LOG2(X)
#define _I32H_LOG2_X1(X) I32H_0 _Pragma("GCC error \"Log2 of negative value\"")

#endif