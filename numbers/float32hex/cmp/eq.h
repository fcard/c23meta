#ifndef C23META_FP32H_EQ
#define C23META_FP32H_EQ

#define FP32H_EQ(X,Y) _FP32H_EQ(X,Y)
#define _FP32H_EQ(X,Y) CAT(CAT(_FP32H_EQ,FP32H_IS_NAN(X)),FP32H_IS_NAN(Y))(X,Y)
#define _FP32H_EQ00(X,Y) U32H_EQ(X,Y)
#define _FP32H_EQ01(X,Y) 0
#define _FP32H_EQ10(X,Y) 0
#define _FP32H_EQ11(X,Y) 0

#define FP32H_EQ_UNCHECKED(X,Y) U32H_EQ(X,Y)

#endif