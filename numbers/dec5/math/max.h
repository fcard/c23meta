#ifndef C23META_DEC5_MAX
#define C23META_DEC5_MAX

#define DEC5_MAX(X,Y) _DEC5_MAX_C(X,Y)
#define _DEC5_MAX_C(X,Y) CAT(_DEC5_MAX,DEC5_LT(X,Y))(X,Y)
#define _DEC5_MAX1(X,Y) Y
#define _DEC5_MAX0(X,Y) X

#endif