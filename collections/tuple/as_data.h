#ifndef C23META_TUPLE_AS_DATA
#define C23META_TUPLE_AS_DATA

#define TUPLE_AS_DATA(VARNAME,X) _TUPLE_AS_DATA_C(VARNAME, X)
#define _TUPLE_AS_DATA_C(VARNAME,X) _TUPLE_AS_DATA_EVAL(_TUPLE_AS_DATA(VARNAME,U32H_PRINT(TUPLE_LENGTH(X)),X))
#define _TUPLE_AS_DATA_EVAL(X) X
#define _TUPLE_AS_DATA(VARNAME,LEN,ARGS) DEFER(CAT(_TUPLE_AS_DATA_X,LEN))(VARNAME COMMA_IF ARGS UNWRAP ARGS)

#ifdef __GNUC__
#define _TUPLE_AS_DATA_X0(VARNAME)\
  struct TUPNAME { } VARNAME;
#else
#define _TUPLE_AS_DATA_X0(VARNAME)\
  struct TUPNAME { char _dummy; } VARNAME;
#endif

#define _TUPLE_AS_DATA_X1(VARNAME, X1)\
  struct { typeof(X1) a1; } VARNAME; VARNAME.a1 = X1;

#define _TUPLE_AS_DATA_X2(VARNAME, X1, X2)\
  struct {\
     typeof(X1) a1;\
     typeof(X2) a2;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;

#define _TUPLE_AS_DATA_X3(VARNAME, X1, X2, X3)\
  struct {\
     typeof(X1) a1;\
     typeof(X2) a2;\
     typeof(X3) a3;\
  } VARNAME;\
  VARNAME.a1 = X1;\
  VARNAME.a2 = X2;\
  VARNAME.a3 = X3;

#define _TUPLE_AS_DATA_X4(VARNAME, X1, X2, X3, X4)\
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

#define _TUPLE_AS_DATA_X5(VARNAME, X1, X2, X3, X4, X5)\
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

#define _TUPLE_AS_DATA_X6(VARNAME, X1, X2, X3, X4, X5, X6)\
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

#define _TUPLE_AS_DATA_X7(VARNAME, X1, X2, X3, X4, X5, X6, X7)\
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

#define _TUPLE_AS_DATA_X8(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8)\
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

#define _TUPLE_AS_DATA_X9(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9)\
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

#define _TUPLE_AS_DATA_X10(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10)\
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

#define _TUPLE_AS_DATA_X11(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11)\
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

#define _TUPLE_AS_DATA_X12(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11, X12)\
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

#define _TUPLE_AS_DATA_X13(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11, X12, X13)\
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

#define _TUPLE_AS_DATA_X14(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11, X12, X13, X14)\
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

#define _TUPLE_AS_DATA_X15(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11, X12, X13, X14, X15)\
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

#define _TUPLE_AS_DATA_X16(VARNAME, X1, X2, X3, X4, X5, X6, X7, X8, X9, X10, X11, X12, X13, X14, X15, X16)\
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