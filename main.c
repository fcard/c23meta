#include "numbers/numbers.h"


#include "collections/list/list.h"
#include "collections/tuple/tuple.h"
#include "collections/pair/pair.h"
#include "collections/vector/vector.h"
#include "collections/atom/atom.h"

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#ifdef ALL_DEBUG
#define NUMBER_DEBUG
#define NUMBER_SPECIAL_DEBUG
#define COLLECTION_DEBUG
#define COL_FLATTEN_DEBUG
#define COL_FOREACH_DEBUG
#define HEX_DEBUG
#define FP32_WITH_SIGN_DEBUG
#define FP32_TRUNC_NEGATIVE_DEBUG
#define FP32_POW_I_DEBUG
#define FP32_POW_DEBUG
#define FP32_EXP2_DEBUG
#define FP32_LOG2_DEBUG
#define FP32_ADD_SIGN_DEBUG
#define SIGNED_HEX_DEBUG
#define FP32H_DEBUG
#define FP32H_EXTRA_DEBUG
#define ATOM_DEBUG
#define VECTOR_DEBUG
#define U8H_DEBUG
#endif

#ifdef NUMBER_DEBUG
#define UNSIGNED_DEBUG
#define SIGNED_DEBUG
#define FLOAT_DEBUG
#endif

#ifdef COLLECTION_DEBUG
#define LIST_DEBUG
#define TUPLE_DEBUG
#define PAIR_DEBUG
#endif

#ifdef ATOM_DEBUG
#define CHECK_ZERO0 ATOM_CHECK

#if ATOM_NEQ(CHECK_ZERO, 1)
#  pragma message "1 is not 0"
#else
#  pragma error "1 is 0"
#endif

#if !ATOM_NEQ(CHECK_ZERO, 0)
#  pragma message "0 is 0"
#else
#  pragma error "0 is not 0"
#endif

#if IS_ATOM(0)
#  pragma message "0 is an atom"
#else
#  pragma error "0 is not an atom"
#endif

#if !IS_ATOM((1,2,3))
#  pragma message "(1,2,3) is not an atom"
#else
#  pragma error "(1,2,3) is an atom"
#endif
#endif

bool eq_int(int x, int y) {
  return x == y;
}

bool eq_unsigned_int(unsigned int x, unsigned int y) {
  return x == y;
}

bool eq_uint64(uint64_t x, uint64_t y) {
  return x == y;
}

bool eq_float(float x, float y) {
  return fabs(x - y) < 1.0/16384.0;
}

bool eq_str(const char* x, const char* y) {
  return strcmp(x,y) == 0;
}

bool eq_char(char x, char y) {
  return x == y;
}

#define TEST_EQ(X,Y) _Generic((X),\
    int: eq_int,\
    unsigned int: eq_unsigned_int,\
    uint64_t: eq_uint64,\
    float: eq_float,\
    char*: eq_str\
  )((X),(Y))

#define TEST(P,X,Y) _TEST_C(P,X,Y)
#define _TEST_C(P,X,Y) {\
  printf(P,X);\
  bool _test_result = TEST_EQ(X,Y);\
  if (!_test_result) {\
    printf("error in above test! %s != %s", STRING(X), STRING(Y));\
    exit(1);\
  }\
}


#define TEST_MULTIPLE(P,X,Y) _TEST_MULTIPLE_C(P,X,Y)
#define _TEST_MULTIPLE_C(P,X,Y) {\
  printf LIST_AS_ARGS(LIST_CONS(P,X));\
  LIST_FOREACH(TEST_MULT1, LIST_ZIP(X,Y))\
}
#define TEST_MULT1(XY) do {\
  bool _test_result = TEST_EQ(PAIR_FIRST(XY),PAIR_SECOND(XY));\
  if (!_test_result) {\
    printf("error in above test! %s != %s", STRING(PAIR_FIRST(XY)), STRING(PAIR_SECOND(XY)));\
    exit(1);\
  }\
} while(0);

