#ifndef C23META_I32_GT
#define C23META_I32_GT

#define I32_GT(X,Y) _I32_GT_C(X,Y)
#define _I32_GT_C(X,Y) I32_GT_EVAL(_I32_GT(I32_CMP_SIGN(X,Y),X,Y))
#define I32_GT_EVAL(X) X

#define _I32_GT(S,X,Y) CAT(_I32_GT_X_,S)(X,Y)
#define _I32_GT_X_POS_POS(X,Y) U32_GT(X,Y)
#define _I32_GT_X_NEG_NEG(X,Y) U32_GT(X,Y)
#define _I32_GT_X_POS_NEG(X,Y) 1
#define _I32_GT_X_NEG_POS(X,Y) 0

#endif