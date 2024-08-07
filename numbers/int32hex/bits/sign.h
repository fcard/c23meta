#ifndef C23META_I32H_SIGN
#define C23META_I32H_SIGN

#define I32H_SIGN_BIT(X) _I32H_SIGN_BIT_EVAL(_I32H_SIGN_BIT X)
#define _I32H_SIGN_BIT_EVAL(X) X
#define _I32H_SIGN_BIT(A0,A1,A2,A3,A4,A5,A6,A7)\
  _I32H_SIGN_BIT_X ## A7

#define _I32H_SIGN_BIT_X0 0
#define _I32H_SIGN_BIT_X1 0
#define _I32H_SIGN_BIT_X2 0
#define _I32H_SIGN_BIT_X3 0
#define _I32H_SIGN_BIT_X4 0
#define _I32H_SIGN_BIT_X5 0
#define _I32H_SIGN_BIT_X6 0
#define _I32H_SIGN_BIT_X7 0
#define _I32H_SIGN_BIT_X8 1
#define _I32H_SIGN_BIT_X9 1
#define _I32H_SIGN_BIT_Xa 1
#define _I32H_SIGN_BIT_Xb 1
#define _I32H_SIGN_BIT_Xc 1
#define _I32H_SIGN_BIT_Xd 1
#define _I32H_SIGN_BIT_Xe 1
#define _I32H_SIGN_BIT_Xf 1

#define I32H_CMP_SIGN(X,Y) I32H_CMP_SIGN_EVAL(_I32H_CMP_SIGN(I32H_SIGN_BIT(X),I32H_SIGN_BIT(Y)))
#define I32H_CMP_SIGN_EVAL(X) X
#define _I32H_CMP_SIGN(SX,SY) CAT(CAT(_I32H_CMP_SIGN_X, SX), SY)
#define _I32H_CMP_SIGN_X00 POS_POS
#define _I32H_CMP_SIGN_X01 POS_NEG
#define _I32H_CMP_SIGN_X10 NEG_POS
#define _I32H_CMP_SIGN_X11 NEG_NEG

#endif