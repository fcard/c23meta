#ifndef C23META_I32_NEG
#define C23META_I32_NEG
#include "../../util.h"
#include "add.h"

#define I32_NEG(X) I32_NEG_EVAL(_I32_NEG(X))
#define I32_NEG_EVAL(X)  I32_NEG_EVAL1(I32_NEG_EVAL1(I32_NEG_EVAL1(I32_NEG_EVAL1(X))))
#define I32_NEG_EVAL1(X) I32_NEG_EVAL2(I32_NEG_EVAL2(I32_NEG_EVAL2(I32_NEG_EVAL2(X))))
#define I32_NEG_EVAL2(X) X

#define _I32_NEG(X) I32_ADD(_I32_NEG_X(X),I32_1)
#define _I32_NEG_X(X) _I32_NEG_Y X

#define _I32_NEG_Y(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,\
                      A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (\
    _I32_NEG1(A0),\
    _I32_NEG1(A1),\
    _I32_NEG1(A2),\
    _I32_NEG1(A3),\
    _I32_NEG1(A4),\
    _I32_NEG1(A5),\
    _I32_NEG1(A6),\
    _I32_NEG1(A7),\
    _I32_NEG1(A8),\
    _I32_NEG1(A9),\
    _I32_NEG1(A10),\
    _I32_NEG1(A11),\
    _I32_NEG1(A12),\
    _I32_NEG1(A13),\
    _I32_NEG1(A14),\
    _I32_NEG1(A15),\
    _I32_NEG1(A16),\
    _I32_NEG1(A17),\
    _I32_NEG1(A18),\
    _I32_NEG1(A19),\
    _I32_NEG1(A20),\
    _I32_NEG1(A21),\
    _I32_NEG1(A22),\
    _I32_NEG1(A23),\
    _I32_NEG1(A24),\
    _I32_NEG1(A25),\
    _I32_NEG1(A26),\
    _I32_NEG1(A27),\
    _I32_NEG1(A28),\
    _I32_NEG1(A29),\
    _I32_NEG1(A30),\
    _I32_NEG1(A31)\
  )

#define _I32_NEG1(X) _I32_NEG1_X ## X
#define _I32_NEG1_X0 1
#define _I32_NEG1_X1 0

#endif