#ifndef C23META_U128H_GEQ
#define C23META_U128H_GEQ

#define U128H_GEQ(X,Y) CAT(_U128H_GEQ, U128H_LT(X,Y))
#define _U128H_GEQ0 1
#define _U128H_GEQ1 0

#endif