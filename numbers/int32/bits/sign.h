#ifndef C23META_I32_SIGN
#define C23META_I32_SIGN

#define I32_SIGN_BIT(X) _I32_SIGN_BIT_EVAL(_I32_SIGN_BIT X)
#define _I32_SIGN_BIT_EVAL(X) X
#define _I32_SIGN_BIT(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,\
                        A11,A12,A13,A14,A15,A16,A17,A18,A19,\
                        A20,A21,A22,A23,A24,A25,A26,A27,A28,\
                        A29,A30,A31)\
  A31

#define I32_CMP_SIGN(X,Y) I32_CMP_SIGN_EVAL(_I32_CMP_SIGN(I32_SIGN_BIT(X),I32_SIGN_BIT(Y)))
#define I32_CMP_SIGN_EVAL(X) X
#define _I32_CMP_SIGN(SX,SY) CAT(CAT(_I32_CMP_SIGN_X, SX), SY)
#define _I32_CMP_SIGN_X00 POS_POS
#define _I32_CMP_SIGN_X01 POS_NEG
#define _I32_CMP_SIGN_X10 NEG_POS
#define _I32_CMP_SIGN_X11 NEG_NEG

#endif