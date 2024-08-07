#ifndef C23META_I32_LEQ
#define C23META_I32_LEQ

#define I32_LEQ(X,Y) _I32_LEQ_C(X,Y)
#define _I32_LEQ_C(X,Y) I32_LEQ_EVAL(_I32_LEQ(I32_CMP_SIGN(X,Y),X,Y))
#define I32_LEQ_EVAL(X) X

#define _I32_LEQ(S,X,Y) CAT(_I32_LEQ_X_,S)(X,Y)
#define _I32_LEQ_X_POS_POS(X,Y) U32_LEQ(X,Y)
#define _I32_LEQ_X_NEG_NEG(X,Y) U32_LEQ(X,Y)
#define _I32_LEQ_X_POS_NEG(X,Y) 0
#define _I32_LEQ_X_NEG_POS(X,Y) 1

#endif