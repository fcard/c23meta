#ifndef C23META_I32_GEQ
#define C23META_I32_GEQ

#define I32_GEQ(X,Y) _I32_GEQ_C(X,Y)
#define _I32_GEQ_C(X,Y) I32_GEQ_EVAL(_I32_GEQ(I32_CMP_SIGN(X,Y),X,Y))
#define I32_GEQ_EVAL(X) X

#define _I32_GEQ(S,X,Y) CAT(_I32_GEQ_X_,S)(X,Y)
#define _I32_GEQ_X_POS_POS(X,Y) U32_GEQ(X,Y)
#define _I32_GEQ_X_NEG_NEG(X,Y) U32_GEQ(X,Y)
#define _I32_GEQ_X_POS_NEG(X,Y) 1
#define _I32_GEQ_X_NEG_POS(X,Y) 0

#endif