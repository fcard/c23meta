#ifndef C23META_U8H_SUB
#define C23META_U8H_SUB

#define U8H_SUB(X,Y) _U8H_SUB(X,Y)
#define _U8H_SUB(X,Y) _U8H_SUB_EVAL(DEFER(_U8H_SUB_X)(UNWRAP X, UNWRAP Y))
#define _U8H_SUB_EVAL(X) _U8H_SUB_EVAL1(_U8H_SUB_EVAL1(_U8H_SUB_EVAL1(_U8H_SUB_EVAL1(X))))
#define _U8H_SUB_EVAL1(X) _U8H_SUB_EVAL2(_U8H_SUB_EVAL2(X))
#define _U8H_SUB_EVAL2(X) X


#define _U8H_SUB_X(A0,A1,B0,B1)\
  (HEXSUB(0,A0,B0,A1,B1))

#endif