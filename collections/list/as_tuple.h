#ifndef C23META_LIST_AS_TUPLE
#define C23META_LIST_AS_TUPLE

#define LIST_AS_TUPLE_VALUE(X) _LIST_AS_TUPLE_VALUE(CAT(_LISTVARNAME, __COUNTER__),X)
#define _LIST_AS_TUPLE_VALUE(VARNAME,X) ({LIST_AS_TUPLE(VARNAME,X); VARNAME;})

#define LIST_AS_TUPLE(VARNAME,X) _LIST_AS_TUPLE_C(VARNAME,X)
#define _LIST_AS_TUPLE_C(VARNAME,X) _LIST_AS_TUPLE_EVAL(_LIST_AS_TUPLE(VARNAME,U32_PRINT(LIST_LENGTH(X)),LIST_AS_ARGS(X)))
#define _LIST_AS_TUPLE_EVAL(X) X
#define _LIST_AS_TUPLE(VARNAME,LEN,ARGS) DEFER(CAT(_LIST_AS_TUPLE_X,LEN))(VARNAME COMMA_IF ARGS UNWRAP ARGS)

#ifdef __GNUC__
#define _LIST_AS_TUPLE_X0(VARNAME)\
  struct TUPNAME { } VARNAME;
#else
#define _LIST_AS_TUPLE_X0(VARNAME)\
  struct TUPNAME { char _dummy; } VARNAME;
#endif

#define _LIST_AS_TUPLE_X1(VARNAME, X1)\
  struct { typeof(X1) a1; } VARNAME; VARNAME.a1 = X1;

