#ifndef C23META_FP32_EQ
#define C23META_FP32_EQ

#define FP32_EQ(X,Y) CAT(CAT(_FP32_EQ,FP32_IS_NAN(X)),FP32_IS_NAN(Y))(X,Y)
#define _FP32_EQ00(X,Y) U32_EQ(X,Y)
#define _FP32_EQ01(X,Y) 0
#define _FP32_EQ10(X,Y) 0
#define _FP32_EQ11(X,Y) 0

#define FP32_EQ_UNCHECKED(X,Y) U32_EQ(X,Y)

#endif