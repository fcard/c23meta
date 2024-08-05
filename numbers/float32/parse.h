#define FP32P(N)  FP32P_EVAL(FP32_FROM_BASE10 FP32_PARSE(N))
#define FP32P_EVAL(X) X

#define FP32_PARSE(N) _FP32_PARSE_EVAL((_FP32_PARSE(N)))
#define _FP32_PARSE(N) DEFER(FP32_PARSE_X)(FP32_PARSE_ ## N)
#define FP32_PARSE_0 0,
#define FP32_PARSE_1 1,
#define FP32_PARSE_2 2,
#define FP32_PARSE_3 3,
#define FP32_PARSE_4 4,
#define FP32_PARSE_5 5,
#define FP32_PARSE_6 6,
#define FP32_PARSE_7 7,
#define FP32_PARSE_8 8,
#define FP32_PARSE_9 9,

#define FP32_PARSE_X(N,...) N __VA_OPT__(,) FP32_PARSE_Y ## __VA_OPT__(Y(__VA_ARGS__) IGNORE) ()
#define FP32_PARSE_Y()
#define FP32_PARSE_YY(N) DEFER(FP32_PARSE_I)()(N)

#define FP32_PARSE_I() _FP32_PARSE

#define _FP32_PARSE_EVAL(X) _FP32_PARSE_EVAL1(_FP32_PARSE_EVAL1(_FP32_PARSE_EVAL1(_FP32_PARSE_EVAL1(X))))
#define _FP32_PARSE_EVAL1(X) _FP32_PARSE_EVAL2(_FP32_PARSE_EVAL2(_FP32_PARSE_EVAL2(_FP32_PARSE_EVAL2(X))))
#define _FP32_PARSE_EVAL2(X) _FP32_PARSE_EVAL3(_FP32_PARSE_EVAL3(_FP32_PARSE_EVAL3(_FP32_PARSE_EVAL3(X))))
#define _FP32_PARSE_EVAL3(X) X


#define FP32_FROM_BASE10(...) _FP32_FROM_BASE10_EVAL(_FP32_FROM_BASE10 (FP32_0 __VA_OPT__(,) __VA_ARGS__))
#define _FP32_FROM_BASE10_EVAL(X) _FP32_FROM_BASE10_EVAL1(_FP32_FROM_BASE10_EVAL1(_FP32_FROM_BASE10_EVAL1(X)))
#define _FP32_FROM_BASE10_EVAL1(X) _FP32_FROM_BASE10_EVAL2(_FP32_FROM_BASE10_EVAL2(_FP32_FROM_BASE10_EVAL2(X)))
#define _FP32_FROM_BASE10_EVAL2(X) _FP32_FROM_BASE10_EVAL3(_FP32_FROM_BASE10_EVAL3(_FP32_FROM_BASE10_EVAL3(X)))
#define _FP32_FROM_BASE10_EVAL3(X) X

#define _FP32_FROM_BASE10(N,...)\
  _FP32_FROM_BASE10X_ ## __VA_OPT__(X(FP32_MUL(N,FP32_10),__VA_ARGS__) IGNORE) (N)
#define _FP32_FROM_BASE10X_(N) N
#define _FP32_FROM_BASE10X_X(N,D,...)\
  DEFER(_FP32_FROM_BASE10_I)()(DEFER(FP32_ADD)(N,FP32_ ## D) __VA_OPT__(,) __VA_ARGS__)
#define _FP32_FROM_BASE10_I() _FP32_FROM_BASE10
