#ifndef C23META_U32H_LT
#define C23META_U32H_LT

#define U32H_LT(X,Y) _U32H_LT(X,Y)
#define _U32H_LT(X,Y) _U32H_LT_EVAL(DEFER(_U32H_LT_X)(UNWRAP X, UNWRAP Y))
#define _U32H_LT_EVAL(X) _U32H_LT_EVAL1(_U32H_LT_EVAL1(_U32H_LT_EVAL1(_U32H_LT_EVAL1(X))))
#define _U32H_LT_EVAL1(X) _U32H_LT_EVAL2(_U32H_LT_EVAL2(_U32H_LT_EVAL2(_U32H_LT_EVAL2(X))))
#define _U32H_LT_EVAL2(X) _U32H_LT_EVAL3(_U32H_LT_EVAL3(_U32H_LT_EVAL3(_U32H_LT_EVAL3(X))))
#define _U32H_LT_EVAL3(X) X

#define _U32H_LT_X(A0,A1,A2,A3,A4,A5,A6,A7,\
                    B0,B1,B2,B3,B4,B5,B6,B7)\
  HEXLT(2,A7,B7,A6,B6,A5,B5,A4,B4,A3,B3,A2,B2,A1,B1,A0,B0)

#endif