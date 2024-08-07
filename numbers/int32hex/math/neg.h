#ifndef C23META_I32H_NEG
#define C23META_I32H_NEG
#include "add.h"

#define I32H_NEG(X) I32H_NEG_EVAL(_I32H_NEG(X))
#define I32H_NEG_EVAL(X)  I32H_NEG_EVAL1(I32H_NEG_EVAL1(I32H_NEG_EVAL1(I32H_NEG_EVAL1(X))))
#define I32H_NEG_EVAL1(X) I32H_NEG_EVAL2(I32H_NEG_EVAL2(I32H_NEG_EVAL2(I32H_NEG_EVAL2(X))))
#define I32H_NEG_EVAL2(X) X

#define _I32H_NEG(X) I32H_ADD(_I32H_NEG_X(X),I32H_1)
#define _I32H_NEG_X(X) _I32H_NEG_Y X

#define _I32H_NEG_Y(A0,A1,A2,A3,A4,A5,A6,A7)\
  (\
    _I32H_NEG1(A0),\
    _I32H_NEG1(A1),\
    _I32H_NEG1(A2),\
    _I32H_NEG1(A3),\
    _I32H_NEG1(A4),\
    _I32H_NEG1(A5),\
    _I32H_NEG1(A6),\
    _I32H_NEG1(A7)\
  )

#define _I32H_NEG1(X) _I32H_NEG1_X ## X
#define _I32H_NEG1_X0 f
#define _I32H_NEG1_X1 e
#define _I32H_NEG1_X2 d
#define _I32H_NEG1_X3 c
#define _I32H_NEG1_X4 b
#define _I32H_NEG1_X5 a
#define _I32H_NEG1_X6 9
#define _I32H_NEG1_X7 8
#define _I32H_NEG1_X8 7
#define _I32H_NEG1_X9 6
#define _I32H_NEG1_Xa 5
#define _I32H_NEG1_Xb 4
#define _I32H_NEG1_Xc 3
#define _I32H_NEG1_Xd 2
#define _I32H_NEG1_Xe 1
#define _I32H_NEG1_Xf 0

#endif