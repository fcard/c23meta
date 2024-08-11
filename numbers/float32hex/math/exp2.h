#ifndef C23META_FP32H_EXP2
#define C23META_FP32H_EXP2

#define FP32H_EXP2(X) _FP32H_EXP2_C(X)
#define _FP32H_EXP2_C(X) CAT(_FP32H_EXP2_CHECK_, FP32H_CLASSIFY(X))(X)

#define _FP32H_EXP2_CHECK_nan(X) FP32H_NAN
#define _FP32H_EXP2_CHECK_infinity(X) CAT(_FP32H_EXP2_CHECK_infinity_, FP32H_SIGN_BIT(X)) 
#define _FP32H_EXP2_CHECK_zero(X) FP32H_1
#define _FP32H_EXP2_CHECK_other(X) FP32H_EXP2_UNCHECKED(X)

#define _FP32H_EXP2_CHECK_infinity_0 FP32H_INF
#define _FP32H_EXP2_CHECK_infinity_1 FP32H_0

#define FP32H_EXP2_UNCHECKED(X)\
  FP32H_MUL_UNCHECKED(\
    FP32H_FROM_PARTS(0,FP32H_TO_U32(X),U32H_8388608),\
    _FP32H_EXP2(FP32H_FRACT_UNCHECKED(X))\
  )

#define _FP32H_EXP2(X) _FP32H_EXP2_C2(X)
#define _FP32H_EXP2_C2(X) CAT(_FP32H_EXP2_ISZ, FP32H_IS_ZERO(X))(X)
#define _FP32H_EXP2_ISZ1(X) FP32H_1
#define _FP32H_EXP2_ISZ0(X) _FP32H_EXP2_C3(X,FP32H_MUL(X,X))
#define _FP32H_EXP2_C3(X,X2) _FP32H_EXP2_X(X,X2)
#define _FP32H_EXP2_X(X,X2) _FP32H_EXP2_XC(X,X2,FP32H_MUL(X,X2),FP32H_MUL(X2,X2))
#define _FP32H_EXP2_XC(X,X2,X3,X4) _FP32H_EXP2_Y(X,X2,X3,X4)
#define _FP32H_EXP2_Y(X,X2,X3,X4) _FP32H_EXP2_Z(X,X2,X3,X4,FP32H_MUL(X4,X),FP32H_MUL(X4,X2),FP32H_MUL(X4,X3))

#define _FP32H_EXP2_Z(X,X2,X3,X4,X5,X6,X7)\
  FP32H_ADD(\
    FP32H_1,\
    FP32H_ADD(\
      FP32H_MUL(X, _FP32H_EXP2_A0),\
      FP32H_ADD(\
        FP32H_MUL(X2, _FP32H_EXP2_A1),\
        FP32H_ADD(\
          FP32H_MUL(X3, _FP32H_EXP2_A2),\
          FP32H_ADD(\
            FP32H_MUL(X4, _FP32H_EXP2_A3),\
            FP32H_ADD(\
              FP32H_MUL(X5, _FP32H_EXP2_A4),\
              FP32H_ADD(\
                 FP32H_MUL(X6, _FP32H_EXP2_A5),\
                 FP32H_MUL(X7, _FP32H_EXP2_A6))))))))

#define _FP32H_EXP2_A0 (8,1,2,7,1,3,f,3)
#define _FP32H_EXP2_A1 (0,f,d,f,5,7,e,3)
#define _FP32H_EXP2_A2 (7,4,8,5,3,6,d,3)
#define _FP32H_EXP2_A3 (b,5,5,9,d,1,c,3)
#define _FP32H_EXP2_A4 (f,f,3,c,e,a,a,3)
#define _FP32H_EXP2_A5 (a,8,4,8,1,2,9,3)
#define _FP32H_EXP2_A6 (e,f,5,e,f,7,7,3)

#endif