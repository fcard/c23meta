#ifndef C23META_U64_ADD
#define C23META_U64_ADD
#include "../../util.h"

#define U64_ADD(X,Y) _U64_ADD(X,Y)
#define _U64_ADD(X,Y) _U64_ADD_EVAL(DEFER(_U64_ADD_X)(UNWRAP X, UNWRAP Y))
#define _U64_ADD_EVAL(X) _U64_ADD_EVAL1(_U64_ADD_EVAL1(_U64_ADD_EVAL1(_U64_ADD_EVAL1(X))))
#define _U64_ADD_EVAL1(X) _U64_ADD_EVAL2(_U64_ADD_EVAL2(_U64_ADD_EVAL2(_U64_ADD_EVAL2(X))))
#define _U64_ADD_EVAL2(X) _U64_ADD_EVAL3(_U64_ADD_EVAL3(_U64_ADD_EVAL3(_U64_ADD_EVAL3(X))))
#define _U64_ADD_EVAL3(X) _U64_ADD_EVAL4(_U64_ADD_EVAL4(_U64_ADD_EVAL4(_U64_ADD_EVAL4(X))))
#define _U64_ADD_EVAL4(X) X

#define _U64_ADD_X(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,\
                   A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,\
                   A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31,\
                   A32,A33,A34,A35,A36,A37,A38,A39,A40,A41,A42,\
                   A43,A44,A45,A46,A47,A48,A49,A50,A51,A52,A53,\
                   A54,A55,A56,A57,A58,A59,A60,A61,A62,A63,\
                   B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,\
                   B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,\
                   B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31,\
                   B32,B33,B34,B35,B36,B37,B38,B39,B40,B41,B42,\
                   B43,B44,B45,B46,B47,B48,B49,B50,B51,B52,B53,\
                   B54,B55,B56,B57,B58,B59,B60,B61,B62,B63)\
                    (\
                      BITADD(0,A0,B0,A1,B1,A2,B2,A3,B3,A4,B4,A5,B5,A6,B6,A7,B7,A8,B8,A9,B9,\
                             A10,B10,A11,B11,A12,B12,A13,B13,A14,B14,A15,B15,A16,B16,\
                             A17,B17,A18,B18,A19,B19,A20,B20,A21,B21,A22,B22,A23,B23,\
                             A24,B24,A25,B25,A26,B26,A27,B27,A28,B28,A29,B29,A30,B30,\
                             A31,B31,A32,B32,A33,B33,A34,B34,A35,B35,A36,B36,A37,B37,\
                             A38,B38,A39,B39,A40,B40,A41,B41,A42,B42,A43,B43,\
                             A44,B44,A45,B45,A46,B46,A47,B47,A48,B48,A49,B49,A50,B50,\
                             A51,B51,A52,B52,A53,B53,A54,B54,A55,B55,A56,B56,A57,B57,\
                             A58,B58,A59,B59,A60,B60,A61,B61,A62,B62,A63,B63)\
                    )

#endif