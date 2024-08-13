#ifndef C23META_I8H_GEQ
#define C23META_I8H_GEQ

#define I8H_GEQ(X,Y) _I8H_GEQ_C(X,Y)
#define _I8H_GEQ_C(X,Y) I8H_GEQ_EVAL(_I8H_GEQ(I8H_CMP_SIGN(X,Y),X,Y))
#define I8H_GEQ_EVAL(X) X

#define _I8H_GEQ(S,X,Y) CAT(_I8H_GEQ_X_,S)(X,Y)
#define _I8H_GEQ_X_POS_POS(X,Y) U8H_GEQ(X,Y)
#define _I8H_GEQ_X_NEG_NEG(X,Y) U8H_GEQ(X,Y)
#define _I8H_GEQ_X_POS_NEG(X,Y) 1
#define _I8H_GEQ_X_NEG_POS(X,Y) 0

#endif