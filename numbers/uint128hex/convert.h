#ifndef C23META_U128H_CONVERT
#define C23META_U128H_CONVERT
#include <stdint.h>

#define U128H_CONVERT(X) _U128H_CONVERT X
#define _U128H_CONVERT(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (((__uint128_t)0x ## A0 << 0) + ((__uint128_t)0x ## A1 << 4) + ((__uint128_t)0x ## A2 << 8) + ((__uint128_t)0x ## A3 << 12) +\
   ((__uint128_t)0x ## A4 << 16) + ((__uint128_t)0x ## A5 << 20) + ((__uint128_t)0x ## A6 << 24) + ((__uint128_t)0x ## A7 << 28) +\
   ((__uint128_t)0x ## A8 << 32) + ((__uint128_t)0x ## A9 << 36) + ((__uint128_t)0x ## A10 << 40) + ((__uint128_t)0x ## A11 << 44) +\
   ((__uint128_t)0x ## A12 << 48) + ((__uint128_t)0x ## A13 << 52) + ((__uint128_t)0x ## A14 << 56) + ((__uint128_t)0x ## A15 << 60) +\
   ((__uint128_t)0x ## A16 << 64) + ((__uint128_t)0x ## A17 << 68) + ((__uint128_t)0x ## A18 << 72) + ((__uint128_t)0x ## A19 << 76) +\
   ((__uint128_t)0x ## A20 << 80) + ((__uint128_t)0x ## A21 << 84) + ((__uint128_t)0x ## A22 << 88) + ((__uint128_t)0x ## A23 << 92) +\
   ((__uint128_t)0x ## A24 << 96) + ((__uint128_t)0x ## A25 << 100) + ((__uint128_t)0x ## A26 << 104) + ((__uint128_t)0x ## A27 << 108) +\
   ((__uint128_t)0x ## A28 << 112) + ((__uint128_t)0x ## A29 << 116) + ((__uint128_t)0x ## A30 << 120) + ((__uint128_t)0x ## A31 << 124))
#endif