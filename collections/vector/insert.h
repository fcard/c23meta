#ifndef C23META_VECTOR_INSERT
#define C23META_VECTOR_INSERT

#define VECTOR32_INSERT(X,E,N) _VECTOR32_INSERT_C(X,E,N)
#define _VECTOR32_INSERT_C(X,E,N) CAT(_VECTOR32_INSERT_X,DEC5_GT(N,VECTOR32_LENGTH(X)))(X,E,N)
#define _VECTOR32_INSERT_X1(X,E,N) OUT_OF_BOUNDS
#define _VECTOR32_INSERT_X0(X,E,N) _VECTOR32_INSERT(CAT(_VECTOR32_INSERT,N),VECTOR32_LENGTH(X),E,VECTOR32_UNWRAP(X))
#define _VECTOR32_INSERT(F,LEN,E,...) F(LEN,ID(E)__VA_OPT__(,)__VA_ARGS__)

#define _VECTOR32_INSERT0(LEN,E,...)\
  (DEC5_ADD(LEN,1),(ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT1(LEN,E,X0,...)\
  (DEC5_ADD(LEN,1),(X0,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT2(LEN,E,X0,X1,...)\
  (DEC5_ADD(LEN,1),(X0,X1,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT3(LEN,E,X0,X1,X2,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT4(LEN,E,X0,X1,X2,X3,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT5(LEN,E,X0,X1,X2,X3,X4,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT6(LEN,E,X0,X1,X2,X3,X4,X5,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT7(LEN,E,X0,X1,X2,X3,X4,X5,X6,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT8(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT9(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT10(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT11(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT12(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT13(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT14(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT15(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT16(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT17(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT18(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT19(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT20(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT21(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT22(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT23(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT24(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT25(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT26(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT27(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT28(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT29(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT30(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT31(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,X30,...)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,X30,ID(E)__VA_OPT__(,)__VA_ARGS__))

#define _VECTOR32_INSERT32(LEN,E,X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,X30,X31)\
  (DEC5_ADD(LEN,1),(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,X30,X31,E))

#endif