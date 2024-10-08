#ifndef C23META_VECTOR_CSUM
#define C23META_VECTOR_CSUM

#define VECTOR32_CSUM(X) _VECTOR32_CSUM_C(X)
#define _VECTOR32_CSUM_C(X) _VECTOR32_CSUM(CAT(_VECTOR32_CSUM_X,VECTOR32_LENGTH(X)),VECTOR32_UNWRAP(X))
#define _VECTOR32_CSUM(F,...) F(__VA_ARGS__)

#define _VECTOR32_CSUM_X0()\
  0

#define _VECTOR32_CSUM_X1(X0)\
  (X0)

#define _VECTOR32_CSUM_X2(X0,X1)\
  ((X0)+(X1))

#define _VECTOR32_CSUM_X3(X0,X1,X2)\
  ((X0)+(X1)+(X2))

#define _VECTOR32_CSUM_X4(X0,X1,X2,X3)\
  ((X0)+(X1)+(X2)+(X3))

#define _VECTOR32_CSUM_X5(X0,X1,X2,X3,X4)\
  ((X0)+(X1)+(X2)+(X3)+(X4))

#define _VECTOR32_CSUM_X6(X0,X1,X2,X3,X4,X5)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5))

#define _VECTOR32_CSUM_X7(X0,X1,X2,X3,X4,X5,X6)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6))

#define _VECTOR32_CSUM_X8(X0,X1,X2,X3,X4,X5,X6,X7)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7))

#define _VECTOR32_CSUM_X9(X0,X1,X2,X3,X4,X5,X6,X7,X8)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8))

#define _VECTOR32_CSUM_X10(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9))

#define _VECTOR32_CSUM_X11(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10))

#define _VECTOR32_CSUM_X12(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11))

#define _VECTOR32_CSUM_X13(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12))

#define _VECTOR32_CSUM_X14(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13))

#define _VECTOR32_CSUM_X15(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14))

#define _VECTOR32_CSUM_X16(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15))

#define _VECTOR32_CSUM_X17(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16))

#define _VECTOR32_CSUM_X18(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16)+(X17))

#define _VECTOR32_CSUM_X19(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16)+(X17)+(X18))

#define _VECTOR32_CSUM_X20(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16)+(X17)+(X18)+(X19))

#define _VECTOR32_CSUM_X21(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16)+(X17)+(X18)+(X19)+(X20))

#define _VECTOR32_CSUM_X22(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16)+(X17)+(X18)+(X19)+(X20)+(X21))

#define _VECTOR32_CSUM_X23(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16)+(X17)+(X18)+(X19)+(X20)+(X21)+(X22))

#define _VECTOR32_CSUM_X24(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16)+(X17)+(X18)+(X19)+(X20)+(X21)+(X22)+(X23))

#define _VECTOR32_CSUM_X25(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16)+(X17)+(X18)+(X19)+(X20)+(X21)+(X22)+(X23)+(X24))

#define _VECTOR32_CSUM_X26(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16)+(X17)+(X18)+(X19)+(X20)+(X21)+(X22)+(X23)+(X24)+(X25))

#define _VECTOR32_CSUM_X27(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16)+(X17)+(X18)+(X19)+(X20)+(X21)+(X22)+(X23)+(X24)+(X25)+(X26))

#define _VECTOR32_CSUM_X28(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16)+(X17)+(X18)+(X19)+(X20)+(X21)+(X22)+(X23)+(X24)+(X25)+(X26)+(X27))

#define _VECTOR32_CSUM_X29(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16)+(X17)+(X18)+(X19)+(X20)+(X21)+(X22)+(X23)+(X24)+(X25)+(X26)+(X27)+(X28))

#define _VECTOR32_CSUM_X30(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16)+(X17)+(X18)+(X19)+(X20)+(X21)+(X22)+(X23)+(X24)+(X25)+(X26)+(X27)+(X28)+(X29))

#define _VECTOR32_CSUM_X31(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,X30)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16)+(X17)+(X18)+(X19)+(X20)+(X21)+(X22)+(X23)+(X24)+(X25)+(X26)+(X27)+(X28)+(X29)+(X30))

#define _VECTOR32_CSUM_X32(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,X30,X31)\
  ((X0)+(X1)+(X2)+(X3)+(X4)+(X5)+(X6)+(X7)+(X8)+(X9)+(X10)+(X11)+(X12)+(X13)+(X14)+(X15)+(X16)+(X17)+(X18)+(X19)+(X20)+(X21)+(X22)+(X23)+(X24)+(X25)+(X26)+(X27)+(X28)+(X29)+(X30)+(X31))

#endif