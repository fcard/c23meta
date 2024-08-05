#ifndef C23META_FP32_EXP
#define C23META_FP32_EXP

#define FP32_EXP(X)\
  FP32_MUL(\
    FP32_POW_I(FP32_EULER, FP32_TO_U32(X)),\
    _FP32_EXP(FP32_FRACT(X))\
  )

#define _FP32_EXP(X)\
  FP32_ADD(\
    FP32_1,\
    FP32_ADD(\
      X,\
      FP32_ADD(\
        FP32_DIV(FP32_POW_I(X,U32_2), FP32_2),\
        FP32_ADD(\
          FP32_DIV(FP32_POW_I(X,U32_3), FP32_6),\
          FP32_ADD(\
            FP32_DIV(FP32_POW_I(X,U32_4), FP32_24),\
            FP32_ADD(\
              FP32_DIV(FP32_POW_I(X,U32_5), FP32_120),\
                FP32_ADD(\
                 FP32_DIV(FP32_POW_I(X,U32_6), FP32_720),\
                 FP32_DIV(FP32_POW_I(X,U32_5), FP32_5040))))))))


#define FP32_EULER (0,0,1,0,1,0,1,0,0,0,0,1,1,1,1,1,1,0,1,1,0,1,0,0,0,0,0,0,0,0,1,0)

#endif