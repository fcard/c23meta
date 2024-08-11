#ifndef C23META_DEC5_MIN
#define C23META_DEC5_MIN

#define DEC5_MIN(X,Y) _DEC5_MIN_C(X,Y)
#define _DEC5_MIN_C(X,Y) CAT(_DEC5_MIN,DEC5_LT(X,Y))(X,Y)
#define _DEC5_MIN1(X,Y) X
#define _DEC5_MIN0(X,Y) Y

#endif