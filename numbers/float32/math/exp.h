#ifndef C23META_FP32_EXP
#define C23META_FP32_EXP

#define FP32_EXP(X) _FP32_EXP_C(X)
#define _FP32_EXP_C(X) CAT(_FP32_EXP_CHECK_, FP32_CLASSIFY(X))(X)

#define _FP32_EXP_CHECK_nan(X) FP32_NAN
#define _FP32_EXP_CHECK_infinity(X) CAT(_FP32_EXP_CHECK_infinity_, FP32_SIGN_BIT(X)) 
#define _FP32_EXP_CHECK_zero(X) FP32_1
#define _FP32_EXP_CHECK_other(X) FP32_EXP_UNCHECKED(X)

#define _FP32_EXP_CHECK_infinity_0 FP32_INF
#define _FP32_EXP_CHECK_infinity_1 FP32_0

#define FP32_EXP_UNCHECKED(X)\
  FP32_MUL_UNCHECKED(\
    FP32_POW_I_UNCHECKED(FP32_EULER, FP32_TO_U32(X)),\
    _FP32_EXP(FP32_FRACT_UNCHECKED(X))\
  )

#define _FP32_EXP(X) _FP32_EXP_C2(X)
#define _FP32_EXP_C2(X) CAT(_FP32_EXP_ISZ, FP32_IS_ZERO(X))(X)
#define _FP32_EXP_ISZ1(X) FP32_1
#define _FP32_EXP_ISZ0(X) _FP32_EXP_C3(X,FP32_MUL(X,X))
#define _FP32_EXP_C3(X,X2) _FP32_EXP_X(X,X2)
#define _FP32_EXP_X(X,X2) _FP32_EXP_XC(X,X2,FP32_MUL(X,X2),FP32_MUL(X2,X2))
#define _FP32_EXP_XC(X,X2,X3,X4) _FP32_EXP_Y(X,X2,X3,X4)
#define _FP32_EXP_Y(X,X2,X3,X4) _FP32_EXP_Z(X,X2,X3,X4,FP32_MUL(X4,X),FP32_MUL(X4,X2),FP32_MUL(X4,X3))

#define _FP32_EXP_Z(X,X2,X3,X4,X5,X6,X7)\
  FP32_ADD(\
    FP32_1,\
    FP32_ADD(\
      X,\
      FP32_ADD(\
        FP32_DIV2(X2),\
        FP32_ADD(\
          FP32_MUL(X3, FP32_1L6),\
          FP32_ADD(\
            FP32_MUL(X4, FP32_1L24),\
            FP32_ADD(\
              FP32_MUL(X5, FP32_1L120),\
              FP32_ADD(\
                 FP32_MUL(X6, FP32_1L720),\
                 FP32_MUL(X7, FP32_1L5040))))))))


#define FP32_EULER  (0,0,1,0,1,0,1,0,0,0,0,1,1,1,1,1,1,0,1,1,0,1,0,0,0,0,0,0,0,0,1,0)
#define FP32_1L6    (1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,1,1,1,1,1,0,0)
#define FP32_1L24   (1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,1,1,1,0,0)
#define FP32_1L120  (1,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,1,1,1,0,0)
#define FP32_1L720  (1,0,0,0,0,1,1,0,1,1,0,1,0,0,0,0,0,1,1,0,1,1,0,1,0,1,0,1,1,1,0,0)
#define FP32_1L5040 (1,0,0,0,0,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,1,1,1,0,0)
#endif