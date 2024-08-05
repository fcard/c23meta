#ifndef C23META_FP32_MAX
#define C23META_FP32_MAX

#define FP32_MAX(X,Y) _FP32_MAX(FP32_LT(X,Y),X,Y)
#define _FP32_MAX(G,X,Y) _FP32_MAX_X(G,X,Y)
#define _FP32_MAX_X(G,X,Y) _FP32_MAX_EVAL(DEFER(_FP32_MAX_Y ## G)(X,Y))
#define _FP32_MAX_Y0(X,Y) X
#define _FP32_MAX_Y1(X,Y) Y
#define _FP32_MAX_EVAL(X) X

#endif