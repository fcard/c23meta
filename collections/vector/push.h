#ifndef C23META_VECTOR_PUSH
#define C23META_VECTOR_PUSH

#define VECTOR32_PUSH(X,Y) _VECTOR32_PUSH_C(X,Y)
#define _VECTOR32_PUSH_C(X,Y) _VECTOR32_PUSH_X(CAT(_VECTOR32_PUSH_X,VECTOR32_LENGTH(X)),Y,VECTOR32_UNWRAP(X))
#define _VECTOR32_PUSH_X(F,...) F(__VA_ARGS__)

#define _VECTOR32_PUSH_X0(Y,...)\
  (1,(Y))

#define _VECTOR32_PUSH_X1(Y,X0)\
  (2,(X0,Y))

#define _VECTOR32_PUSH_X2(Y,X0,X1)\
  (3,(X0,X1,Y))

#define _VECTOR32_PUSH_X3(Y,X0,X1,X2)\
  (4,(X0,X1,X2,Y))

#define _VECTOR32_PUSH_X4(Y,X0,X1,X2,X3)\
  (5,(X0,X1,X2,X3,Y))

#define _VECTOR32_PUSH_X5(Y,X0,X1,X2,X3,X4)\
  (6,(X0,X1,X2,X3,X4,Y))

#define _VECTOR32_PUSH_X6(Y,X0,X1,X2,X3,X4,X5)\
  (7,(X0,X1,X2,X3,X4,X5,Y))

#define _VECTOR32_PUSH_X7(Y,X0,X1,X2,X3,X4,X5,X6)\
  (8,(X0,X1,X2,X3,X4,X5,X6,Y))

#define _VECTOR32_PUSH_X8(Y,X0,X1,X2,X3,X4,X5,X6,X7)\
  (9,(X0,X1,X2,X3,X4,X5,X6,X7,Y))

#define _VECTOR32_PUSH_X9(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8)\
  (10,(X0,X1,X2,X3,X4,X5,X6,X7,X8,Y))

#define _VECTOR32_PUSH_X10(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9)\
  (11,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,Y))

#define _VECTOR32_PUSH_X11(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10)\
  (12,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,Y))

#define _VECTOR32_PUSH_X12(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11)\
  (13,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,Y))

#define _VECTOR32_PUSH_X13(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12)\
  (14,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,Y))

#define _VECTOR32_PUSH_X14(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13)\
  (15,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,Y))

#define _VECTOR32_PUSH_X15(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14)\
  (16,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,Y))

#define _VECTOR32_PUSH_X16(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15)\
  (17,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,Y))

#define _VECTOR32_PUSH_X17(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16)\
  (18,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,Y))

#define _VECTOR32_PUSH_X18(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17)\
  (19,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,Y))

#define _VECTOR32_PUSH_X19(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18)\
  (20,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,Y))

#define _VECTOR32_PUSH_X20(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19)\
  (21,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,Y))

#define _VECTOR32_PUSH_X21(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20)\
  (22,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,Y))

#define _VECTOR32_PUSH_X22(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21)\
  (23,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,Y))

#define _VECTOR32_PUSH_X23(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22)\
  (24,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,Y))

#define _VECTOR32_PUSH_X24(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23)\
  (25,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,Y))

#define _VECTOR32_PUSH_X25(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24)\
  (26,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,Y))

#define _VECTOR32_PUSH_X26(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25)\
  (27,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,Y))

#define _VECTOR32_PUSH_X27(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26)\
  (28,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,Y))

#define _VECTOR32_PUSH_X28(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27)\
  (29,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,Y))

#define _VECTOR32_PUSH_X29(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28)\
  (30,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,Y))

#define _VECTOR32_PUSH_X30(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29)\
  (31,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,Y))

#define _VECTOR32_PUSH_X31(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,X30)\
  (32,(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,X30,Y))

#define _VECTOR32_PUSH_X32(Y,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,X30,X31)\
  _Pragma("error \"Vector32 full\"")

#endif