#ifndef C23META_FP32_MIN
#define C23META_FP32_MIN

#define FP32_MIN(X,Y) _FP32_MIN(FP32_LT(X,Y),X,Y)
#define _FP32_MIN(G,X,Y) _FP32_MIN_X(G,X,Y)
#define _FP32_MIN_X(G,X,Y) _FP32_MIN_EVAL(DEFER(_FP32_MIN_Y ## G)(X,Y))
#define _FP32_MIN_Y0(X,Y) Y
#define _FP32_MIN_Y1(X,Y) X
#define _FP32_MIN_EVAL(X) X

#endif