#define U32P(N)  U32P_EVAL(U32_FROM_BASE10 U32_PARSE(N))
#define U32P_EVAL(X) X

#define U32_PARSE(N) _U32_PARSE_EVAL((_U32_PARSE(N)))
#define _U32_PARSE(N) DEFER(U32_PARSE_X)(U32_PARSE_ ## N)
#define U32_PARSE_0 0,
#define U32_PARSE_1 1,
#define U32_PARSE_2 2,
#define U32_PARSE_3 3,
#define U32_PARSE_4 4,
#define U32_PARSE_5 5,
#define U32_PARSE_6 6,
#define U32_PARSE_7 7,
#define U32_PARSE_8 8,
#define U32_PARSE_9 9,

#define U32_PARSE_X(N,...) N __VA_OPT__(,) U32_PARSE_Y ## __VA_OPT__(Y(__VA_ARGS__) IGNORE) ()
#define U32_PARSE_Y()
#define U32_PARSE_YY(N) OBSTRUCT(U32_PARSE_I)()(N)

#define U32_PARSE_I() _U32_PARSE

#define _U32_PARSE_EVAL(X) _U32_PARSE_EVAL1(_U32_PARSE_EVAL1(_U32_PARSE_EVAL1(_U32_PARSE_EVAL1(X))))
#define _U32_PARSE_EVAL1(X) _U32_PARSE_EVAL2(_U32_PARSE_EVAL2(_U32_PARSE_EVAL2(_U32_PARSE_EVAL2(X))))
#define _U32_PARSE_EVAL2(X) _U32_PARSE_EVAL3(_U32_PARSE_EVAL3(_U32_PARSE_EVAL3(_U32_PARSE_EVAL3(X))))
#define _U32_PARSE_EVAL3(X) X


#define U32_FROM_BASE10(...) _U32_FROM_BASE10_EVAL(_U32_FROM_BASE10 (U32_0 __VA_OPT__(,) __VA_ARGS__))
#define _U32_FROM_BASE10_EVAL(X) _U32_FROM_BASE10_EVAL1(_U32_FROM_BASE10_EVAL1(_U32_FROM_BASE10_EVAL1(X)))
#define _U32_FROM_BASE10_EVAL1(X) _U32_FROM_BASE10_EVAL2(_U32_FROM_BASE10_EVAL2(_U32_FROM_BASE10_EVAL2(X)))
#define _U32_FROM_BASE10_EVAL2(X) _U32_FROM_BASE10_EVAL3(_U32_FROM_BASE10_EVAL3(_U32_FROM_BASE10_EVAL3(X)))
#define _U32_FROM_BASE10_EVAL3(X) X

#define _U32_FROM_BASE10(N,...)\
  _U32_FROM_BASE10X_ ## __VA_OPT__(X(U32_MUL(N,U32_10),__VA_ARGS__) IGNORE) (N)
#define _U32_FROM_BASE10X_(N) N
#define _U32_FROM_BASE10X_X(N,D,...)\
  OBSTRUCT(_U32_FROM_BASE10_I)()(DEFER(U32_ADD)(N,U32_ ## D) __VA_OPT__(,) __VA_ARGS__)
#define _U32_FROM_BASE10_I() _U32_FROM_BASE10