int main(void) {
#ifdef UNSIGNED_DEBUG
  printf("UNSIGNED 32\n\n");

  TEST("16 + 8 + 4: %d\n", U32_CONVERT(U32_ADD(U32_16, U32_ADD(U32_8, U32_4))), 28);
  TEST("16 - 8: %d\n", U32_CONVERT(U32_SUB(U32_16, U32_8)), 8);
  TEST("16 * 8: %d\n", U32_CONVERT(U32_MUL(U32_16, U32_8)), 128);
  TEST("7 * 3: %d\n", U32_CONVERT(U32_MUL(U32_7, U32_3)), 21);
  TEST("15 / 3: %d\n", U32_CONVERT(U32_DIV(U32_15, U32_3)), 5);
  TEST("7 << 4: %d\n", U32_CONVERT(U32_LSH(U32_7, U32_4)), 112);
  TEST("164 >> 4: %d\n", U32_CONVERT(U32_RSH(U32_164, U32_4)), 10);
  TEST("33 & 49: %d\n", U32_CONVERT(U32_AND(U32_33, U32_49)), 33);
  TEST("1 | 6: %d\n", U32_CONVERT(U32_OR(U32_1, U32_6)), 7);
  TEST("5 $ 7: %d\n", U32_CONVERT(U32_XOR(U32_5, U32_7)), 2);
  TEST("1 >= 1: %d\n", U32_GEQ(U32_1, U32_1), 1);
  TEST("10 == 12: %d\n", U32_EQ(U32_10, U32_12), 0);
  TEST("from_base10(1,2,3,4): %d\n", U32_CONVERT(U32_FROM_BASE10(1,2,3,4)), 1234);
  TEST("clz(16): %d\n", U32_CONVERT(U32_CLZ(U32_16)), 27);
  TEST("ctz(16): %d\n", U32_CONVERT(U32_CTZ(U32_16)), 4);
  TEST("log2(32): %d\n", U32_CONVERT(U32_LOG2(U32_32)), 5);
  TEST("uint32p(7 2 4 5 0 8 2): %d\n", U32_CONVERT(U32P(7 2 4 5 0 8 2)), 7245082);
  TEST("7^4: %d\n", U32_CONVERT(U32_POW(U32_7, U32_4)), 2401);
  TEST("sqrt(49): %d\n", U32_CONVERT(U32_SQRT(U32_49)), 7);
  TEST("is_odd(14): %d\n", U32_IS_ODD(U32_14), 0);
  TEST("is_even(14): %d\n", U32_IS_EVEN(U32_14), 1);
  TEST("24 / 7: %d\n", U32_CONVERT(U32_DIV(U32_24, U32_7)), 3);
  TEST("24 %% 7: %d\n", U32_CONVERT(U32_REM(U32_24, U32_7)), 3);
  TEST("log(1032000,10): %d\n", U32_CONVERT(U32_LOG(U32P(1 0 3 2 0 0 0), U32_10)), 6);
  TEST("cmp(11,10): %s\n", STRING(U32_CMP(U32_11, U32_10)), "GREATER");
  TEST("cmp(10,10): %s\n", STRING(U32_CMP(U32_10, U32_10)), "EQUAL");
  TEST("cmp(10,11): %s\n", STRING(U32_CMP(U32_10, U32_11)), "LESS");
  TEST("max(12,24): %d\n", U32_CONVERT(U32_MAX(U32_12, U32_24)), 24);
  TEST("max(32,16): %d\n", U32_CONVERT(U32_MAX(U32_32, U32_16)), 32);
  TEST("min(12,24): %d\n", U32_CONVERT(U32_MIN(U32_12, U32_24)), 12);
  TEST("min(32,16): %d\n", U32_CONVERT(U32_MIN(U32_32, U32_16)), 16);
  TEST("1024 + 2048: %d\n", U32_CONVERT(U32_ADD(U32P(1 0 2 4), U32P(2 0 4 8))), 3072);
  TEST("print(4138): %s\n", STRING(U32_PRINT(U32P(4 1 3 8))), "4138");
#endif

#ifdef SIGNED_DEBUG
  printf("\nSIGNED 32\n\n");

  TEST("is_odd(14): %d\n" , I32_IS_ODD(I32_14), 0);
  TEST("is_even(14): %d\n", I32_IS_EVEN(I32_14), 1);
  TEST("-13 > 12: %d\n" ,   I32_GT(I32_N13, I32_12), 0);
  TEST("-13 > -14: %d\n",   I32_GT(I32_N13, I32_N14), 1);
  TEST("15 > 14: %d\n",     I32_GT(I32_15, I32_14), 1);
  TEST("15 > -18: %d\n" ,   I32_GT(I32_15, I32_N18), 1);

  TEST("-13 < 12: %d\n" , I32_LT(I32_N13, I32_12), 1);
  TEST("-13 < -14: %d\n", I32_LT(I32_N13, I32_N14), 0);
  TEST("15 < 14: %d\n"  , I32_LT(I32_15, I32_14), 0);
  TEST("15 < -18: %d\n" , I32_LT(I32_15, I32_N18), 0);

  TEST("-13 >= 12: %d\n" , I32_GEQ(I32_N13, I32_12), 0);
  TEST("-13 >= -14: %d\n", I32_GEQ(I32_N13, I32_N14), 1);
  TEST("15 >= 14: %d\n"  , I32_GEQ(I32_15, I32_14), 1);
  TEST("15 >= -18: %d\n" , I32_GEQ(I32_15, I32_N18), 1);

  TEST("-13 <= 12: %d\n" , I32_LEQ(I32_N13, I32_12), 1);
  TEST("-13 <= -14: %d\n", I32_LEQ(I32_N13, I32_N14), 0);
  TEST("15 <= 14: %d\n"  , I32_LEQ(I32_15, I32_14), 0);
  TEST("15 <= -18: %d\n" , I32_LEQ(I32_15, I32_N18), 0);

  TEST("-13 == 13: %d\n" , I32_EQ(I32_N13, I32_13), 0);
  TEST("-13 == -13: %d\n", I32_EQ(I32_N13, I32_N13), 1);
  TEST("13 == 13: %d\n"  , I32_LEQ(I32_13, I32_13), 1);

  TEST("-13 != 13: %d\n" , I32_NEQ(I32_N13, I32_13), 1);
  TEST("-13 != -13: %d\n", I32_NEQ(I32_N13, I32_N13), 0);
  TEST("13 != 13: %d\n"  , I32_NEQ(I32_13, I32_13), 0);

  TEST("convert(I32_100): %d\n", I32_CONVERT(I32_100), 100);
  TEST("convert(I32_N100): %d\n", I32_CONVERT(I32_N100), -100);

  TEST("-(132): %d\n", I32_CONVERT(I32_NEG(I32_132)), -132);
  TEST("-(-132): %d\n", I32_CONVERT(I32_NEG(I32_N132)), 132);
  TEST("abs(132): %d\n", I32_CONVERT(I32_ABS(I32_132)), 132);
  TEST("abs(-132): %d\n", I32_CONVERT(I32_ABS(I32_N132)), 132);

  TEST("10 + (-5): %d\n", I32_CONVERT(I32_ADD(I32_10, I32_N5)), 5);
  TEST("10 + (-15): %d\n", I32_CONVERT(I32_ADD(I32_10, I32_N15)), -5);
  TEST("(-5) + (-15): %d\n", I32_CONVERT(I32_ADD(I32_N5, I32_N15)), -20);

  TEST("(-3) * (-5): %d\n", I32_CONVERT(I32_MUL(I32_N3, I32_N5)), 15);
  TEST("3 * (-5): %d\n", I32_CONVERT(I32_MUL(I32_3, I32_N5)), -15);
  TEST("3 * 5: %d\n", I32_CONVERT(I32_MUL(I32_3, I32_5)), 15);

  TEST("15 / (-5): %d\n", I32_CONVERT(I32_DIV(I32_15, I32_N5)), -3);
  TEST("(-15) / (-5): %d\n", I32_CONVERT(I32_DIV(I32_N15, I32_N5)), 3);
  TEST("(-15) / 5: %d\n", I32_CONVERT(I32_DIV(I32_N15, I32_5)), -3);
  TEST("15 / 5: %d\n", I32_CONVERT(I32_DIV(I32_15, I32_5)), 3);
  TEST("20 / 5: %d\n", I32_CONVERT(I32_DIV(I32_20, I32_5)), 4);

  TEST("16 %% 7: %d\n", I32_CONVERT(I32_REM(I32_16, I32_7)), 2);
  TEST("(-16) %% 7: %d\n", I32_CONVERT(I32_REM(I32_N16, I32_7)), -2);
  TEST("16 %% (-7): %d\n", I32_CONVERT(I32_REM(I32_16, I32_N7)), 2);
  TEST("(-16) %% (-7): %d\n", I32_CONVERT(I32_REM(I32_N16, I32_N7)), -2);

  TEST("100 << 1:   %d\n", I32_CONVERT(I32_LSH(I32_100, I32_1)), 200);
  TEST("100 << -1:  %d\n", I32_CONVERT(I32_LSH(I32_100, I32_N1)), 50);
  TEST("-100 << 1:  %d\n", I32_CONVERT(I32_LSH(I32_N100, I32_1)), -200);
  TEST("-100 << -1: %d\n", I32_CONVERT(I32_LSH(I32_N100, I32_N1)), -50);

  TEST("100 >> 1:   %d\n", I32_CONVERT(I32_RSH(I32_100, I32_1)), 50);
  TEST("100 >> -1:  %d\n", I32_CONVERT(I32_RSH(I32_100, I32_N1)), 200);
  TEST("-100 >> 1:  %d\n", I32_CONVERT(I32_RSH(I32_N100, I32_1)), -50);
  TEST("-100 >> -1: %d\n", I32_CONVERT(I32_RSH(I32_N100, I32_N1)), -200);
  
  TEST("max(200,32):   %d\n", I32_CONVERT(I32_MAX(I32_200,  I32_32)), 200);
  TEST("max(-200,32):  %d\n", I32_CONVERT(I32_MAX(I32_N200, I32_32)), 32);
  TEST("max(200,-32):  %d\n", I32_CONVERT(I32_MAX(I32_200, I32_N32)), 200);
  TEST("max(-200,-32): %d\n", I32_CONVERT(I32_MAX(I32_N200, I32_N32)), -32);
  
  TEST("min(200,32):   %d\n", I32_CONVERT(I32_MIN(I32_200,  I32_32)), 32);
  TEST("min(-200,32):  %d\n", I32_CONVERT(I32_MIN(I32_N200, I32_32)), -200);
  TEST("min(200,-32):  %d\n", I32_CONVERT(I32_MIN(I32_200, I32_N32)), -32);
  TEST("min(-200,-32): %d\n", I32_CONVERT(I32_MIN(I32_N200, I32_N32)), -200);

  TEST("10^3:       %d\n", I32_CONVERT(I32_POW(I32_10,  I32_3)), 1000);
  TEST("10^(-3):    %d\n", I32_CONVERT(I32_POW(I32_10,  I32_N3)), 0);
  TEST("(-10)^3:    %d\n", I32_CONVERT(I32_POW(I32_N10, I32_3)), -1000);
  TEST("(-10)^(-3): %d\n", I32_CONVERT(I32_POW(I32_N10, I32_N3)), 0);
 
  TEST("-2^0: %d\n", I32_CONVERT(I32_POW(I32_N2,  I32_0)), 1);
  TEST("2^0: %d\n", I32_CONVERT(I32_POW(I32_2,  I32_0)), 1);
  TEST("0^0: %d\n", I32_CONVERT(I32_POW(I32_0,  I32_0)), 1);

  TEST("sqrt(0): %d\n", I32_CONVERT(I32_SQRT(I32_0)), 0);
  TEST("sqrt(16): %d\n", I32_CONVERT(I32_SQRT(I32_16)), 4);
  TEST("sqrt(intmax): %d\n", I32_CONVERT(I32_SQRT(I32_VMAX)), 46340);

  TEST("log(81,3): %d\n", I32_CONVERT(I32_LOG(I32_81, I32_3)), 4);
  TEST("log2(32): %d\n", I32_CONVERT(I32_LOG2(I32_32)), 5);

  TEST("100 & -32: %d\n", I32_CONVERT(I32_AND(I32_100, I32_N32)), 96);
  TEST("1 | 6: %d\n", I32_CONVERT(I32_OR(I32_1, I32_6)), 7);
  TEST("5 $ 7: %d\n", I32_CONVERT(I32_XOR(I32_5, I32_7)), 2);
#endif

#ifdef FLOAT_DEBUG
  printf("\nFLOAT 32\n\n");

  TEST("convert(FP32_0):   %.1f\n", FP32_CONVERT(FP32_0), 0.0);
  TEST("convert(FP32_1):   %.1f\n", FP32_CONVERT(FP32_1), 1.0);
  TEST("convert(FP32_150): %.1f\n", FP32_CONVERT(FP32_150), 150.0);

  TEST("exponent(1.0): %d\n", U32_CONVERT(FP32_EXPONENT(FP32_1)), 0);
  TEST("exponent(2.0): %d\n", U32_CONVERT(FP32_EXPONENT(FP32_2)), 1);
  TEST("exponent(8.0): %d\n", U32_CONVERT(FP32_EXPONENT(FP32_8)), 3);

  TEST("mantissa(1.0): %d\n", U32_CONVERT(FP32_MANTISSA(FP32_1)), 8388608);
  TEST("mantissa(3.0): %d\n", U32_CONVERT(FP32_MANTISSA(FP32_3)), 12582912);
  TEST("mantissa(15.0): %d\n", U32_CONVERT(FP32_MANTISSA(FP32_15)), 15728640);

  TEST("20.0 > 10.0: %d\n", FP32_GT(FP32_20, FP32_10), 1);
  TEST("32.0 > 42.0: %d\n", FP32_GT(FP32_32, FP32_42), 0);
  TEST("50.0 > 50.0: %d\n", FP32_GT(FP32_50, FP32_50), 0);

  TEST("20.0 < 10.0: %d\n", FP32_LT(FP32_20, FP32_10), 0);
  TEST("32.0 < 42.0: %d\n", FP32_LT(FP32_32, FP32_42), 1);
  TEST("50.0 < 50.0: %d\n", FP32_LT(FP32_50, FP32_50), 0);

  TEST("20.0 <= 10.0: %d\n", FP32_LEQ(FP32_20, FP32_10), 0);
  TEST("32.0 <= 42.0: %d\n", FP32_LEQ(FP32_32, FP32_42), 1);
  TEST("50.0 <= 50.0: %d\n", FP32_LEQ(FP32_50, FP32_50), 1);

  TEST("20.0 >= 10.0: %d\n", FP32_GEQ(FP32_20, FP32_10), 1);
  TEST("32.0 >= 42.0: %d\n", FP32_GEQ(FP32_32, FP32_42), 0);
  TEST("50.0 >= 50.0: %d\n", FP32_GEQ(FP32_50, FP32_50), 1);

  TEST("20.0 == 10.0: %d\n", FP32_EQ(FP32_20, FP32_10), 0);
  TEST("32.0 == 42.0: %d\n", FP32_EQ(FP32_32, FP32_42), 0);
  TEST("50.0 == 50.0: %d\n", FP32_EQ(FP32_50, FP32_50), 1);

  TEST("15.0 + 12.0: %.1f\n", FP32_CONVERT(FP32_ADD(FP32_15, FP32_12)), 27.0);
  TEST("40.0 + (-12.0): %.1f\n", FP32_CONVERT(FP32_ADD(FP32_40, FP32_N12)), 28.0);
  TEST("40.0 + (-42.0): %.1f\n", FP32_CONVERT(FP32_ADD(FP32_40, FP32_N42)), -2);
  TEST("40.0 + (-112.0): %.1f\n", FP32_CONVERT(FP32_ADD(FP32_40, FP32_N112)), -72.0);
  TEST("(-28.0) + (-112.0): %.1f\n", FP32_CONVERT(FP32_ADD(FP32_N28, FP32_N112)), -140.0);
  TEST("(-28.0) + 112.0: %.1f\n", FP32_CONVERT(FP32_ADD(FP32_N28, FP32_112)), 84.0);
  TEST("0.5 + 0.25: %.2f\n", FP32_CONVERT(FP32_ADD(FP32_1L2, FP32_1L4)), 0.75);
  TEST("0.5 + 0.5: %.1f\n", FP32_CONVERT(FP32_ADD(FP32_1L2, FP32_1L2)), 1.0);
  TEST("1.0 + 0.5: %.1f\n", FP32_CONVERT(FP32_ADD(FP32_1, FP32_1L2)), 1.5);

  TEST("2.0 * 2.0: %.1f\n", FP32_CONVERT(FP32_MUL(FP32_2, FP32_2)), 4.0);
  TEST("15.0 * 5.0: %.1f\n", FP32_CONVERT(FP32_MUL(FP32_15, FP32_5)), 75.0);
  TEST("1024.0 * 2048.0: %.1f\n", FP32_CONVERT(FP32_MUL(FP32P(1 0 2 4), FP32P(2 0 4 8))), 2097152.0);
  TEST("32.0 / 4.0: %.1f\n", FP32_CONVERT(FP32_DIV(FP32_32, FP32_4)), 8.0);
  TEST("2.0 / 4.0: %.1f\n", FP32_CONVERT(FP32_DIV(FP32_2, FP32_4)), 0.5);
  TEST("27.0 / 3.0: %.1f\n", FP32_CONVERT(FP32_DIV(FP32_27, FP32_3)), 9.0);
  TEST("1.0 / 3.0: %.2f\n", FP32_CONVERT(FP32_DIV(FP32_1, FP32_3)), 1.0/3.0);
  TEST("sqrt(32.0): %.2f\n", FP32_CONVERT(FP32_SQRT(FP32_32)), sqrtf(32.0));
  TEST("fp32_from_u32(0): %.1f\n", FP32_CONVERT(FP32_FROM_U32(U32_0)), 0.0);
  TEST("fp32_from_u32(10): %.1f\n", FP32_CONVERT(FP32_FROM_U32(U32_10)), 10.0);
  TEST("fp32_from_u32(32): %.1f\n", FP32_CONVERT(FP32_FROM_U32(U32_32)), 32.0);
  TEST("fp32_to_u32(0): %d\n", U32_CONVERT(FP32_TO_U32(FP32_0)), 0);
  TEST("fp32_to_u32(10): %d\n", U32_CONVERT(FP32_TO_U32(FP32_10)), 10);
  TEST("fp32_to_u32(32): %d\n", U32_CONVERT(FP32_TO_U32(FP32_32)), 32);
  TEST("log2(5.0): %.4f\n", FP32_CONVERT(FP32_LOG2(FP32_5)), log2f(5.0));
  TEST("log2(32.0): %.4f\n", FP32_CONVERT(FP32_LOG2(FP32_32)), log2f(32.0));
  TEST("log2(36.0): %.4f\n", FP32_CONVERT(FP32_LOG2(FP32_36)), log2f(36.0));
  TEST("log(125.0, 5.0): %.4f\n", FP32_CONVERT(FP32_LOG(FP32_125, FP32_5)), logf(125.0)/logf(5.0));
  TEST("fract(sqrt(32)): %.4f\n", FP32_CONVERT(FP32_FRACT(FP32_SQRT(FP32_32))), sqrtf(32.0) - 5.0);
  TEST("trunc(sqrt(32)): %.4f\n", FP32_CONVERT(FP32_TRUNC(FP32_SQRT(FP32_32))), 5.0);
  TEST("powi(125.0, 0): %.4f\n", FP32_CONVERT(FP32_POW_I(FP32_125, U32_0)), 1.0);
  TEST("exp(1.5): %.4f\n", FP32_CONVERT(FP32_EXP(FP32_ADD(FP32_1, FP32_1L2))), expf(1.5));
#endif

#ifdef NUMBER_SPECIAL_DEBUG
  TEST("is_nan(0): %d\n", FP32_IS_NAN(FP32_0), 0);
  TEST("is_nan(NaN): %d\n", FP32_IS_NAN(FP32_NAN), 1);
  TEST("is_nan(Inf): %d\n", FP32_IS_NAN(FP32_INF), 0);

  TEST("is_inf(0): %d\n", FP32_IS_INF(FP32_0), 0);
  TEST("is_inf(NaN): %d\n", FP32_IS_INF(FP32_NAN), 0);
  TEST("is_inf(Inf): %d\n", FP32_IS_INF(FP32_INF), 1);

  TEST("is_zero(0): %d\n", FP32_IS_ZERO(FP32_0), 1);
  TEST("is_zero(NaN): %d\n", FP32_IS_ZERO(FP32_NAN), 0);
  TEST("is_zero(Inf): %d\n", FP32_IS_ZERO(FP32_INF), 0);

#define FP_SPECIAL_TEST(F)\
  do {\
    printf(STRING_CAT(STRING(F(nan, nan):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_NAN, FP32_NAN)));\
    printf(STRING_CAT(STRING(F(nan, 0.0):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_NAN, FP32_0)));\
    printf(STRING_CAT(STRING(F(nan, 1.0):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_NAN, FP32_1)));\
    printf(STRING_CAT(STRING(F(nan, inf):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_NAN, FP32_INF)));\
    printf(STRING_CAT(STRING(F(0.0, nan):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_0, FP32_NAN)));\
    printf(STRING_CAT(STRING(F(0.0, 0.0):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_0, FP32_0)));\
    printf(STRING_CAT(STRING(F(0.0, 1.0):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_0, FP32_1)));\
    printf(STRING_CAT(STRING(F(0.0, inf):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_0, FP32_INF)));\
    printf(STRING_CAT(STRING(F(1.0, nan):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_1, FP32_NAN)));\
    printf(STRING_CAT(STRING(F(1.0, 0.0):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_1, FP32_0)));\
    printf(STRING_CAT(STRING(F(1.0, 1.0):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_1, FP32_1)));\
    printf(STRING_CAT(STRING(F(1.0, inf):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_1, FP32_INF)));\
    printf(STRING_CAT(STRING(F(inf, nan):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_INF, FP32_NAN)));\
    printf(STRING_CAT(STRING(F(inf, 0.0):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_INF, FP32_0)));\
    printf(STRING_CAT(STRING(F(inf, 1.0):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_INF, FP32_1)));\
    printf(STRING_CAT(STRING(F(inf, inf):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_INF, FP32_INF)));\
  } while(0);
  LIST_FOREACH(FP_SPECIAL_TEST, LIST(ADD,SUB,MUL,DIV,LOG,MAX,MIN))

#define FP_SPECIAL_TEST_SINGLE(F)\
  do {\
    printf(STRING_CAT(STRING(F(nan):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_NAN)));\
    printf(STRING_CAT(STRING(F(0.0):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_0)));\
    printf(STRING_CAT(STRING(F(1.0):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_1)));\
    printf(STRING_CAT(STRING(F(inf):)," %.1f\n"), FP32_CONVERT(CAT(FP32_,F)(FP32_INF)));\
  } while(0);
  LIST_FOREACH(FP_SPECIAL_TEST_SINGLE, LIST(ABS,FRACT,TRUNC,EXP,LOG2,NEG))


#endif

#define EQZ(X) _EQZ_EVAL(CAT(_EQZ,X)())
#define _EQZ_EVAL(X) X
#define _EQZ0() 1
#define _EQZ1() 0
#define _EQZ2() 0
#define _EQZ3() 0

#define NEQZ(X) _NEQZ_EVAL(CAT(_NEQZ,X)())
#define _NEQZ_EVAL(X) X
#define _NEQZ0() 0
#define _NEQZ1() 1
#define _NEQZ2() 1
#define _NEQZ3() 1

#define EQB(X,Y) _EQB_EVAL(CAT(CAT(_EQB,X),Y))()
#define _EQB_EVAL(X) X
#define _EQB00() 1
#define _EQB10() 0
#define _EQB01() 0
#define _EQB11() 1

#define CONS0(X) (0,(X,LIST_NIL))

#ifdef LIST_DEBUG
  TEST("list(1,2,3): %s\n",                    STRING(LIST(1,2,3)), "(1,(2,(3,())))");
  TEST("first([1,2,3]): %s\n",                 STRING(LIST_FIRST(LIST(1,2,3))), "1");
  TEST("rest([1,2,3]): %s\n",                  STRING(LIST_REST(LIST(1,2,3))), "(2,(3,()))");
  TEST("reverse([1,2,3]): %s\n",               STRING(LIST_REVERSE(LIST(1,2,3))), "(3,(2,(1,())))");
  TEST("map(f,[1,2,3]): %s\n",                 STRING(LIST_MAP(F,LIST(1,2,3))), "(F(1),(F(2),(F(3),())))");
  TEST("map2(f,[1,2,3],[4,5,6]): %s\n",        STRING(LIST_MAP2(F,LIST(1,2,3),LIST(4,5,6))), "(F(1,4),(F(2,5),(F(3,6),())))");
  TEST("reduce(f,[1,2,3]): %s\n",              STRING(LIST_REDUCE(F,LIST(1,2,3))), "F(F(1,2),3)");
  TEST("foldl(f,[1,2,3]): %s\n",               STRING(LIST_FOLDL(F,LIST(1,2,3))), "F(F(1,2),3)");
  TEST("foldr(f,[1,2,3]): %s\n",               STRING(LIST_FOLDR(F,LIST(1,2,3))), "F(3,F(2,1))");
  TEST("reduce(f,[1,2,3],0): %s\n",            STRING(LIST_REDUCE(F,LIST(1,2,3),0)), "F(F(F(0,1),2),3)");
  TEST("foldl(f,[1,2,3],0): %s\n",             STRING(LIST_FOLDL(F,LIST(1,2,3),0)), "F(F(F(0,1),2),3)");
  TEST("foldr(f,[1,2,3],0): %s\n",             STRING(LIST_FOLDR(F,LIST(1,2,3),0)), "F(3,F(2,F(1,0)))");
  TEST("filter(eq0,[0,1,0,1]): %s\n",          STRING(LIST_FILTER(EQZ,LIST(0,1,0,1))), "(0,(0,()))");
  TEST("remove(eq0,[0,1,0,1]): %s\n",          STRING(LIST_REMOVE(EQZ,LIST(0,1,0,1))), "(1,(1,()))");
  TEST("concat([1,2,3],[4,5,6]): %s\n",        STRING(LIST_CONCAT(LIST(1,2,3), LIST(4,5,6))), "(1,(2,(3,(4,(5,(6,()))))))");
  TEST("find_index(eq0,[1,1,0,1,1]): %d\n",    U32H_CONVERT(LIST_FIND_INDEX(EQZ,LIST(1,1,0,1,1))), 2);
  TEST("find_first(neq0,[0,0,3,2,1]): %d\n",   LIST_FIND_FIRST(NEQZ,LIST(0,0,3,2,1)), 3);
  TEST("split(eq0,[1,1,0,1,1,1]): %s\n",       STRING(LIST_SPLIT(EQZ,LIST(1,1,0,1,1,1))), "((1,(1,())),((1,(1,(1,()))),()))");
  TEST("split_all(eq0,[1,0,1,1,1,0,1]): %s\n", STRING(LIST_SPLIT_ALL(EQZ,LIST(1,0,1,1,1,0,1))), "((1,()),((1,(1,(1,()))),((1,()),())))");
  TEST("split_at([1,0,1,1,1,0,1],3): %s\n",    STRING(LIST_SPLIT_AT(LIST(1,0,1,1,1,0,1), U32H_3)), "((1,(0,(1,()))),((1,(0,(1,()))),()))");
  TEST("flatten([[[1,0],1],1,[1,0]]): %s\n",   STRING(LIST_FLATTEN(LIST(LIST(LIST(1,0),1),1,LIST(1,0)))), "(1,(0,(1,(1,(1,(0,()))))))");
  TEST("contains(eq0,[1,0,1]): %d\n",          LIST_CONTAINS(EQZ,LIST(1,0,1)), 1);
  TEST("contains(eq0,[1,1,1]): %d\n",          LIST_CONTAINS(EQZ,LIST(1,1,1)), 0);
  TEST("nth([1,2,3],1): %d\n",                 LIST_NTH(LIST(1,2,3), U32H_1), 2);
  TEST("length([1,2,3]): %d\n",                U32H_CONVERT(LIST_LENGTH(LIST(1,2,3))), 3);
  TEST("foreach(F,[1,2,3]): %s\n",             STRING(LIST_FOREACH(F,LIST(1,2,3))), "F(1)F(2)F(3)");
  TEST("csum([1,2,3]): %d\n",                  LIST_CSUM(LIST(1,2,3)), 6);
  TEST("eq(eqb,[0,1,1],[0,1,1]): %d\n",        LIST_EQ(EQB,LIST(0,1,1),LIST(0,1,1)), 1);
  TEST("eq(eqb,[0,0,1],[0,1,1]): %d\n",        LIST_EQ(EQB,LIST(0,0,1),LIST(0,1,1)), 0);
  TEST("apply(F,[1,2,3,4,5]): %s\n",           STRING(LIST_APPLY(F,LIST(1,2,3,4,5))), "F(1,2,3,4,5)");
  TEST("mapcat(cons0,[1,1,1,1]): %s\n",        STRING(LIST_MAPCAT(CONS0,LIST(1,1,1,1,1))), "(0,(1,(0,(1,(0,(1,(0,(1,(0,(1,()))))))))))");
  TEST("as_args([1,2,3,4,5]): %s\n",           STRING(LIST_AS_ARGS(LIST(1,2,3,4,5))), "(1,2,3,4,5)");
  TEST("as_tuple([1,2,3,4,5]): %s\n",          STRING(LIST_AS_TUPLE(LIST(1,2,3,4,5))), "(1,2,3,4,5)");
  TEST("take([1,2,3,4,5],3): %s\n",            STRING(LIST_TAKE(LIST(1,2,3,4,5), U32H_3)), "(1,(2,(3,())))");
  TEST("take_while(eq0,[0,0,0,1,1]): %s\n",    STRING(LIST_TAKE_WHILE(EQZ,LIST(0,0,0,1,1))), ("(0,(0,(0,())))"));
  TEST("take_nth([1,2,3,4,5,6],2): %s\n",      STRING(LIST_TAKE_NTH(LIST(1,2,3,4,5,6), U32H_2)), "(2,(4,(6,())))");
  TEST("take_last([1,2,3,4,5,6],3): %s\n",     STRING(LIST_TAKE_LAST(LIST(1,2,3,4,5,6), U32H_3)), "(4,(5,(6,())))");
  TEST("drop([1,2,3,4,5],3): %s\n",            STRING(LIST_DROP(LIST(1,2,3,4,5), U32H_3)), "(4,(5,()))");
  TEST("drop_while(eq0,[0,0,0,1,1]): %s\n",    STRING(LIST_DROP_WHILE(EQZ,LIST(0,0,0,1,1))), "(1,(1,()))");
  TEST("drop_nth([1,2,3,4,5,6],2): %s\n",      STRING(LIST_DROP_NTH(LIST(1,2,3,4,5,6), U32H_2)), "(1,(3,(5,())))");
  TEST("drop_last([1,2,3,4,5,6],2): %s\n",     STRING(LIST_DROP_LAST(LIST(1,2,3,4,5,6), U32H_2)), "(1,(2,(3,(4,()))))");
  TEST("is_list([1,2,3]): %d\n",               IS_LIST(LIST(1,2,3)), 1);
  TEST("is_list(1): %d\n",                     IS_LIST(1), 0);
  TEST("every(eq0,[0,0,0,0]): %d\n",           LIST_EVERY(EQZ,LIST(0,0,0,0,0)), 1);
  TEST("none(neq0,[0,0,0,0]): %d\n",           LIST_NONE(NEQZ,LIST(0,0,0,0,0)), 1);
  TEST("interpose([1,2,3],0): %s\n",           STRING(LIST_INTERPOSE(LIST(1,2,3),0)), "(1,(0,(2,(0,(3,())))))");
  TEST("insert([1,2,4],3,2): %s\n",            STRING(LIST_INSERT(LIST(1,2,4),3,U32H_2)), "(1,(2,(3,(4,()))))");
  TEST("push([1,2,3],4): %s\n",                STRING(LIST_PUSH(LIST(1,2,3),4)), "(1,(2,(3,(4,()))))");
  TEST("enumerate([a,b,c]): %s\n",             STRING(LIST_ENUMERATE(LIST(a,b,c))), "(((0,0,0,0,0,0,0,0),a),(((1,0,0,0,0,0,0,0),b),(((2,0,0,0,0,0,0,0),c),())))");
  TEST("walk(F,[1,2,3]): %s\n",                STRING(LIST_WALK(F,LIST(1,2,3))), "(F(1),(F(2),(F(3),())))");
  TEST("walk(F,[[1,2],3]): %s\n",              STRING(LIST_WALK(F,LIST(LIST(1,2),3))), "((F(1),(F(2),())),(F(3),()))");
  TEST("range(1,5): %s\n",                     STRING(LIST_MAP(U32H_PRINT, LIST_RANGE(I32H_1, I32H_5))), "(1,(2,(3,(4,(5,())))))");
  TEST("range(5,1,-1): %s\n",                  STRING(LIST_MAP(U32H_PRINT, LIST_RANGE(I32H_5, I32H_1, I32H_N1))), "(5,(4,(3,(2,(1,())))))");
  TEST("sort(u32_lt, [3,1,2]): %s\n",          STRING(LIST_MAP(U32H_PRINT, LIST_SORT(U32H_LT, LIST(U32H_3, U32H_1, U32H_2)))), "(1,(2,(3,())))");
  TEST("sort(u32_lt, [3,2,1]): %s\n",          STRING(LIST_MAP(U32H_PRINT, LIST_SORT(U32H_LT, LIST(U32H_3, U32H_2, U32H_1)))), "(1,(2,(3,())))");
  TEST("sort(u32_lt, [1,2,3]): %s\n",          STRING(LIST_MAP(U32H_PRINT, LIST_SORT(U32H_LT, LIST(U32H_1, U32H_2, U32H_3)))), "(1,(2,(3,())))");
  TEST("zip([1,2,3],[4,5,6]): %s\n",           STRING(LIST_ZIP(LIST(1,2,3),LIST(4,5,6))), "((1,4),((2,5),((3,6),())))");
  TEST("last([1,2,3,4,5]): %d\n",              LIST_LAST(LIST(1,2,3,4,5)), 5);

  LIST_AS_DATA(list,  LIST(1,2,3), int);
  LIST_AS_DATA(list2, LIST(4,5,6));
  auto array  = LIST_AS_ARRAY(LIST(1,2,3),int);
  auto array2 = LIST_AS_ARRAY(LIST(4,5,6));

  TEST_MULTIPLE("as_data([1,2,3],int):  [%d, %d, %d]\n", LIST(list->first, list->rest->first, list->rest->rest->first), LIST(1,2,3));
  TEST_MULTIPLE("as_data([4,5,6]):      [%d, %d, %d]\n", LIST(list2->first, list2->rest->first, list2->rest->rest->first), LIST(4,5,6));
  TEST_MULTIPLE("as_array([1,2,3],int): {%d, %d, %d}\n", LIST(array[0], array[1], array[2]), LIST(1,2,3));
  TEST_MULTIPLE("as_array([4,5,6]):     {%d, %d, %d}\n", LIST(array2[0], array2[1], array2[2]), LIST(4,5,6));

  LIST_TYPE(int) list3 = (typeof(list3))LIST_AS_DATA_VALUE(LIST(1,2,3),int);
  LIST_TYPE(int) list4 = (typeof(list4))LIST_AS_DATA_VALUE(LIST(4,5,6));
  TEST("as_data_value([1,2,3],int)->first: %d\n", list3->first, 1);
  TEST("as_data_value([4,5,6])->first: %d\n", list4->first, 4);
#endif

#ifdef TUPLE_DEBUG
  LIST_AS_TUPLE_DATA(tuple, LIST(1,'a',(char*)"abc"));
  TEST_MULTIPLE("as_tuple([1,'a',\"abc\"]): (%d, '%c', \"%s\")\n",
    LIST(TUPLE_GET(tuple,1),TUPLE_GET(tuple,2),TUPLE_GET(tuple,3)),
    LIST(1,'a',"abc"))

  TUPLE_AS_DATA(tuple2, ((char*)"def", (int*)((int[3]){1,2,3}), 1));
  TEST_MULTIPLE("as_data((\"def\",{1,2,3},1)): (\"%s\", {%d,%d,%d}, %d)\n",
    LIST(TUPLE_GET(tuple2, U32H_1),
         TUPLE_GET(tuple2, 2)[0],
         TUPLE_GET(tuple2, 2)[1],
         TUPLE_GET(tuple2, 2)[2],
         TUPLE_GET(tuple2, 3)),
    LIST("def",1,2,3,1));

  #define ADD3(A,B,C) ((A)+(B)+(C))
  #define PAIR0(X) (0,X)

  TEST("is_tuple(0): %d\n", IS_TUPLE(0), 0);
  TEST("is_tuple(()): %d\n", IS_TUPLE(()), 1);
  TEST("is_tuple((1,2,3)): %d\n", IS_TUPLE((1,2,3)), 1);
  TEST("is_empty(()): %d\n", TUPLE_IS_EMPTY(()), 1);
  TEST("is_empty((1,2,3)): %d\n", TUPLE_IS_EMPTY((1,2,3)), 0);
  TEST("first((1,2,3)): %d\n", TUPLE_FIRST((1,2,3)), 1);
  TEST("last((1,2,3)): %d\n", TUPLE_LAST((1,2,3)), 3);
  TEST("nth((1,2,3),1): %d\n", TUPLE_NTH((1,2,3),U32H_1), 2);
  TEST("apply(add3,(1,2,3)): %d\n", TUPLE_APPLY(ADD3,(1,2,3)), 6);
  TEST("length(()): %d\n", U32H_CONVERT(TUPLE_LENGTH(())), 0);
  TEST("length((1,2,3)): %d\n", U32H_CONVERT(TUPLE_LENGTH((1,2,3))), 3);
  TEST("push((1,2,3),4): %s\n", STRING(TUPLE_PUSH((1,2,3),4)), "(1,2,3,4)");
  TEST("concat((1,2,3),(4,5,6)): %s\n", STRING(TUPLE_CONCAT((1,2,3),(4,5,6))), "(1,2,3,4,5,6)");
  TEST("reverse((1,2,3)): %s\n", STRING(TUPLE_REVERSE((1,2,3))), "(3,2,1)");
  TEST("map(F,(1,2,3)): %s\n", STRING(TUPLE_MAP(F,(1,2,3))), "(F(1),F(2),F(3))");
  TEST("map2(F,(1,2,3),(4,5,6)): %s\n", STRING(TUPLE_MAP2(F,(1,2,3),(4,5,6))), "(F(1,4),F(2,5),F(3,6))");
  TEST("reduce(f,(1,2,3),0): %s\n", STRING(TUPLE_REDUCE(F,(1,2,3),0)), "F(F(F(0,1),2),3)");
  TEST("foldl(f,(1,2,3),0): %s\n", STRING(TUPLE_FOLDL(F,(1,2,3),0)), "F(F(F(0,1),2),3)");
  TEST("foldr(f,(1,2,3),0): %s\n", STRING(TUPLE_FOLDR(F,(1,2,3),0)), "F(3,F(2,F(1,0)))");
  TEST("reduce(f,(1,2,3)): %s\n", STRING(TUPLE_REDUCE(F,(1,2,3))), "F(F(1,2),3)");
  TEST("foldl(f,(1,2,3)): %s\n", STRING(TUPLE_FOLDL(F,(1,2,3))), "F(F(1,2),3)");
  TEST("foldr(f,(1,2,3)): %s\n", STRING(TUPLE_FOLDR(F,(1,2,3))), "F(3,F(2,1))");
  TEST("walk(f,((1,2),3)): %s\n", STRING(TUPLE_WALK(F,((1,2),3))), "((F(1),F(2)),F(3))");
  TEST("flatten(((1,2),3)): %s\n", STRING(TUPLE_FLATTEN(((1,2),3))), "(1,2,3)");
  TEST("split((1,1,0,1)): %s\n", STRING(TUPLE_SPLIT(EQZ,(1,1,0,1))), "((1,1),(1))");
  TEST("split_all((1,1,0,1,0,1,1)): %s\n", STRING(TUPLE_SPLIT_ALL(EQZ,(1,1,0,1,0,1,1))), "((1,1),(1),(1,1))");
  TEST("take((1,2,3,4),2): %s\n", STRING(TUPLE_TAKE((1,2,3,4),U32H_2)), "(1,2)");
  TEST("take_while(neq0,(1,2,0,2,1)): %s\n", STRING(TUPLE_TAKE_WHILE(NEQZ,(1,2,0,2,1))), "(1,2)");
  TEST("take_nth((1,2,3,4,5,6),2): %s\n", STRING(TUPLE_TAKE_NTH((1,2,3,4,5,6),U32H_2)), "(2,4,6)");
  TEST("take_last((1,2,3,4,5,6),2): %s\n", STRING(TUPLE_TAKE_LAST((1,2,3,4,5,6),U32H_2)), "(5,6)");
  TEST("drop((1,2,3,4),2): %s\n", STRING(TUPLE_DROP((1,2,3,4),U32H_2)), "(3,4)");
  TEST("drop_while(neq0,(1,2,0,2,1)): %s\n", STRING(TUPLE_DROP_WHILE(NEQZ,(1,2,0,2,1))), "(0,2,1)");
  TEST("drop_nth((1,2,3,4,5,6),2): %s\n", STRING(TUPLE_DROP_NTH((1,2,3,4,5,6),U32H_2)), "(1,3,5)");
  TEST("drop_last((1,2,3,4,5,6),2): %s\n", STRING(TUPLE_DROP_LAST((1,2,3,4,5,6),U32H_2)), "(1,2,3,4)");
  TEST("sort(u32_lt, (3,1,2)): %s\n", STRING(TUPLE_MAP(U32H_PRINT, TUPLE_SORT(U32H_LT, (U32H_3, U32H_1, U32H_2)))), "(1,2,3)");
  TEST("sort(u32_lt, (3,2,1)): %s\n", STRING(TUPLE_MAP(U32H_PRINT, TUPLE_SORT(U32H_LT, (U32H_3, U32H_2, U32H_1)))), "(1,2,3)");
  TEST("sort(u32_lt, (1,2,3)): %s\n", STRING(TUPLE_MAP(U32H_PRINT, TUPLE_SORT(U32H_LT, (U32H_1, U32H_2, U32H_3)))), "(1,2,3)");
  TEST("enumerate((a,b,c)): %s\n", STRING(TUPLE_ENUMERATE((a,b,c))), "(((0,0,0,0,0,0,0,0),a),((1,0,0,0,0,0,0,0),b),((2,0,0,0,0,0,0,0),c))");
  TEST("filter(neq0,(1,0,2,0,3,0)): %s\n", STRING(TUPLE_FILTER(NEQZ, (1,0,2,0,3,0))), "(1,2,3)");
  TEST("remove(neq0,(1,0,2,0,3,0)): %s\n", STRING(TUPLE_REMOVE(NEQZ, (1,0,2,0,3,0))), "(0,0,0)");
  TEST("every(neq0,(1,2,3)): %d\n", TUPLE_EVERY(NEQZ, (1,2,3)), 1);
  TEST("every(neq0,(1,0,2,3)): %d\n", TUPLE_EVERY(NEQZ, (1,0,2,3)), 0);
  TEST("none(eq0,(1,2,3)): %d\n", TUPLE_NONE(EQZ, (1,2,3)), 1);
  TEST("none(eq0,(1,0,2,3)): %d\n", TUPLE_NONE(EQZ, (1,0,2,3)), 0);
  TEST("insert((1,3,4),2,1): %s\n", STRING(TUPLE_INSERT((1,3,4), 2, U32H_1)), "(1,2,3,4)");
  TEST("find_first(neq0,(0,0,3,2,1)): %d\n", TUPLE_FIND_FIRST(NEQZ, (0,0,3,2,1)), 3);
  TEST("find_index(neq0,(0,0,3,2,1)): %d\n", U32H_CONVERT(TUPLE_FIND_INDEX(NEQZ,(0,0,3,2,1))), 2);
  TEST("mapcat(pair0,(1,2,3)): %s\n", STRING(TUPLE_MAPCAT(PAIR0, (1,2,3))), "(0,1,0,2,0,3)");
  TEST("range(1,5): %s\n", STRING(TUPLE_MAP(U32H_PRINT, TUPLE_RANGE(I32H_1, I32H_5))), "(1,2,3,4,5)");
  TEST("range(5,1,-1): %s\n", STRING(TUPLE_MAP(U32H_PRINT, TUPLE_RANGE(I32H_5, U32H_1, I32H_N1))), "(5,4,3,2,1)");
  TEST("csum((1,2,3)): %d\n", TUPLE_CSUM((1,2,3)), 6);
  TEST("interpose((1,2,3),0): %s\n", STRING(TUPLE_INTERPOSE((1,2,3),0)), "(1,0,2,0,3)");
  TEST("split_at((1,0,1,1,1,0,1),3): %s\n", STRING(TUPLE_SPLIT_AT((1,0,1,1,1,0,1), U32H_3)), "((1,0,1),(1,0,1))");
#endif

#ifdef PAIR_DEBUG
  TEST("pair(1,2): %s\n", STRING(PAIR(1,2)), "(1,2)");
  TEST("first((1,2)): %d\n", PAIR_FIRST(PAIR(1,2)), 1);
  TEST("second((1,2)): %d\n", PAIR_SECOND(PAIR(1,2)), 2);
  TEST("is_pair(0): %d\n", IS_PAIR(0), 0);
  TEST("is_pair((1)): %d\n", IS_PAIR((1)), 0);
  TEST("is_pair((1,2)): %d\n", IS_PAIR(PAIR(1,2)), 1);
  TEST("is_pair((1,2,3)): %d\n", IS_PAIR((1,2,3)), 0);
  TEST("is_pair([1,2,3]): %d\n", IS_PAIR(LIST(1,2,3)), 1);
  TEST("map(first, enumerate([1,2,3])): %s\n",
    STRING(LIST_MAP(U32H_PRINT, LIST_MAP(PAIR_FIRST, LIST_ENUMERATE(LIST(1,2,3))))),
    STRING(LIST(0,1,2)));
#endif

#ifdef COL_FLATTEN_DEBUG
  TEST("flatten([[[1,0],1],1,[1,0]]): %s\n",
    STRING(LIST_FLATTEN(LIST(LIST(LIST(1,0),1),1,LIST(1,0)))),
    STRING(LIST(1,0,1,1,1,0)));
  TEST("flatten(((1,2),3)): %s\n",
    STRING(TUPLE_FLATTEN(((1,2),3))),
    STRING((1,2,3)));
#endif

#ifdef COL_FOREACH_DEBUG
#define PRINT_INT(X) printf("%d ", X);
  LIST_FOREACH(PRINT_INT, LIST(1,2,3,4));
  TUPLE_FOREACH(PRINT_INT, (1,2,3,4));
#endif

#ifdef HEX_DEBUG
  TEST("0xff: %d\n", U32H_CONVERT(U32H(F F)), 0xff);
  TEST("244 + 100: %d\n", U32H_CONVERT(U32H_ADD(U32H_244, U32H_100)), 344);
  TEST("244 - 100: %d\n", U32H_CONVERT(U32H_SUB(U32H_244, U32H_100)), 144);
  TEST("244 * 100: %d\n", U32H_CONVERT(U32H_MUL(U32H_244, U32H_100)), 24400);
  TEST("244 == 100: %d\n", U32H_EQ(U32H_244, U32H_100), 0);
  TEST("100 == 100: %d\n", U32H_EQ(U32H_100, U32H_100), 1);
  TEST("100 < 100: %d\n", U32H_LT(U32H_100, U32H_100), 0);
  TEST("100 < 101: %d\n", U32H_LT(U32H_100, U32H_101), 1);
  TEST("101 < 100: %d\n", U32H_LT(U32H_101, U32H_100), 0);
  TEST("100 >= 100: %d\n", U32H_GEQ(U32H_100, U32H_100), 1);
  TEST("100 >= 101: %d\n", U32H_GEQ(U32H_100, U32H_101), 0);
  TEST("101 >= 100: %d\n", U32H_GEQ(U32H_101, U32H_100), 1);
  TEST("16 / 4: %d\n", U32H_CONVERT(U32H_DIV(U32H_16, U32H_4)), 4);
  TEST("18 %% 4: %d\n", U32H_CONVERT(U32H_REM(U32H_18, U32H_4)), 2);
  TEST("23 %% 4: %d\n", U32H_CONVERT(U32H_REM(U32H_23, U32H_4)), 3);
  TEST("32 >> 1: %d\n", U32H_CONVERT(U32H_RSH1(U32H_32)), 16);
  TEST("32 << 1: %d\n", U32H_CONVERT(U32H_LSH1(U32H_32)), 64);
  TEST("32 >> 2: %d\n", U32H_CONVERT(U32H_RSH(U32H_32, U32H_2)), 8);
  TEST("32 << 2: %d\n", U32H_CONVERT(U32H_LSH(U32H_32, U32H_2)), 128);
  TEST("32 ^ 4: %d\n", U32H_CONVERT(U32H_POW(U32H_32, U32H_4)), 1048576);
  TEST("9 ^ 9: %d\n", U32H_CONVERT(U32H_POW(U32H_9, U32H_9)), 387420489);
  TEST("sqrt(16): %d\n", U32H_CONVERT(U32H_SQRT(U32H_16)), 4);
  TEST("sqrt(28): %d\n", U32H_CONVERT(U32H_SQRT(U32H_28)), 5);
  TEST("sqrt(0x800): %d\n", U32H_CONVERT(U32H_SQRT(U32H(8 0 0))), 0x2d);
  TEST("log2(32): %d\n", U32H_CONVERT(U32H_LOG2(U32H_32)), 5);
  TEST("log(125,5): %d\n", U32H_CONVERT(U32H_LOG(U32H_125, U32H_5)), 3);
  TEST("41 | 27: %d\n", U32H_CONVERT(U32H_OR(U32H_41, U32H_27)), 59);
  TEST("41 & 27: %d\n", U32H_CONVERT(U32H_AND(U32H_41, U32H_27)), 9);
  TEST("41 $ 27: %d\n", U32H_CONVERT(U32H_XOR(U32H_41, U32H_27)), 50);

  TEST("244 + 100: %zu\n", (uint64_t)U128H_CONVERT(U128H_ADD(U128H_244, U128H_100)), 344);
  TEST("244 - 100: %zu\n", (uint64_t)U128H_CONVERT(U128H_SUB(U128H_244, U128H_100)), 144);
  TEST("244 * 100: %zu\n", (uint64_t)U128H_CONVERT(U128H_MUL(U128H_244, U128H_100)), 24400);
  TEST("100 == 100: %d\n", U128H_EQ(U128H_100, U128H_100), 1);
  TEST("101 == 100: %d\n", U128H_EQ(U128H_101, U128H_100), 0);
  TEST("100 < 100: %d\n", U128H_LT(U128H_100, U128H_100), 0);
  TEST("101 < 100: %d\n", U128H_LT(U128H_101, U128H_100), 0);
  TEST("100 < 101: %d\n", U128H_LT(U128H_100, U128H_101), 1);
  TEST("100 > 100: %d\n", U128H_GT(U128H_100, U128H_100), 0);
  TEST("101 > 100: %d\n", U128H_GT(U128H_101, U128H_100), 1);
  TEST("100 > 101: %d\n", U128H_GT(U128H_100, U128H_101), 0);
  TEST("100 <= 100: %d\n", U128H_LEQ(U128H_100, U128H_100), 1);
  TEST("101 <= 100: %d\n", U128H_LEQ(U128H_101, U128H_100), 0);
  TEST("100 <= 101: %d\n", U128H_LEQ(U128H_100, U128H_101), 1);
  TEST("100 >= 100: %d\n", U128H_GEQ(U128H_100, U128H_100), 1);
  TEST("101 >= 100: %d\n", U128H_GEQ(U128H_101, U128H_100), 1);
  TEST("100 >= 101: %d\n", U128H_GEQ(U128H_100, U128H_101), 0);
  TEST("32 / 4: %zu\n", (uint64_t)U128H_CONVERT(U128H_DIV(U128H_32, U128H_4)), 8);
  TEST("34 %% 4: %zu\n", (uint64_t)U128H_CONVERT(U128H_REM(U128H_34, U128H_4)), 2);
  TEST("100 << 1: %zu\n", (uint64_t)U128H_CONVERT(U128H_LSH1(U128H_100)), 200);
  TEST("100 << 2: %zu\n", (uint64_t)U128H_CONVERT(U128H_LSH2(U128H_100)), 400);
  TEST("100 << 3: %zu\n", (uint64_t)U128H_CONVERT(U128H_LSH3(U128H_100)), 800);
  TEST("100 << 46: %zu\n", (uint64_t)U128H_CONVERT(U128H_LSH46(U128H_100)), 7036874417766400);
  TEST("100 >> 1: %zu\n", (uint64_t)U128H_CONVERT(U128H_RSH1(U128H_100)), 50);
  TEST("100 >> 2: %zu\n", (uint64_t)U128H_CONVERT(U128H_RSH2(U128H_100)), 25);
  TEST("100 >> 3: %zu\n", (uint64_t)U128H_CONVERT(U128H_RSH3(U128H_100)), 12);
  TEST("70368744177664 >> 23: %zu\n", (uint64_t)U128H_CONVERT(U128H_RSH23(U128H_70368744177664)), 8388608);
  TEST("32 ^ 4: %zu\n", (uint64_t)U128H_CONVERT(U128H_POW(U128H_32, U128H_4)), 1048576);
  TEST("9 ^ 9: %zu\n", (uint64_t)U128H_CONVERT(U128H_POW(U128H_9, U128H_9)), 387420489);
  TEST("sqrt(16): %zu\n", (uint64_t)U128H_CONVERT(U128H_SQRT(U128H_16)), 4);
  TEST("sqrt(28): %zu\n", (uint64_t)U128H_CONVERT(U128H_SQRT(U128H_28)), 5);
  TEST("sqrt(0x800): %zu\n", (uint64_t)U128H_CONVERT(U128H_SQRT(U128H(8 0 0))), 0x2d);
  TEST("log2(32): %zu\n", (uint64_t)U128H_CONVERT(U128H_LOG2(U128H_32)), 5);
  TEST("log(125,5): %zu\n", (uint64_t)U128H_CONVERT(U128H_LOG(U128H_125, U128H_5)), 3);
  TEST("41 | 27: %zu\n", (uint64_t)U128H_CONVERT(U128H_OR(U128H_41, U128H_27)), 59);
  TEST("41 & 27: %zu\n", (uint64_t)U128H_CONVERT(U128H_AND(U128H_41, U128H_27)), 9);
  TEST("41 $ 27: %zu\n", (uint64_t)U128H_CONVERT(U128H_XOR(U128H_41, U128H_27)), 50);
#endif

#ifdef FP32_WITH_SIGN_DEBUG
  TEST("with_sign(32,0): %f\n", FP32_CONVERT(FP32_WITH_SIGN(FP32_32, 0)), 32.0);
  TEST("with_sign(32,1): %f\n", FP32_CONVERT(FP32_WITH_SIGN(FP32_32, 1)), -32.0);
#endif

#ifdef FP32_TRUNC_NEGATIVE_DEBUG
  TEST("trunc(-sqrt(32)): %f\n", FP32_CONVERT(FP32_TRUNC(FP32_NEG(FP32_SQRT(FP32_32)))), -5.0);
#endif

#ifdef FP32_POW_I_DEBUG
  TEST("3 ^ 3: %f\n", FP32_CONVERT(FP32_POW_I(FP32_3, U32_3)), 27.0);
  TEST("e ^ 2: %f\n", FP32_CONVERT(FP32_POW_I(FP32_EULER, U32_2)), expf(2.0));
  TEST("e ^ 5: %f\n", FP32_CONVERT(FP32_POW_I(FP32_EULER, U32_5)), expf(5.0));
  TEST("exp(2.5): %f\n", FP32_CONVERT(FP32_EXP(FP32_DIV(FP32_5, FP32_2))), expf(2.5));
#endif

#ifdef FP32_POW_DEBUG
  TEST("2 ^ 1.5: %f\n", FP32_CONVERT(FP32_POW(FP32_2, FP32_DIV(FP32_3, FP32_2))), powf(2.0, 1.5));
  TEST("2 ^ 1.25: %f\n", FP32_CONVERT(FP32_POW(FP32_2, FP32_DIV(FP32_5, FP32_4))), powf(2.0, 1.25));
  TEST("2 ^ 1.75: %f\n", FP32_CONVERT(FP32_POW(FP32_2, FP32_DIV(FP32_7, FP32_4))), powf(2.0, 1.75));
  TEST("2 ^ 1.8: %f\n", FP32_CONVERT(FP32_POW(FP32_2, FP32_DIV(FP32_9, FP32_5))), powf(2.0, 1.8));
#endif

#ifdef FP32_EXP2_DEBUG
  TEST("exp2(1.5): %f\n", FP32_CONVERT(FP32_EXP2(FP32_DIV(FP32_3, FP32_2))), powf(2.0, 1.5));
#endif

#ifdef FP32_LOG2_DEBUG
  TEST("from_i32(-5): %f\n", FP32_CONVERT(FP32_FROM_I32(I32_N5)), -5.0);
  TEST("log2i(1/20): %f\n", FP32_CONVERT(FP32_LOG2_I(FP32_DIV(FP32_1, FP32_20))), -5.0);
  TEST("log2(1/20): %f\n", FP32_CONVERT(FP32_LOG2(FP32_DIV(FP32_1, FP32_20))), log2f(1.0/20.0));
#endif

#ifdef FP32_ADD_SIGN_DEBUG
  TEST("-5.0 + 0.5: %f\n", FP32_CONVERT(FP32_ADD(FP32_N5, FP32_1L2)), -4.5);
  TEST("-5.0 + (-3): %f\n", FP32_CONVERT(FP32_ADD(FP32_N5, FP32_N3)), -8.0);
  TEST("-5.0 + 6.0: %f\n", FP32_CONVERT(FP32_ADD(FP32_N5, FP32_6)), 1.0);
  TEST("-5.0 + (-6.0): %f\n", FP32_CONVERT(FP32_ADD(FP32_N5, FP32_N6)), -11.0);
  TEST("5.0 + 0.5: %f\n", FP32_CONVERT(FP32_ADD(FP32_5, FP32_1L2)), 5.5);
  TEST("5.0 + (-3): %f\n", FP32_CONVERT(FP32_ADD(FP32_5, FP32_N3)), 2.0);
  TEST("5.0 + 6.0: %f\n", FP32_CONVERT(FP32_ADD(FP32_5, FP32_6)), 11.0);
  TEST("5.0 + (-6.0): %f\n", FP32_CONVERT(FP32_ADD(FP32_5, FP32_N6)), -1.0);
#endif

#ifdef SIGNED_HEX_DEBUG
  printf("\nSIGNED HEX 32\n\n");

  TEST("is_odd(14): %d\n" , I32H_IS_ODD(I32H_14), 0);
  TEST("is_even(14): %d\n", I32H_IS_EVEN(I32H_14), 1);
  TEST("-13 > 12: %d\n" ,   I32H_GT(I32H_N13, I32H_12), 0);
  TEST("-13 > -14: %d\n",   I32H_GT(I32H_N13, I32H_N14), 1);
  TEST("15 > 14: %d\n",     I32H_GT(I32H_15, I32H_14), 1);
  TEST("15 > -18: %d\n" ,   I32H_GT(I32H_15, I32H_N18), 1);

  TEST("-13 < 12: %d\n" , I32H_LT(I32H_N13, I32H_12), 1);
  TEST("-13 < -14: %d\n", I32H_LT(I32H_N13, I32H_N14), 0);
  TEST("15 < 14: %d\n"  , I32H_LT(I32H_15, I32H_14), 0);
  TEST("15 < -18: %d\n" , I32H_LT(I32H_15, I32H_N18), 0);

  TEST("-13 >= 12: %d\n" , I32H_GEQ(I32H_N13, I32H_12), 0);
  TEST("-13 >= -14: %d\n", I32H_GEQ(I32H_N13, I32H_N14), 1);
  TEST("15 >= 14: %d\n"  , I32H_GEQ(I32H_15, I32H_14), 1);
  TEST("15 >= -18: %d\n" , I32H_GEQ(I32H_15, I32H_N18), 1);

  TEST("-13 <= 12: %d\n" , I32H_LEQ(I32H_N13, I32H_12), 1);
  TEST("-13 <= -14: %d\n", I32H_LEQ(I32H_N13, I32H_N14), 0);
  TEST("15 <= 14: %d\n"  , I32H_LEQ(I32H_15, I32H_14), 0);
  TEST("15 <= -18: %d\n" , I32H_LEQ(I32H_15, I32H_N18), 0);

  TEST("-13 == 13: %d\n" , I32H_EQ(I32H_N13, I32H_13), 0);
  TEST("-13 == -13: %d\n", I32H_EQ(I32H_N13, I32H_N13), 1);
  TEST("13 == 13: %d\n"  , I32H_LEQ(I32H_13, I32H_13), 1);

  TEST("-13 != 13: %d\n" , I32H_NEQ(I32H_N13, I32H_13), 1);
  TEST("-13 != -13: %d\n", I32H_NEQ(I32H_N13, I32H_N13), 0);
  TEST("13 != 13: %d\n"  , I32H_NEQ(I32H_13, I32H_13), 0);

  TEST("convert(I32H_100): %d\n", I32H_CONVERT(I32H_100), 100);
  TEST("convert(I32H_N100): %d\n", I32H_CONVERT(I32H_N100), -100);

  TEST("-(132): %d\n", I32H_CONVERT(I32H_NEG(I32H_132)), -132);
  TEST("-(-132): %d\n", I32H_CONVERT(I32H_NEG(I32H_N132)), 132);
  TEST("abs(132): %d\n", I32H_CONVERT(I32H_ABS(I32H_132)), 132);
  TEST("abs(-132): %d\n", I32H_CONVERT(I32H_ABS(I32H_N132)), 132);

  TEST("10 + (-5): %d\n", I32H_CONVERT(I32H_ADD(I32H_10, I32H_N5)), 5);
  TEST("10 + (-15): %d\n", I32H_CONVERT(I32H_ADD(I32H_10, I32H_N15)), -5);
  TEST("(-5) + (-15): %d\n", I32H_CONVERT(I32H_ADD(I32H_N5, I32H_N15)), -20);

  TEST("(-3) * (-5): %d\n", I32H_CONVERT(I32H_MUL(I32H_N3, I32H_N5)), 15);
  TEST("3 * (-5): %d\n", I32H_CONVERT(I32H_MUL(I32H_3, I32H_N5)), -15);
  TEST("3 * 5: %d\n", I32H_CONVERT(I32H_MUL(I32H_3, I32H_5)), 15);

  TEST("15 / (-5): %d\n", I32H_CONVERT(I32H_DIV(I32H_15, I32H_N5)), -3);
  TEST("(-15) / (-5): %d\n", I32H_CONVERT(I32H_DIV(I32H_N15, I32H_N5)), 3);
  TEST("(-15) / 5: %d\n", I32H_CONVERT(I32H_DIV(I32H_N15, I32H_5)), -3);
  TEST("15 / 5: %d\n", I32H_CONVERT(I32H_DIV(I32H_15, I32H_5)), 3);
  TEST("20 / 5: %d\n", I32H_CONVERT(I32H_DIV(I32H_20, I32H_5)), 4);

  TEST("16 %% 7: %d\n", I32H_CONVERT(I32H_REM(I32H_16, I32H_7)), 2);
  TEST("(-16) %% 7: %d\n", I32H_CONVERT(I32H_REM(I32H_N16, I32H_7)), -2);
  TEST("16 %% (-7): %d\n", I32H_CONVERT(I32H_REM(I32H_16, I32H_N7)), 2);
  TEST("(-16) %% (-7): %d\n", I32H_CONVERT(I32H_REM(I32H_N16, I32H_N7)), -2);

  TEST("100 << 1:   %d\n", I32H_CONVERT(I32H_LSH(I32H_100, I32H_1)), 200);
  TEST("100 << -1:  %d\n", I32H_CONVERT(I32H_LSH(I32H_100, I32H_N1)), 50);
  TEST("-100 << 1:  %d\n", I32H_CONVERT(I32H_LSH(I32H_N100, I32H_1)), -200);
  TEST("-100 << -1: %d\n", I32H_CONVERT(I32H_LSH(I32H_N100, I32H_N1)), -50);

  TEST("100 >> 1:   %d\n", I32H_CONVERT(I32H_RSH(I32H_100, I32H_1)), 50);
  TEST("100 >> -1:  %d\n", I32H_CONVERT(I32H_RSH(I32H_100, I32H_N1)), 200);
  TEST("-100 >> 1:  %d\n", I32H_CONVERT(I32H_RSH(I32H_N100, I32H_1)), -50);
  TEST("-100 >> -1: %d\n", I32H_CONVERT(I32H_RSH(I32H_N100, I32H_N1)), -200);
  
  TEST("max(200,32):   %d\n", I32H_CONVERT(I32H_MAX(I32H_200,  I32H_32)), 200);
  TEST("max(-200,32):  %d\n", I32H_CONVERT(I32H_MAX(I32H_N200, I32H_32)), 32);
  TEST("max(200,-32):  %d\n", I32H_CONVERT(I32H_MAX(I32H_200, I32H_N32)), 200);
  TEST("max(-200,-32): %d\n", I32H_CONVERT(I32H_MAX(I32H_N200, I32H_N32)), -32);
  
  TEST("min(200,32):   %d\n", I32H_CONVERT(I32H_MIN(I32H_200,  I32H_32)), 32);
  TEST("min(-200,32):  %d\n", I32H_CONVERT(I32H_MIN(I32H_N200, I32H_32)), -200);
  TEST("min(200,-32):  %d\n", I32H_CONVERT(I32H_MIN(I32H_200, I32H_N32)), -32);
  TEST("min(-200,-32): %d\n", I32H_CONVERT(I32H_MIN(I32H_N200, I32H_N32)), -200);

  TEST("10^3:       %d\n", I32H_CONVERT(I32H_POW(I32H_10,  I32H_3)), 1000);
  TEST("10^(-3):    %d\n", I32H_CONVERT(I32H_POW(I32H_10,  I32H_N3)), 0);
  TEST("(-10)^3:    %d\n", I32H_CONVERT(I32H_POW(I32H_N10, I32H_3)), -1000);
  TEST("(-10)^(-3): %d\n", I32H_CONVERT(I32H_POW(I32H_N10, I32H_N3)), 0);
 
  TEST("-2^0: %d\n", I32H_CONVERT(I32H_POW(I32H_N2,  I32H_0)), 1);
  TEST("2^0: %d\n", I32H_CONVERT(I32H_POW(I32H_2,  I32H_0)), 1);
  TEST("0^0: %d\n", I32H_CONVERT(I32H_POW(I32H_0,  I32H_0)), 1);

  TEST("sqrt(0): %d\n", I32H_CONVERT(I32H_SQRT(I32H_0)), 0);
  TEST("sqrt(16): %d\n", I32H_CONVERT(I32H_SQRT(I32H_16)), 4);
  TEST("sqrt(intmax): %d\n", I32H_CONVERT(I32H_SQRT(I32H_MAXV)), 46340);

  TEST("log(81,3): %d\n", I32H_CONVERT(I32H_LOG(I32H_81, I32H_3)), 4);
  TEST("log2(32): %d\n", I32H_CONVERT(I32H_LOG2(I32H_32)), 5);

  TEST("100 & -32: %d\n", I32H_CONVERT(I32H_AND(I32H_100, I32H_N32)), 96);
  TEST("1 | 6: %d\n", I32H_CONVERT(I32H_OR(I32H_1, I32H_6)), 7);
  TEST("5 $ 7: %d\n", I32H_CONVERT(I32H_XOR(I32H_5, I32H_7)), 2);
#endif

#ifdef FP32H_DEBUG
  printf("\nFLOAT HEX 32\n\n");

  TEST("convert(FP32H_0):   %.1f\n", FP32H_CONVERT(FP32H_0), 0.0);
  TEST("convert(FP32H_1):   %.1f\n", FP32H_CONVERT(FP32H_1), 1.0);
  TEST("convert(FP32H_150): %.1f\n", FP32H_CONVERT(FP32H_150), 150.0);

  TEST("exponent(1.0): %d\n", U32H_CONVERT(FP32H_EXPONENT(FP32H_1)), 0);
  TEST("exponent(2.0): %d\n", U32H_CONVERT(FP32H_EXPONENT(FP32H_2)), 1);
  TEST("exponent(8.0): %d\n", U32H_CONVERT(FP32H_EXPONENT(FP32H_8)), 3);

  TEST("mantissa(1.0): %d\n", U32H_CONVERT(FP32H_MANTISSA(FP32H_1)), 8388608);
  TEST("mantissa(3.0): %d\n", U32H_CONVERT(FP32H_MANTISSA(FP32H_3)), 12582912);
  TEST("mantissa(15.0): %d\n", U32H_CONVERT(FP32H_MANTISSA(FP32H_15)), 15728640);

  TEST("20.0 > 10.0: %d\n", FP32H_GT(FP32H_20, FP32H_10), 1);
  TEST("32.0 > 42.0: %d\n", FP32H_GT(FP32H_32, FP32H_42), 0);
  TEST("50.0 > 50.0: %d\n", FP32H_GT(FP32H_50, FP32H_50), 0);

  TEST("20.0 < 10.0: %d\n", FP32H_LT(FP32H_20, FP32H_10), 0);
  TEST("32.0 < 42.0: %d\n", FP32H_LT(FP32H_32, FP32H_42), 1);
  TEST("50.0 < 50.0: %d\n", FP32H_LT(FP32H_50, FP32H_50), 0);

  TEST("20.0 <= 10.0: %d\n", FP32H_LEQ(FP32H_20, FP32H_10), 0);
  TEST("32.0 <= 42.0: %d\n", FP32H_LEQ(FP32H_32, FP32H_42), 1);
  TEST("50.0 <= 50.0: %d\n", FP32H_LEQ(FP32H_50, FP32H_50), 1);

  TEST("20.0 >= 10.0: %d\n", FP32H_GEQ(FP32H_20, FP32H_10), 1);
  TEST("32.0 >= 42.0: %d\n", FP32H_GEQ(FP32H_32, FP32H_42), 0);
  TEST("50.0 >= 50.0: %d\n", FP32H_GEQ(FP32H_50, FP32H_50), 1);

  TEST("20.0 == 10.0: %d\n", FP32H_EQ(FP32H_20, FP32H_10), 0);
  TEST("32.0 == 42.0: %d\n", FP32H_EQ(FP32H_32, FP32H_42), 0);
  TEST("50.0 == 50.0: %d\n", FP32H_EQ(FP32H_50, FP32H_50), 1);

  TEST("15.0 + 12.0: %.1f\n", FP32H_CONVERT(FP32H_ADD(FP32H_15, FP32H_12)), 27.0);
  TEST("40.0 + (-12.0): %.1f\n", FP32H_CONVERT(FP32H_ADD(FP32H_40, FP32H_N12)), 28.0);
  TEST("40.0 + (-42.0): %.1f\n", FP32H_CONVERT(FP32H_ADD(FP32H_40, FP32H_N42)), -2);
  TEST("40.0 + (-112.0): %.1f\n", FP32H_CONVERT(FP32H_ADD(FP32H_40, FP32H_N112)), -72.0);
  TEST("(-28.0) + (-112.0): %.1f\n", FP32H_CONVERT(FP32H_ADD(FP32H_N28, FP32H_N112)), -140.0);
  TEST("(-28.0) + 112.0: %.1f\n", FP32H_CONVERT(FP32H_ADD(FP32H_N28, FP32H_112)), 84.0);
  TEST("0.5 + 0.25: %.2f\n", FP32H_CONVERT(FP32H_ADD(FP32H_1L2, FP32H_1L4)), 0.75);
  TEST("0.5 + 0.5: %.1f\n", FP32H_CONVERT(FP32H_ADD(FP32H_1L2, FP32H_1L2)), 1.0);
  TEST("1.0 + 0.5: %.1f\n", FP32H_CONVERT(FP32H_ADD(FP32H_1, FP32H_1L2)), 1.5);

  TEST("2.0 * 2.0: %.1f\n", FP32H_CONVERT(FP32H_MUL(FP32H_2, FP32H_2)), 4.0);
  TEST("15.0 * 5.0: %.1f\n", FP32H_CONVERT(FP32H_MUL(FP32H_15, FP32H_5)), 75.0);
  TEST("1024.0 * 2048.0: %.1f\n", FP32H_CONVERT(FP32H_MUL(FP32HP(1 0 2 4), FP32HP(2 0 4 8))), 2097152.0);
  TEST("32.0 / 4.0: %.1f\n", FP32H_CONVERT(FP32H_DIV(FP32H_32, FP32H_4)), 8.0);
  TEST("2.0 / 4.0: %.1f\n", FP32H_CONVERT(FP32H_DIV(FP32H_2, FP32H_4)), 0.5);
  TEST("27.0 / 3.0: %.1f\n", FP32H_CONVERT(FP32H_DIV(FP32H_27, FP32H_3)), 9.0);
  TEST("1.0 / 3.0: %.2f\n", FP32H_CONVERT(FP32H_DIV(FP32H_1, FP32H_3)), 1.0/3.0);
  TEST("sqrt(32.0): %.2f\n", FP32H_CONVERT(FP32H_SQRT(FP32H_32)), sqrtf(32.0));
  TEST("fp32_from_u32(0): %.1f\n", FP32H_CONVERT(FP32H_FROM_U32H(U32H_0)), 0.0);
  TEST("fp32_from_u32(10): %.1f\n", FP32H_CONVERT(FP32H_FROM_U32H(U32H_10)), 10.0);
  TEST("fp32_from_u32(32): %.1f\n", FP32H_CONVERT(FP32H_FROM_U32H(U32H_32)), 32.0);
  TEST("fp32_to_u32(0): %d\n", U32H_CONVERT(FP32H_TO_U32(FP32H_0)), 0);
  TEST("fp32_to_u32(10): %d\n", U32H_CONVERT(FP32H_TO_U32(FP32H_10)), 10);
  TEST("fp32_to_u32(32): %d\n", U32H_CONVERT(FP32H_TO_U32(FP32H_32)), 32);
  TEST("log2(5.0): %.4f\n", FP32H_CONVERT(FP32H_LOG2(FP32H_5)), log2f(5.0));
  TEST("log2(32.0): %.4f\n", FP32H_CONVERT(FP32H_LOG2(FP32H_32)), log2f(32.0));
  TEST("log2(36.0): %.4f\n", FP32H_CONVERT(FP32H_LOG2(FP32H_36)), log2f(36.0));
  TEST("log(125.0, 5.0): %.4f\n", FP32H_CONVERT(FP32H_LOG(FP32H_125, FP32H_5)), logf(125.0)/logf(5.0));
  TEST("fract(sqrt(32)): %.4f\n", FP32H_CONVERT(FP32H_FRACT(FP32H_SQRT(FP32H_32))), sqrtf(32.0) - 5.0);
  TEST("trunc(sqrt(32)): %.4f\n", FP32H_CONVERT(FP32H_TRUNC(FP32H_SQRT(FP32H_32))), 5.0);
  TEST("powi(125.0, 0): %.4f\n", FP32H_CONVERT(FP32H_POW_I(FP32H_125, U32H_0)), 1.0);
  TEST("exp(1.5): %.4f\n", FP32H_CONVERT(FP32H_EXP(FP32H_ADD(FP32H_1, FP32H_1L2))), expf(1.5));

  TEST("is_nan(0): %d\n", FP32H_IS_NAN(FP32H_0), 0);
  TEST("is_nan(NaN): %d\n", FP32H_IS_NAN(FP32H_NAN), 1);
  TEST("is_nan(Inf): %d\n", FP32H_IS_NAN(FP32H_INF), 0);

  TEST("is_inf(0): %d\n", FP32H_IS_INF(FP32H_0), 0);
  TEST("is_inf(NaN): %d\n", FP32H_IS_INF(FP32H_NAN), 0);
  TEST("is_inf(Inf): %d\n", FP32H_IS_INF(FP32H_INF), 1);

  TEST("is_zero(0): %d\n", FP32H_IS_ZERO(FP32H_0), 1);
  TEST("is_zero(NaN): %d\n", FP32H_IS_ZERO(FP32H_NAN), 0);
  TEST("is_zero(Inf): %d\n", FP32H_IS_ZERO(FP32H_INF), 0);
#endif

#ifdef FP32H_EXTRA_DEBUG
  TEST("with_sign(32,0): %f\n", FP32H_CONVERT(FP32H_WITH_SIGN(FP32H_32, 0)), 32.0);
  TEST("with_sign(32,1): %f\n", FP32H_CONVERT(FP32H_WITH_SIGN(FP32H_32, 1)), -32.0);

  TEST("trunc(-sqrt(32)): %f\n", FP32H_CONVERT(FP32H_TRUNC(FP32H_NEG(FP32H_SQRT(FP32H_32)))), -5.0);

  TEST("3 ^ 3: %f\n", FP32H_CONVERT(FP32H_POW_I(FP32H_3, U32H_3)), 27.0);
  TEST("e ^ 2: %f\n", FP32H_CONVERT(FP32H_POW_I(FP32H_EULER, U32H_2)), expf(2.0));
  TEST("e ^ 5: %f\n", FP32H_CONVERT(FP32H_POW_I(FP32H_EULER, U32H_5)), expf(5.0));
  TEST("exp(2.5): %f\n", FP32H_CONVERT(FP32H_EXP(FP32H_DIV(FP32H_5, FP32H_2))), expf(2.5));

  TEST("2 ^ 1.5: %f\n", FP32H_CONVERT(FP32H_POW(FP32H_2, FP32H_DIV(FP32H_3, FP32H_2))), powf(2.0, 1.5));
  TEST("2 ^ 1.25: %f\n", FP32H_CONVERT(FP32H_POW(FP32H_2, FP32H_DIV(FP32H_5, FP32H_4))), powf(2.0, 1.25));
  TEST("2 ^ 1.75: %f\n", FP32H_CONVERT(FP32H_POW(FP32H_2, FP32H_DIV(FP32H_7, FP32H_4))), powf(2.0, 1.75));
  TEST("2 ^ 1.8: %f\n", FP32H_CONVERT(FP32H_POW(FP32H_2, FP32H_DIV(FP32H_9, FP32H_5))), powf(2.0, 1.8));

  TEST("exp2(1.5): %f\n", FP32H_CONVERT(FP32H_EXP2(FP32H_DIV(FP32H_3, FP32H_2))), exp2f(1.5));

  TEST("from_i32h(-5): %f\n", FP32H_CONVERT(FP32H_FROM_I32H(I32H_N5)), -5.0);
  TEST("log2i(0.05): %f\n", FP32H_CONVERT(FP32H_LOG2_I(FP32H_DIV(FP32H_1, FP32H_20))), -5.0);
  TEST("log2(0.05): %f\n", FP32H_CONVERT(FP32H_LOG2(FP32H_DIV(FP32H_1, FP32H_20))), log2f(1.0/20.0));
#endif

#ifdef FP32H_ADD_SIGNS_DEBUG
  TEST("-5.0 + 0.5: %f\n", FP32H_CONVERT(FP32H_ADD(FP32H_N5, FP32H_1L2)), -4.5);
  TEST("-5.0 + (-3): %f\n", FP32H_CONVERT(FP32H_ADD(FP32H_N5, FP32H_N3)), -8.0);
  TEST("-5.0 + 6.0: %f\n", FP32H_CONVERT(FP32H_ADD(FP32H_N5, FP32H_6)), 1.0);
  TEST("-5.0 + (-6.0): %f\n", FP32H_CONVERT(FP32H_ADD(FP32H_N5, FP32H_N6)), -11.0);
  TEST("5.0 + 0.5: %f\n", FP32H_CONVERT(FP32H_ADD(FP32H_5, FP32H_1L2)), 5.5);
  TEST("5.0 + (-3): %f\n", FP32H_CONVERT(FP32H_ADD(FP32H_5, FP32H_N3)), 2.0);
  TEST("5.0 + 6.0: %f\n", FP32H_CONVERT(FP32H_ADD(FP32H_5, FP32H_6)), 11.0);
  TEST("5.0 + (-6.0): %f\n", FP32H_CONVERT(FP32H_ADD(FP32H_5, FP32H_N6)), -1.0);
#endif

#ifdef FP32_FLOOR_DEBUG
  TEST("trunc(1.0): %f\n", FP32_CONVERT(FP32_TRUNC(FP32_1)), 1.0);
  TEST("trunc(1.5): %f\n", FP32_CONVERT(FP32_TRUNC(FP32_ADD(FP32_1,FP32_1L2))), 1.0);
  TEST("trunc(-1.5): %f\n", FP32_CONVERT(FP32_TRUNC(FP32_NEG(FP32_ADD(FP32_1,FP32_1L2)))), -1.0);
  TEST("trunc(-2.0): %f\n", FP32_CONVERT(FP32_TRUNC(FP32_N2)), -2.0);
  
  TEST("floor(1.0): %f\n", FP32_CONVERT(FP32_FLOOR(FP32_1)), 1.0);
  TEST("floor(1.5): %f\n", FP32_CONVERT(FP32_FLOOR(FP32_ADD(FP32_1,FP32_1L2))), 1.0);
  TEST("floor(-1.5): %f\n", FP32_CONVERT(FP32_FLOOR(FP32_NEG(FP32_ADD(FP32_1,FP32_1L2)))), -2.0);
  TEST("floor(-2.0): %f\n", FP32_CONVERT(FP32_FLOOR(FP32_N2)), -2.0);
  
  TEST("ceil(1.0): %f\n", FP32_CONVERT(FP32_CEIL(FP32_1)), 1.0);
  TEST("ceil(1.5): %f\n", FP32_CONVERT(FP32_CEIL(FP32_ADD(FP32_1,FP32_1L2))), 2.0);
  TEST("ceil(-1.5): %f\n", FP32_CONVERT(FP32_CEIL(FP32_NEG(FP32_ADD(FP32_1,FP32_1L2)))), -1.0);
  TEST("ceil(-2.0): %f\n", FP32_CONVERT(FP32_CEIL(FP32_N2)), -2.0);
#endif

#ifdef FP32H_FLOOR_DEBUG
  TEST("trunc(1.0): %f\n", FP32H_CONVERT(FP32H_TRUNC(FP32H_1)), 1.0);
  TEST("trunc(1.5): %f\n", FP32H_CONVERT(FP32H_TRUNC(FP32H_ADD(FP32H_1,FP32H_1L2))), 1.0);
  TEST("trunc(-1.5): %f\n", FP32H_CONVERT(FP32H_TRUNC(FP32H_NEG(FP32H_ADD(FP32H_1,FP32H_1L2)))), -1.0);
  TEST("trunc(-2.0): %f\n", FP32H_CONVERT(FP32H_TRUNC(FP32H_N2)), -2.0);
  
  TEST("floor(1.0): %f\n", FP32H_CONVERT(FP32H_FLOOR(FP32H_1)), 1.0);
  TEST("floor(1.5): %f\n", FP32H_CONVERT(FP32H_FLOOR(FP32H_ADD(FP32H_1,FP32H_1L2))), 1.0);
  TEST("floor(-1.5): %f\n", FP32H_CONVERT(FP32H_FLOOR(FP32H_NEG(FP32H_ADD(FP32H_1,FP32H_1L2)))), -2.0);
  TEST("floor(-2.0): %f\n", FP32H_CONVERT(FP32H_FLOOR(FP32H_N2)), -2.0);
  
  TEST("ceil(1.0): %f\n", FP32H_CONVERT(FP32H_CEIL(FP32H_1)), 1.0);
  TEST("ceil(1.5): %f\n", FP32H_CONVERT(FP32H_CEIL(FP32H_ADD(FP32H_1,FP32H_1L2))), 2.0);
  TEST("ceil(-1.5): %f\n", FP32H_CONVERT(FP32H_CEIL(FP32H_NEG(FP32H_ADD(FP32H_1,FP32H_1L2)))), -1.0);
  TEST("ceil(-2.0): %f\n", FP32H_CONVERT(FP32H_CEIL(FP32H_N2)), -2.0);
#endif

#ifdef VECTOR_DEBUG
  TEST("vector(): %s\n", STRING(VECTOR32()), "(0,())");
  TEST("vector(1,2,3): %s\n", STRING(VECTOR32(1,2,3)), "(3,(1,2,3))");
  TEST("push(<1,2,3>,4): %s\n", STRING(VECTOR32_PUSH(VECTOR32(1,2,3),4)), "(4,(1,2,3,4))");
  TEST("nth(<1,2,3>,1): %d\n", VECTOR32_NTH(VECTOR32(1,2,3),1), 2);
  TEST("as_array(<1,2,3>): %s\n", STRING(VECTOR32_AS_ARRAY(VECTOR32(1,2,3))), "(typeof(1)[3]){1,2,3}");
  TEST("map(F,<1,2,3>): %s\n", STRING(VECTOR32_MAP(F,VECTOR32(1,2,3))), "(3,(F(1),F(2),F(3)))");
  TEST("concat(<1,2,3>,<4,5,6>): %s\n", STRING(VECTOR32_CONCAT(VECTOR32(1,2,3), VECTOR32(4,5,6))), "(6,(1,2,3,4,5,6))");
  TEST("contains(eq0, <1,2,3>): %d\n", VECTOR32_CONTAINS(EQZ, VECTOR32(1,2,3)), 0);
  TEST("contains(eq0, <0,1,2>): %d\n", VECTOR32_CONTAINS(EQZ, VECTOR32(0,1,2)), 1);
  TEST("as_list(<1,2,3>): %s\n", STRING(VECTOR32_AS_LIST(VECTOR32(1,2,3))), STRING(LIST(1,2,3)));
  TEST("take(<1,2,3,4,5,6>,4): %s\n", STRING(VECTOR32_TAKE(VECTOR32(1,2,3,4,5,6), 4)), "(4,(1,2,3,4))");
  TEST("take_last(<1,2,3,4,5,6>,2): %s\n", STRING(VECTOR32_TAKE_LAST(VECTOR32(1,2,3,4,5,6), 2)), "(2,(5,6))");
  TEST("take_nth(<1,2,3,4,5,6>,2): %s\n", STRING(VECTOR32_TAKE_NTH(VECTOR32(1,2,3,4,5,6), 2)), "(3,(2,4,6))");
  TEST("take_while(diff0,<1,2,3,0,3,2,1>): %s\n", STRING(VECTOR32_TAKE_WHILE(NEQZ, VECTOR32(1,2,3,0,3,2,1))), "(3,(1,2,3))");
  TEST("drop(<1,2,3,4,5,6>,2): %s\n", STRING(VECTOR32_DROP(VECTOR32(1,2,3,4,5,6), 2)), "(4,(3,4,5,6))");
  TEST("drop_last(<1,2,3,4,5,6>,2): %s\n", STRING(VECTOR32_DROP_LAST(VECTOR32(1,2,3,4,5,6), 2)), "(4,(1,2,3,4))");
  TEST("drop_nth(<1,2,3,4,5,6>,2): %s\n", STRING(VECTOR32_DROP_NTH(VECTOR32(1,2,3,4,5,6), 2)), "(3,(1,3,5))");
  TEST("drop_while(neq0,<1,2,3,0,3,2,1>): %s\n", STRING(VECTOR32_DROP_WHILE(NEQZ, VECTOR32(1,2,3,0,3,2,1))), "(4,(0,3,2,1))");
  TEST("enumerate(<1,2,3>): %s\n", STRING(VECTOR32_ENUMERATE(VECTOR32(1,2,3))), "(3,((0,1),(1,2),(2,3)))");
  TEST("every(neq0, <1,2,3>): %d\n", VECTOR32_EVERY(NEQZ, VECTOR32(1,2,3)), 1);
  TEST("every(neq0, <1,2,0,3>): %d\n", VECTOR32_EVERY(NEQZ, VECTOR32(1,2,0,3)), 0);
  TEST("none(eq0, <1,2,3>): %d\n", VECTOR32_NONE(EQZ, VECTOR32(1,2,3)), 1);
  TEST("none(eq0, <1,2,0,3>): %d\n", VECTOR32_NONE(EQZ, VECTOR32(1,2,0,3)), 0);
  TEST("filter(neq0, <1,0,2,0,3>): %s\n", STRING(VECTOR32_FILTER(NEQZ, VECTOR32(1,0,2,0,3))), "(3,(1,2,3))");
  TEST("filter(eq0, <1,0,2,0,3>): %s\n", STRING(VECTOR32_FILTER(EQZ, VECTOR32(1,0,2,0,3))), "(2,(0,0))");
  TEST("remove(eq0, <1,0,2,0,3>): %s\n", STRING(VECTOR32_REMOVE(EQZ, VECTOR32(1,0,2,0,3))), "(3,(1,2,3))");
  TEST("remove(neq0, <1,0,2,0,3>): %s\n", STRING(VECTOR32_REMOVE(NEQZ, VECTOR32(1,0,2,0,3))), "(2,(0,0))");
  TEST("first(<1,2,3>): %d\n", VECTOR32_FIRST(VECTOR32(1,2,3)), 1);
  TEST("rest(<1,2,3>): %s\n", STRING(VECTOR32_REST(VECTOR32(1,2,3))), "(2,(2,3))");
  TEST("last(<1,2,3>): %d\n", VECTOR32_LAST(VECTOR32(1,2,3)), 3);
  TEST("find_first(neq0, <0,0,3,2,1>): %d\n", VECTOR32_FIND_FIRST(NEQZ, VECTOR32(0,0,3,2,1)), 3);
  TEST("find_index(neq0, <0,0,3,2,1>): %d\n", VECTOR32_FIND_INDEX(NEQZ, VECTOR32(0,0,3,2,1)), 2);
  TEST("foldl(f, <1,2,3>): %s\n", STRING(VECTOR32_FOLDL(F, VECTOR32(1,2,3))), "F(F(1,2),3)");
  TEST("foldl(f, <1,2,3>, 0): %s\n", STRING(VECTOR32_FOLDL(F, VECTOR32(1,2,3), 0)), "F(F(F(0,1),2),3)");
  TEST("foldr(f, <1,2,3>): %s\n", STRING(VECTOR32_FOLDR(F, VECTOR32(1,2,3))), "F(3,F(2,1))");
  TEST("foldr(f, <1,2,3>, 0): %s\n", STRING(VECTOR32_FOLDR(F, VECTOR32(1,2,3), 0)), "F(3,F(2,F(1,0)))");
  TEST("reduce(f, <1,2,3>): %s\n", STRING(VECTOR32_REDUCE(F, VECTOR32(1,2,3))), "F(F(1,2),3)");
  TEST("reduce(f, <1,2,3>, 0): %s\n", STRING(VECTOR32_REDUCE(F, VECTOR32(1,2,3), 0)), "F(F(F(0,1),2),3)");
  TEST("foreach(f, <1,2,3>): %s\n", STRING(VECTOR32_FOREACH(F, VECTOR32(1,2,3))), "F(1)F(2)F(3)");
  TEST("is_empty(<1,2,3>): %d\n", VECTOR32_IS_EMPTY(VECTOR32(1,2,3)), 0);
  TEST("is_empty(<>): %d\n", VECTOR32_IS_EMPTY(VECTOR32()), 1);
  TEST("is_vector(<1,2,3>): %d\n", IS_VECTOR32(VECTOR32(1,2,3)), 1);
  TEST("is_vector(<>): %d\n", IS_VECTOR32(VECTOR32()), 1);
  TEST("is_vector((0,1)): %d\n", IS_VECTOR32((0,1)), 0);
  TEST("is_vector(0): %d\n", IS_VECTOR32(0), 0);
  TEST("is_vector((1,(1),2)): %d\n", IS_VECTOR32((1,(1),2)), 0);
  TEST("is_vector([a,b,c]): %d\n", IS_VECTOR32(LIST(a,b,c)), 0);
  TEST("insert(<1,2,4>,3,2): %s\n", STRING(VECTOR32_INSERT(VECTOR32(1,2,4),3,2)), "(4,(1,2,3,4))");
  TEST("insert(<1,2,3>,0,0): %s\n", STRING(VECTOR32_INSERT(VECTOR32(1,2,3),0,0)), "(4,(0,1,2,3))");
  TEST("insert(<1,2,3>,X,4): %s\n", STRING(VECTOR32_INSERT(VECTOR32(1,2,3),X,4)), "OUT_OF_BOUNDS");
  TEST("interpose(<1,2,3>,0): %s\n", STRING(VECTOR32_INTERPOSE(VECTOR32(1,2,3),0)), "(5,(1,0,2,0,3))");
  TEST("map2(F,<1,2,3>,<4,5,6>): %s\n", STRING(VECTOR32_MAP2(F,VECTOR32(1,2,3),VECTOR32(4,5,6))), "(3,(F(1,4),F(2,5),F(3,6)))");
  TEST("mapcat(ID,<<1,2>,<3,4,5>>): %s\n", STRING(VECTOR32_MAPCAT(ID,VECTOR32(VECTOR32(1,2),VECTOR32(3,4,5)))), "(5,(1,2,3,4,5))");
  TEST("push_first(<1,2,3>,0): %s\n", STRING(VECTOR32_PUSH_FIRST(VECTOR32(1,2,3),0)), "(4,(0,1,2,3))");
  TEST("range(2,5): %s\n", STRING(VECTOR32_RANGE(2,5)), "(4,(2,3,4,5))");
  TEST("range(2,10,2): %s\n", STRING(VECTOR32_RANGE(2,10,2)), "(5,(2,4,6,8,10))");
  TEST("range(2,10,3): %s\n", STRING(VECTOR32_RANGE(2,10,3)), "(3,(2,5,8))");
  TEST("reverse(<1,2,3>): %s\n", STRING(VECTOR32_REVERSE(VECTOR32(1,2,3))), "(3,(3,2,1))");
  TEST("sort(<1,2,3,4>): %s\n", STRING(VECTOR32_SORT(DEC5_LT, VECTOR32(1,2,3,4))), "(4,(1,2,3,4))");
  TEST("sort(<4,3,2,1>): %s\n", STRING(VECTOR32_SORT(DEC5_LT, VECTOR32(4,3,2,1))), "(4,(1,2,3,4))");
  TEST("sort(<2,3,4,1>): %s\n", STRING(VECTOR32_SORT(DEC5_LT, VECTOR32(2,3,4,1))), "(4,(1,2,3,4))");
  TEST("sort(<2,4,3,1>): %s\n", STRING(VECTOR32_SORT(DEC5_LT, VECTOR32(2,4,3,1))), "(4,(1,2,3,4))");
  TEST("sort(<1,3,5,2,4,6>): %s\n", STRING(VECTOR32_SORT(DEC5_LT, VECTOR32(1,3,5,2,4,6))), "(6,(1,2,3,4,5,6))");
  TEST("sort(<1,3,5,2,4,6,7,9,8,11,12,10>): %s\n", STRING(VECTOR32_SORT(DEC5_LT, VECTOR32(1,3,5,2,4,6,7,9,8,11,12,10))), "(12,(1,2,3,4,5,6,7,8,9,10,11,12))");
  TEST("flatten(<<1,2>,<3,4,5>>): %s\n", STRING(VECTOR32_FLATTEN(VECTOR32(VECTOR32(1,2),VECTOR32(3,4,5)))), "(5,(1,2,3,4,5))");
  TEST("split(eq0, <1,0,2,0,3>): %s\n", STRING(VECTOR32_SPLIT(EQZ, VECTOR32(1,0,2,0,3))), "(2,((1,(1)),(3,(2,0,3))))");
  TEST("split_all(eq0, <1,0,2,0,3>): %s\n", STRING(VECTOR32_SPLIT_ALL(EQZ, VECTOR32(1,0,2,0,3))), "(3,((1,(1)),(1,(2)),(1,(3))))");
  TEST("walk(F,<<1,2>,<3,4,5>>): %s\n", STRING(VECTOR32_WALK(F,VECTOR32(VECTOR32(1,2),VECTOR32(3,4,5)))), "(2,((2,(F(1),F(2))),(3,(F(3),F(4),F(5)))))");
  TEST("csum(<1,2,3>): %d\n", VECTOR32_CSUM(VECTOR32(1,2,3)), 6);
#endif

#ifdef U8H_DEBUG
  TEST("0xff: %d\n", U8H_CONVERT(U8H(F F)), 0xff);
  TEST("144 + 100: %d\n", U8H_CONVERT(U8H_ADD(U8H_144, U8H_100)), 244);
  TEST("244 - 100: %d\n", U8H_CONVERT(U8H_SUB(U8H_244, U8H_100)), 144);
  TEST("7 * 20: %d\n", U8H_CONVERT(U8H_MUL(U8H_7, U8H_20)), 140);
  TEST("244 == 100: %d\n", U8H_EQ(U8H_244, U8H_100), 0);
  TEST("100 == 100: %d\n", U8H_EQ(U8H_100, U8H_100),1);
  TEST("100 < 100: %d\n", U8H_LT(U8H_100, U8H_100),0);
  TEST("100 < 101: %d\n", U8H_LT(U8H_100, U8H_101),1);
  TEST("101 < 100: %d\n", U8H_LT(U8H_101, U8H_100),0);
  TEST("100 >= 100: %d\n", U8H_GEQ(U8H_100, U8H_100),1);
  TEST("100 >= 101: %d\n", U8H_GEQ(U8H_100, U8H_101),0);
  TEST("101 >= 100: %d\n", U8H_GEQ(U8H_101, U8H_100),1);
  TEST("16 / 4: %d\n", U8H_CONVERT(U8H_DIV(U8H_16, U8H_4)), 4);
  TEST("18 %% 4: %d\n", U8H_CONVERT(U8H_REM(U8H_18, U8H_4)), 2);
  TEST("23 %% 4: %d\n", U8H_CONVERT(U8H_REM(U8H_23, U8H_4)), 3);
  TEST("32 >> 1: %d\n", U8H_CONVERT(U8H_RSH1(U8H_32)), 16);
  TEST("32 << 1: %d\n", U8H_CONVERT(U8H_LSH1(U8H_32)), 64);
  TEST("32 >> 2: %d\n", U8H_CONVERT(U8H_RSH(U8H_32, U8H_2)), 8);
  TEST("32 << 2: %d\n", U8H_CONVERT(U8H_LSH(U8H_32, U8H_2)), 128);
  TEST("3 ^ 3: %d\n", U8H_CONVERT(U8H_POW(U8H_3, U8H_3)), 27);
  TEST("9 ^ 2: %d\n", U8H_CONVERT(U8H_POW(U8H_9, U8H_2)), 81);
  TEST("sqrt(16): %d\n", U8H_CONVERT(U8H_SQRT(U8H_16)), 4);
  TEST("sqrt(28): %d\n", U8H_CONVERT(U8H_SQRT(U8H_28)), 5);
  TEST("sqrt(0x80): %d\n", U8H_CONVERT(U8H_SQRT(U8H(8 0))), 0x0b);
  TEST("log2(32): %d\n", U8H_CONVERT(U8H_LOG2(U8H_32)), 5);
  TEST("log(125,5): %d\n", U8H_CONVERT(U8H_LOG(U8H_125, U8H_5)), 3);
  TEST("41 | 27: %d\n", U8H_CONVERT(U8H_OR(U8H_41, U8H_27)), 59);
  TEST("41 & 27: %d\n", U8H_CONVERT(U8H_AND(U8H_41, U8H_27)), 9);
  TEST("41 $ 27: %d\n", U8H_CONVERT(U8H_XOR(U8H_41, U8H_27)), 50);
#endif

#ifdef FACTORIAL_DEBUG
#define FACTORIAL(N)\
  LIST_FOLDL(U128H_MUL,\
    LIST_MAP(U128H_FROM_U32H,\
      LIST_RANGE(U32H_1, N)), U128H_1)

#define SF(X) STRING(U128H_PRINT(X))

  printf("%s\n", SF(FACTORIAL(U32H_1)));
  printf("%s\n", SF(FACTORIAL(U32H_5)));
  printf("%s\n", SF(FACTORIAL(U32H_10)));
  printf("%s\n", SF(FACTORIAL(U32H_15)));
  printf("%s\n", SF(FACTORIAL(U32H_20)));
  printf("%s\n", SF(FACTORIAL(U32H_30)));
#endif

}