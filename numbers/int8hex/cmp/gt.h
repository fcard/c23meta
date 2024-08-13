#ifndef C23META_I8H_GT
#define C23META_I8H_GT

#define I8H_GT(X,Y) _I8H_GT_C(X,Y)
#define _I8H_GT_C(X,Y) I8H_GT_EVAL(_I8H_GT(I8H_CMP_SIGN(X,Y),X,Y))
#define I8H_GT_EVAL(X) X

#define _I8H_GT(S,X,Y) CAT(_I8H_GT_X_,S)(X,Y)
#define _I8H_GT_X_POS_POS(X,Y) U8H_GT(X,Y)
#define _I8H_GT_X_NEG_NEG(X,Y) U8H_GT(X,Y)
#define _I8H_GT_X_POS_NEG(X,Y) 1
#define _I8H_GT_X_NEG_POS(X,Y) 0

#endif