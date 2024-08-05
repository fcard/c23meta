#ifndef C23META_U128H_EQ
#define C23META_U128H_EQ

#define U128H_EQ(X,Y) _U128H_EQ(X,Y)
#define _U128H_EQ(X,Y) _U128H_EQ_EVAL(DEFER(_U128H_EQ_X)(UNWRAP X, UNWRAP Y))
#define _U128H_EQ_EVAL(X) _U128H_EQ_EVAL1(_U128H_EQ_EVAL1(_U128H_EQ_EVAL1(_U128H_EQ_EVAL1(X))))
#define _U128H_EQ_EVAL1(X) _U128H_EQ_EVAL2(_U128H_EQ_EVAL2(_U128H_EQ_EVAL2(_U128H_EQ_EVAL2(X))))
#define _U128H_EQ_EVAL2(X) _U128H_EQ_EVAL3(_U128H_EQ_EVAL3(_U128H_EQ_EVAL3(_U128H_EQ_EVAL3(X))))
#define _U128H_EQ_EVAL3(X) X

#define _U128H_EQ_X(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31,\
                    B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31)\
  HEXEQ(1,A31,B31,A30,B30,A29,B29,A28,B28,A27,B27,A26,B26,A25,B25,A24,B24,A23,B23,A22,B22,A21,B21,A20,B20,A19,B19,A18,B18,A17,B17,A16,B16,\
          A15,B15,A14,B14,A13,B13,A12,B12,A11,B11,A10,B10,A9,B9,A8,B8,A7,B7,A6,B6,A5,B5,A4,B4,A3,B3,A2,B2,A1,B1,A0,B0)

#endif