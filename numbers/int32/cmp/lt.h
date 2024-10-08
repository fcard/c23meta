#ifndef C23META_I32_LT
#define C23META_I32_LT

#define I32_LT(X,Y) _I32_LT_C(X,Y)
#define _I32_LT_C(X,Y) I32_LT_EVAL(_I32_LT(I32_CMP_SIGN(X,Y),X,Y))
#define I32_LT_EVAL(X) X

#define _I32_LT(S,X,Y) CAT(_I32_LT_X_,S)(X,Y)
#define _I32_LT_X_POS_POS(X,Y) U32_LT(X,Y)
#define _I32_LT_X_NEG_NEG(X,Y) U32_LT(X,Y)
#define _I32_LT_X_POS_NEG(X,Y) 0
#define _I32_LT_X_NEG_POS(X,Y) 1

#endif