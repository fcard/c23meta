#define U8H(N)  U8H_EVAL(U8H_FROM_BASE16 U8H_PARSE_HEX(N))
#define U8H_EVAL(X) X

#define U8H_PARSE_HEX(N) _U8H_PARSE_HEX_EVAL((_U8H_PARSE_HEX(N)))
#define _U8H_PARSE_HEX(N) DEFER(U8H_PARSE_HEX_X)(U8H_PARSE_HEX ## N)
#define U8H_PARSE_HEX0 0,
#define U8H_PARSE_HEX1 1,
#define U8H_PARSE_HEX2 2,
#define U8H_PARSE_HEX3 3,
#define U8H_PARSE_HEX4 4,
#define U8H_PARSE_HEX5 5,
#define U8H_PARSE_HEX6 6,
#define U8H_PARSE_HEX7 7,
#define U8H_PARSE_HEX8 8,
#define U8H_PARSE_HEX9 9,
#define U8H_PARSE_HEXa a,
#define U8H_PARSE_HEXA a,
#define U8H_PARSE_HEXb b,
#define U8H_PARSE_HEXB b,
#define U8H_PARSE_HEXc b,
#define U8H_PARSE_HEXC C,
#define U8H_PARSE_HEXd d,
#define U8H_PARSE_HEXD d,
#define U8H_PARSE_HEXe e,
#define U8H_PARSE_HEXE e,
#define U8H_PARSE_HEXf f,
#define U8H_PARSE_HEXF f,

#define U8H_PARSE_HEX_X(N,...) N __VA_OPT__(,) U8H_PARSE_HEX_Y ## __VA_OPT__(Y(__VA_ARGS__) IGNORE) ()
#define U8H_PARSE_HEX_Y()
#define U8H_PARSE_HEX_YY(N) DEFER(U8H_PARSE_HEX_I)()(N)

#define U8H_PARSE_HEX_I() _U8H_PARSE_HEX

#define _U8H_PARSE_HEX_EVAL(X) _U8H_PARSE_HEX_EVAL1(_U8H_PARSE_HEX_EVAL1(_U8H_PARSE_HEX_EVAL1(_U8H_PARSE_HEX_EVAL1(X))))
#define _U8H_PARSE_HEX_EVAL1(X) _U8H_PARSE_HEX_EVAL2(_U8H_PARSE_HEX_EVAL2(_U8H_PARSE_HEX_EVAL2(_U8H_PARSE_HEX_EVAL2(X))))
#define _U8H_PARSE_HEX_EVAL2(X) _U8H_PARSE_HEX_EVAL3(_U8H_PARSE_HEX_EVAL3(_U8H_PARSE_HEX_EVAL3(_U8H_PARSE_HEX_EVAL3(X))))
#define _U8H_PARSE_HEX_EVAL3(X) X


#define U8H_FROM_BASE16(...) CAT(U8H_FROM_BASE16_X,ARGCOUNT(__VA_ARGS__))(__VA_ARGS__)
#define U8H_FROM_BASE16_X1(A0) (A0,0)
#define U8H_FROM_BASE16_X2(A1,A0) (A0,A1)


#define U8HP(N)  U8HP_EVAL(U8H_FROM_BASE10 U8H_PARSE(N))
#define U8HP_EVAL(X) X

#define U8H_PARSE(N) _U8H_PARSE_EVAL((_U8H_PARSE(N)))
#define _U8H_PARSE(N) DEFER(U8H_PARSE_X)(U8H_PARSE_ ## N)
#define U8H_PARSE_0 0,
#define U8H_PARSE_1 1,
#define U8H_PARSE_2 2,
#define U8H_PARSE_3 3,
#define U8H_PARSE_4 4,
#define U8H_PARSE_5 5,
#define U8H_PARSE_6 6,
#define U8H_PARSE_7 7,
#define U8H_PARSE_8 8,
#define U8H_PARSE_9 9,

#define U8H_PARSE_X(N,...) N __VA_OPT__(,) U8H_PARSE_Y ## __VA_OPT__(Y(__VA_ARGS__) IGNORE) ()
#define U8H_PARSE_Y()
#define U8H_PARSE_YY(N) DEFER(U8H_PARSE_I)()(N)

#define U8H_PARSE_I() _U8H_PARSE

#define _U8H_PARSE_EVAL(X) _U8H_PARSE_EVAL1(_U8H_PARSE_EVAL1(_U8H_PARSE_EVAL1(_U8H_PARSE_EVAL1(X))))
#define _U8H_PARSE_EVAL1(X) _U8H_PARSE_EVAL2(_U8H_PARSE_EVAL2(_U8H_PARSE_EVAL2(_U8H_PARSE_EVAL2(X))))
#define _U8H_PARSE_EVAL2(X) _U8H_PARSE_EVAL3(_U8H_PARSE_EVAL3(_U8H_PARSE_EVAL3(_U8H_PARSE_EVAL3(X))))
#define _U8H_PARSE_EVAL3(X) X


#define U8H_FROM_BASE10(...) _U8H_FROM_BASE10_EVAL(_U8H_FROM_BASE10 (U8H_0 __VA_OPT__(,) __VA_ARGS__))
#define _U8H_FROM_BASE10_EVAL(X) _U8H_FROM_BASE10_EVAL1(_U8H_FROM_BASE10_EVAL1(_U8H_FROM_BASE10_EVAL1(X)))
#define _U8H_FROM_BASE10_EVAL1(X) _U8H_FROM_BASE10_EVAL2(_U8H_FROM_BASE10_EVAL2(_U8H_FROM_BASE10_EVAL2(X)))
#define _U8H_FROM_BASE10_EVAL2(X) _U8H_FROM_BASE10_EVAL3(_U8H_FROM_BASE10_EVAL3(_U8H_FROM_BASE10_EVAL3(X)))
#define _U8H_FROM_BASE10_EVAL3(X) X

#define _U8H_FROM_BASE10(N,...)\
  _U8H_FROM_BASE10X_ ## __VA_OPT__(X(U8H_MUL(N,U8H_10),__VA_ARGS__) IGNORE) (N)
#define _U8H_FROM_BASE10X_(N) N
#define _U8H_FROM_BASE10X_X(N,D,...)\
  DEFER(_U8H_FROM_BASE10_I)()(DEFER(U8H_ADD)(N,U8H_ ## D) __VA_OPT__(,) __VA_ARGS__)
#define _U8H_FROM_BASE10_I() _U8H_FROM_BASE10
