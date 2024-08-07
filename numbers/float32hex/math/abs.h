#ifndef C23META_FP32H_ABS
#define C23META_FP32H_ABS

#define FP32H_ABS(X) _FP32H_ABS_EVAL(_FP32H_ABS X)
#define _FP32H_ABS_EVAL(X) X
#define _FP32H_ABS(A0,A1,A2,A3,A4,A5,A6,A7)\
  (A0,A1,A2,A3,A4,A5,A6,_FP32H_ABS_X ## A7)

#define _FP32H_ABS_X0 0
#define _FP32H_ABS_X1 1
#define _FP32H_ABS_X2 2
#define _FP32H_ABS_X3 3
#define _FP32H_ABS_X4 4
#define _FP32H_ABS_X5 5
#define _FP32H_ABS_X6 6
#define _FP32H_ABS_X7 7
#define _FP32H_ABS_X8 0
#define _FP32H_ABS_X9 1
#define _FP32H_ABS_Xa 2
#define _FP32H_ABS_Xb 3
#define _FP32H_ABS_Xc 4
#define _FP32H_ABS_Xd 5
#define _FP32H_ABS_Xe 6
#define _FP32H_ABS_Xf 7

#endif