#define _LIST_AS_TUPLE_X2(VARNAME, X1, X2)\
  struct {\
     typeof(X1) a1;\
     typeof(X2) a2;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;

#define _LIST_AS_TUPLE_X3(VARNAME, X1, X2, X3)\
  struct {\
     typeof(X1) a1;\
     typeof(X2) a2;\
     typeof(X3) a3;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;\
  VARNAME.a3 = X3;

#define _LIST_AS_TUPLE_X4(VARNAME, X1, X2, X3, X4)\
  struct {\
    typeof(X1) a1;\
    typeof(X2) a2;\
    typeof(X3) a3;\
    typeof(X4) a4;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;\
  VARNAME.a3 = X3;\
  VARNAME.a4 = X4;

#define _LIST_AS_TUPLE_X5(VARNAME, X1, X2, X3, X4, X5)\
  struct {\
    typeof(X1) a1;\
    typeof(X2) a2;\
    typeof(X3) a3;\
    typeof(X4) a4;\
    typeof(X5) a5;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;\
  VARNAME.a3 = X3;\
  VARNAME.a4 = X4;\
  VARNAME.a5 = X5;

#define _LIST_AS_TUPLE_X6(VARNAME, X1, X2, X3, X4, X5, X6)\
  struct {\
    typeof(X1) a1;\
    typeof(X2) a2;\
    typeof(X3) a3;\
    typeof(X4) a4;\
    typeof(X5) a5;\
    typeof(X6) a6;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;\
  VARNAME.a3 = X3;\
  VARNAME.a4 = X4;\
  VARNAME.a5 = X5;\
  VARNAME.a6 = X6;

#define _LIST_AS_TUPLE_X7(VARNAME, X1, X2, X3, X4, X5, X6, X7)\
  struct {\
    typeof(X1) a1;\
    typeof(X2) a2;\
    typeof(X3) a3;\
    typeof(X4) a4;\
    typeof(X5) a5;\
    typeof(X6) a6;\
    typeof(X7) a7;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;\
  VARNAME.a3 = X3;\
  VARNAME.a4 = X4;\
  VARNAME.a5 = X5;\
  VARNAME.a6 = X6;\
  VARNAME.a7 = X7;

#define _LIST_AS_TUPLE_X8(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8)\
  struct {\
    typeof(X1) a1;\
    typeof(X2) a2;\
    typeof(X3) a3;\
    typeof(X4) a4;\
    typeof(X5) a5;\
    typeof(X6) a6;\
    typeof(X7) a7;\
    typeof(X8) a8;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;\
  VARNAME.a3 = X3;\
  VARNAME.a4 = X4;\
  VARNAME.a5 = X5;\
  VARNAME.a6 = X6;\
  VARNAME.a7 = X7;\
  VARNAME.a8 = X8;

#define _LIST_AS_TUPLE_X9(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9)\
  struct {\
    typeof(X1) a1;\
    typeof(X2) a2;\
    typeof(X3) a3;\
    typeof(X4) a4;\
    typeof(X5) a5;\
    typeof(X6) a6;\
    typeof(X7) a7;\
    typeof(X8) a8;\
    typeof(X9) a9;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;\
  VARNAME.a3 = X3;\
  VARNAME.a4 = X4;\
  VARNAME.a5 = X5;\
  VARNAME.a6 = X6;\
  VARNAME.a7 = X7;\
  VARNAME.a8 = X8;\
  VARNAME.a9 = X9;

#define _LIST_AS_TUPLE_X10(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10)\
  struct {\
    typeof(X1) a1;\
    typeof(X2) a2;\
    typeof(X3) a3;\
    typeof(X4) a4;\
    typeof(X5) a5;\
    typeof(X6) a6;\
    typeof(X7) a7;\
    typeof(X8) a8;\
    typeof(X9) a9;\
    typeof(X10) a10;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;\
  VARNAME.a3 = X3;\
  VARNAME.a4 = X4;\
  VARNAME.a5 = X5;\
  VARNAME.a6 = X6;\
  VARNAME.a7 = X7;\
  VARNAME.a8 = X8;\
  VARNAME.a9 = X9;\
  VARNAME.a10 = X10;

#define _LIST_AS_TUPLE_X11(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11)\
  struct {\
    typeof(X1) a1;\
    typeof(X2) a2;\
    typeof(X3) a3;\
    typeof(X4) a4;\
    typeof(X5) a5;\
    typeof(X6) a6;\
    typeof(X7) a7;\
    typeof(X8) a8;\
    typeof(X9) a9;\
    typeof(X10) a10;\
    typeof(X11) a11;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;\
  VARNAME.a3 = X3;\
  VARNAME.a4 = X4;\
  VARNAME.a5 = X5;\
  VARNAME.a6 = X6;\
  VARNAME.a7 = X7;\
  VARNAME.a8 = X8;\
  VARNAME.a9 = X9;\
  VARNAME.a10 = X10;\
  VARNAME.a11 = X11;

#define _LIST_AS_TUPLE_X12(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11, X12)\
  struct {\
    typeof(X1) a1;\
    typeof(X2) a2;\
    typeof(X3) a3;\
    typeof(X4) a4;\
    typeof(X5) a5;\
    typeof(X6) a6;\
    typeof(X7) a7;\
    typeof(X8) a8;\
    typeof(X9) a9;\
    typeof(X10) a10;\
    typeof(X11) a11;\
    typeof(X12) a12;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;\
  VARNAME.a3 = X3;\
  VARNAME.a4 = X4;\
  VARNAME.a5 = X5;\
  VARNAME.a6 = X6;\
  VARNAME.a7 = X7;\
  VARNAME.a8 = X8;\
  VARNAME.a9 = X9;\
  VARNAME.a10 = X10;\
  VARNAME.a11 = X11;\
  VARNAME.a12 = X12;

#define _LIST_AS_TUPLE_X13(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11, X12, X13)\
  struct {\
    typeof(X1) a1;\
    typeof(X2) a2;\
    typeof(X3) a3;\
    typeof(X4) a4;\
    typeof(X5) a5;\
    typeof(X6) a6;\
    typeof(X7) a7;\
    typeof(X8) a8;\
    typeof(X9) a9;\
    typeof(X10) a10;\
    typeof(X11) a11;\
    typeof(X12) a12;\
    typeof(X13) a13;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;\
  VARNAME.a3 = X3;\
  VARNAME.a4 = X4;\
  VARNAME.a5 = X5;\
  VARNAME.a6 = X6;\
  VARNAME.a7 = X7;\
  VARNAME.a8 = X8;\
  VARNAME.a9 = X9;\
  VARNAME.a10 = X10;\
  VARNAME.a11 = X11;\
  VARNAME.a12 = X12;\
  VARNAME.a13 = X13;

#define _LIST_AS_TUPLE_X14(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11, X12, X13, X14)\
  struct {\
    typeof(X1) a1;\
    typeof(X2) a2;\
    typeof(X3) a3;\
    typeof(X4) a4;\
    typeof(X5) a5;\
    typeof(X6) a6;\
    typeof(X7) a7;\
    typeof(X8) a8;\
    typeof(X9) a9;\
    typeof(X10) a10;\
    typeof(X11) a11;\
    typeof(X12) a12;\
    typeof(X13) a13;\
    typeof(X14) a14;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;\
  VARNAME.a3 = X3;\
  VARNAME.a4 = X4;\
  VARNAME.a5 = X5;\
  VARNAME.a6 = X6;\
  VARNAME.a7 = X7;\
  VARNAME.a8 = X8;\
  VARNAME.a9 = X9;\
  VARNAME.a10 = X10;\
  VARNAME.a11 = X11;\
  VARNAME.a12 = X12;\
  VARNAME.a13 = X13;\
  VARNAME.a14 = X14;

#define _LIST_AS_TUPLE_X15(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11, X12, X13, X14, X15)\
  struct {\
    typeof(X1) a1;\
    typeof(X2) a2;\
    typeof(X3) a3;\
    typeof(X4) a4;\
    typeof(X5) a5;\
    typeof(X6) a6;\
    typeof(X7) a7;\
    typeof(X8) a8;\
    typeof(X9) a9;\
    typeof(X10) a10;\
    typeof(X11) a11;\
    typeof(X12) a12;\
    typeof(X13) a13;\
    typeof(X14) a14;\
    typeof(X15) a15;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;\
  VARNAME.a3 = X3;\
  VARNAME.a4 = X4;\
  VARNAME.a5 = X5;\
  VARNAME.a6 = X6;\
  VARNAME.a7 = X7;\
  VARNAME.a8 = X8;\
  VARNAME.a9 = X9;\
  VARNAME.a10 = X10;\
  VARNAME.a11 = X11;\
  VARNAME.a12 = X12;\
  VARNAME.a13 = X13;\
  VARNAME.a14 = X14;\
  VARNAME.a15 = X15;

#define _LIST_AS_TUPLE_X16(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11, X12, X13, X14, X15, X16)\
  struct {\
    typeof(X1) a1;\
    typeof(X2) a2;\
    typeof(X3) a3;\
    typeof(X4) a4;\
    typeof(X5) a5;\
    typeof(X6) a6;\
    typeof(X7) a7;\
    typeof(X8) a8;\
    typeof(X9) a9;\
    typeof(X10) a10;\
    typeof(X11) a11;\
    typeof(X12) a12;\
    typeof(X13) a13;\
    typeof(X14) a14;\
    typeof(X15) a15;\
    typeof(X16) a16;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;\
  VARNAME.a3 = X3;\
  VARNAME.a4 = X4;\
  VARNAME.a5 = X5;\
  VARNAME.a6 = X6;\
  VARNAME.a7 = X7;\
  VARNAME.a8 = X8;\
  VARNAME.a9 = X9;\
  VARNAME.a10 = X10;\
  VARNAME.a11 = X11;\
  VARNAME.a12 = X12;\
  VARNAME.a13 = X13;\
  VARNAME.a14 = X14;\
  VARNAME.a15 = X15;\
  VARNAME.a16 = X16;

#endif