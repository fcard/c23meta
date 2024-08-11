#ifndef C23META_VECTOR_FOLDR
#define C23META_VECTOR_FOLDR

#define VECTOR32_FOLDR(F,X,...) _VECTOR32_FOLDR_C(F,X __VA_OPT__(,) __VA_ARGS__)
#define _VECTOR32_FOLDR_C(F,X,...)\
  _VECTOR32_FOLDR_X(\
    F,\
    _VECTOR32_FOLDR_REST(X __VA_OPT__(,)__VA_ARGS__),\
    _VECTOR32_FOLDR_INIT(X __VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_FOLDR_X(F,X,INIT)\
  _VECTOR32_FOLDR(\
    CAT(_VECTOR32_FOLDR,VECTOR32_LENGTH(X)),\
    F,\
    INIT,\
    VECTOR32_UNWRAP(X))

#define _VECTOR32_FOLDR(F,G,INIT,...) F(G,INIT __VA_OPT__(,) __VA_ARGS__)

#define _VECTOR32_FOLDR_INIT(X,...) _VECTOR32_FOLDR_INIT_X ## __VA_OPT__(1(__VA_ARGS__) IGNORE) (X)
#define _VECTOR32_FOLDR_INIT_X(X) VECTOR32_FIRST(X)
#define _VECTOR32_FOLDR_INIT_X1(INIT) INIT

#define _VECTOR32_FOLDR_REST(X,...) _VECTOR32_FOLDR_REST_X ## __VA_OPT__(1) (X)
#define _VECTOR32_FOLDR_REST_X(X) VECTOR32_REST(X)
#define _VECTOR32_FOLDR_REST_X1(X) X

#define _VECTOR32_FOLDR0(F,INIT)\
  INIT

#define _VECTOR32_FOLDR1(F,INIT,X0)\
  F(X0,INIT)

#define _VECTOR32_FOLDR2(F,INIT,X0,X1)\
  F(X1,F(X0,INIT))

#define _VECTOR32_FOLDR3(F,INIT,X0,X1,X2)\
  F(X2,F(X1,F(X0,INIT)))

#define _VECTOR32_FOLDR4(F,INIT,X0,X1,X2,X3)\
  F(X3,F(X2,F(X1,F(X0,INIT))))

#define _VECTOR32_FOLDR5(F,INIT,X0,X1,X2,X3,X4)\
  F(X4,F(X3,F(X2,F(X1,F(X0,INIT)))))

#define _VECTOR32_FOLDR6(F,INIT,X0,X1,X2,X3,X4,X5)\
  F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT))))))

#define _VECTOR32_FOLDR7(F,INIT,X0,X1,X2,X3,X4,X5,X6)\
  F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT)))))))

#define _VECTOR32_FOLDR8(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7)\
  F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT))))))))

#define _VECTOR32_FOLDR9(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8)\
  F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT)))))))))

#define _VECTOR32_FOLDR10(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9)\
  F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT))))))))))

#define _VECTOR32_FOLDR11(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10)\
  F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT)))))))))))

#define _VECTOR32_FOLDR12(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11)\
  F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT))))))))))))

#define _VECTOR32_FOLDR13(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12)\
  F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT)))))))))))))

#define _VECTOR32_FOLDR14(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13)\
  F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT))))))))))))))

#define _VECTOR32_FOLDR15(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14)\
  F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT)))))))))))))))

#define _VECTOR32_FOLDR16(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15)\
  F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT))))))))))))))))

#define _VECTOR32_FOLDR17(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16)\
  F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT)))))))))))))))))

#define _VECTOR32_FOLDR18(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17)\
  F(X17,F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT))))))))))))))))))

#define _VECTOR32_FOLDR19(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18)\
  F(X18,F(X17,F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT)))))))))))))))))))

#define _VECTOR32_FOLDR20(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19)\
  F(X19,F(X18,F(X17,F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT))))))))))))))))))))

#define _VECTOR32_FOLDR21(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20)\
  F(X20,F(X19,F(X18,F(X17,F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT)))))))))))))))))))))

#define _VECTOR32_FOLDR22(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21)\
  F(X21,F(X20,F(X19,F(X18,F(X17,F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT))))))))))))))))))))))

#define _VECTOR32_FOLDR23(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22)\
  F(X22,F(X21,F(X20,F(X19,F(X18,F(X17,F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT)))))))))))))))))))))))

#define _VECTOR32_FOLDR24(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23)\
  F(X23,F(X22,F(X21,F(X20,F(X19,F(X18,F(X17,F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT))))))))))))))))))))))))

#define _VECTOR32_FOLDR25(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24)\
  F(X24,F(X23,F(X22,F(X21,F(X20,F(X19,F(X18,F(X17,F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT)))))))))))))))))))))))))

#define _VECTOR32_FOLDR26(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25)\
  F(X25,F(X24,F(X23,F(X22,F(X21,F(X20,F(X19,F(X18,F(X17,F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT))))))))))))))))))))))))))

#define _VECTOR32_FOLDR27(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26)\
  F(X26,F(X25,F(X24,F(X23,F(X22,F(X21,F(X20,F(X19,F(X18,F(X17,F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT)))))))))))))))))))))))))))

#define _VECTOR32_FOLDR28(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27)\
  F(X27,F(X26,F(X25,F(X24,F(X23,F(X22,F(X21,F(X20,F(X19,F(X18,F(X17,F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT))))))))))))))))))))))))))))

#define _VECTOR32_FOLDR29(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28)\
  F(X28,F(X27,F(X26,F(X25,F(X24,F(X23,F(X22,F(X21,F(X20,F(X19,F(X18,F(X17,F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT)))))))))))))))))))))))))))))

#define _VECTOR32_FOLDR30(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29)\
  F(X29,F(X28,F(X27,F(X26,F(X25,F(X24,F(X23,F(X22,F(X21,F(X20,F(X19,F(X18,F(X17,F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT))))))))))))))))))))))))))))))

#define _VECTOR32_FOLDR31(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,X30)\
  F(X30,F(X29,F(X28,F(X27,F(X26,F(X25,F(X24,F(X23,F(X22,F(X21,F(X20,F(X19,F(X18,F(X17,F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT)))))))))))))))))))))))))))))))

#define _VECTOR32_FOLDR32(F,INIT,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,X30,X31)\
  F(X31,F(X30,F(X29,F(X28,F(X27,F(X26,F(X25,F(X24,F(X23,F(X22,F(X21,F(X20,F(X19,F(X18,F(X17,F(X16,F(X15,F(X14,F(X13,F(X12,F(X11,F(X10,F(X9,F(X8,F(X7,F(X6,F(X5,F(X4,F(X3,F(X2,F(X1,F(X0,INIT))))))))))))))))))))))))))))))))

#endif