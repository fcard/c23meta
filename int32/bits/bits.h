#ifndef C23META_I32_BITSB
#define C23META_I32_BITSB

#include "leading_zeroes.h"
#include "trailing_zeroes.h"

#define I32_BIT(X,N) _I32_BIT_EVAL(DEFER(I32_BIT ## N) X)
#define _I32_BIT_EVAL(X) X
#define I32_BIT0(A0,...) A0
#define I32_BIT1(A0,A1,...) A1
#define I32_BIT2(A0,A1,A2,...) A2
#define I32_BIT3(A0,A1,A2,A3,...) A3
#define I32_BIT4(A0,A1,A2,A3,A4,...) A4
#define I32_BIT5(A0,A1,A2,A3,A4,A5,...) A5
#define I32_BIT6(A0,A1,A2,A3,A4,A5,A6,...) A6
#define I32_BIT7(A0,A1,A2,A3,A4,A5,A6,A7,...) A7
#define I32_BIT8(A0,A1,A2,A3,A4,A5,A6,A7,A8,...) A8
#define I32_BIT9(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,...) A9
#define I32_BIT10(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,...) A10
#define I32_BIT11(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,...) A11
#define I32_BIT12(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,...) A12
#define I32_BIT13(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,...) A13
#define I32_BIT14(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,...) A14
#define I32_BIT15(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,...) A15
#define I32_BIT16(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,...) A16
#define I32_BIT17(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,...) A17
#define I32_BIT18(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,...) A18
#define I32_BIT19(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,...) A19
#define I32_BIT20(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,...) A20
#define I32_BIT21(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,...) A21
#define I32_BIT22(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,...) A22
#define I32_BIT23(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,...) A23
#define I32_BIT24(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,...) A24
#define I32_BIT25(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,...) A25
#define I32_BIT26(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,...) A26
#define I32_BIT27(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,...) A27
#define I32_BIT28(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,...) A28
#define I32_BIT29(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,...) A29
#define I32_BIT30(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,...) A30
#define I32_BIT31(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31) A31

#endif