#ifndef C23META_VECTOR_NTH
#define C23META_VECTOR_NTH

#define VECTOR32_NTH(X,N) _VECTOR32_NTH_EVAL(CAT(_VECTOR32_NTH_X,N) VECTOR32_VALUES(X))
#define _VECTOR32_NTH_EVAL(X) X
#define _VECTOR32_NTH_X0(X0,...) X0
#define _VECTOR32_NTH_X1(X0,X1,...) X1
#define _VECTOR32_NTH_X2(X0,X1,X2,...) X2
#define _VECTOR32_NTH_X3(X0,X1,X2,X3,...) X3
#define _VECTOR32_NTH_X4(X0,X1,X2,X3,X4,...) X4
#define _VECTOR32_NTH_X5(X0,X1,X2,X3,X4,X5,...) X5
#define _VECTOR32_NTH_X6(X0,X1,X2,X3,X4,X5,X6,...) X6
#define _VECTOR32_NTH_X7(X0,X1,X2,X3,X4,X5,X6,X7,...) X7
#define _VECTOR32_NTH_X8(X0,X1,X2,X3,X4,X5,X6,X7,X8,...) X8
#define _VECTOR32_NTH_X9(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,...) X9
#define _VECTOR32_NTH_X10(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,...) X10
#define _VECTOR32_NTH_X11(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,...) X11
#define _VECTOR32_NTH_X12(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,...) X12
#define _VECTOR32_NTH_X13(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,...) X13
#define _VECTOR32_NTH_X14(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,...) X14
#define _VECTOR32_NTH_X15(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,...) X15
#define _VECTOR32_NTH_X16(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,...) X16
#define _VECTOR32_NTH_X17(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,...) X17
#define _VECTOR32_NTH_X18(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,...) X18
#define _VECTOR32_NTH_X19(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,...) X19
#define _VECTOR32_NTH_X20(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,...) X20
#define _VECTOR32_NTH_X21(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,...) X21
#define _VECTOR32_NTH_X22(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,...) X22
#define _VECTOR32_NTH_X23(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,...) X23
#define _VECTOR32_NTH_X24(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,...) X24
#define _VECTOR32_NTH_X25(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,...) X25
#define _VECTOR32_NTH_X26(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,...) X26
#define _VECTOR32_NTH_X27(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,...) X27
#define _VECTOR32_NTH_X28(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,...) X28
#define _VECTOR32_NTH_X29(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,...) X29
#define _VECTOR32_NTH_X30(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,X30,...) X30
#define _VECTOR32_NTH_X31(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,X30,X31) X31
#endif