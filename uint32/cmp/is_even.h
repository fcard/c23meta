#ifndef C23META_U32_IS_EVEN
#define C23META_U32_IS_EVEN
#include "../../util.h"

#define U32_IS_EVEN(X) _U32_IS_EVEN(X)
#define _U32_IS_EVEN(X) _U32_IS_EVEN_EVAL(DEFER(_U32_IS_EVEN_X) X)
#define _U32_IS_EVEN_EVAL(X) X

#define _U32_IS_EVEN_X(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,\
                         A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,\
                         A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  _U32_IS_EVEN_Y ## A0

#define _U32_IS_EVEN_Y0 1
#define _U32_IS_EVEN_Y1 0

#endif