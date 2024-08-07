#ifndef C23META_FP32H_NEG
#define C23META_FP32H_NEG

#define FP32H_NEG(X) _FP32H_NEG_EVAL(_FP32H_NEG X)
#define _FP32H_NEG_EVAL(X) X
#define _FP32H_NEG(A0,A1,A2,A3,A4,A5,A6,A7)\
  (A0,A1,A2,A3,A4,A5,A6,_FP32H_NEG1(A7))

#define _FP32H_NEG1(X) _FP32H_NEG1_ ## X
#define _FP32H_NEG1_0 8
#define _FP32H_NEG1_1 9
#define _FP32H_NEG1_2 a
#define _FP32H_NEG1_3 b
#define _FP32H_NEG1_4 c
#define _FP32H_NEG1_5 d
#define _FP32H_NEG1_6 e
#define _FP32H_NEG1_7 f
#define _FP32H_NEG1_8 0
#define _FP32H_NEG1_9 1
#define _FP32H_NEG1_a 2
#define _FP32H_NEG1_b 3
#define _FP32H_NEG1_c 4
#define _FP32H_NEG1_d 5
#define _FP32H_NEG1_e 6
#define _FP32H_NEG1_f 7

#endif