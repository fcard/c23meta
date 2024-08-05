#ifndef C23META_U32H_ADD
#define C23META_U32H_ADD

#define U32H_ADD(X,Y) _U32H_ADD(X,Y)
#define _U32H_ADD(X,Y) _U32H_ADD_EVAL(DEFER(_U32H_ADD_X)(UNWRAP X, UNWRAP Y))
#define _U32H_ADD_EVAL(X) _U32H_ADD_EVAL1(_U32H_ADD_EVAL1(_U32H_ADD_EVAL1(_U32H_ADD_EVAL1(X))))
#define _U32H_ADD_EVAL1(X) _U32H_ADD_EVAL2(_U32H_ADD_EVAL2(X))
#define _U32H_ADD_EVAL2(X) X

#define _U32H_ADD_X(A0,A1,A2,A3,A4,A5,A6,A7,\
                    B0,B1,B2,B3,B4,B5,B6,B7)\
  (HEXADD(0,A0,B0,A1,B1,A2,B2,A3,B3,A4,B4,A5,B5,A6,B6,A7,B7))



#endif