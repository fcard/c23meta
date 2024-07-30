#include "uint64/math/mulshift32.h"
#include "uint64/to_u32.h"
#include "float32/parse.h"
#include "float32/bits/bits.h"
#include "float32/cmp/cmp.h"
#include "float32/float32.h"
#include "float32/convert.h"
#include "float32/math/abs.h"
#include "float32/math/neg.h"
#include "float32/math/add.h"
#include "float32/math/mul.h"
#include "int32/math/math.h"
#include "int32/cmp/cmp.h"
#include "int32/convert.h"
#include "int32/int32.h"
#include "uint32/math/math.h"
#include "uint32/cmp/cmp.h"
#include "uint32/convert.h"
#include "uint32/parse.h"
#include "uint32/print.h"
#include "uint32/uint32.h"
#include "uint32/bits/bits.h"


#include <stdio.h>


int main(void) {
  printf("UNSIGNED 32\n\n");
  printf("reverse(a,b,c,d): %s\n", STRING(REVERSE(A,B,C,D)));
  printf("16 + 8 + 4: %d\n", U32_CONVERT(U32_ADD(U32_16, U32_ADD(U32_8, U32_4))));
  printf("16 - 8: %d\n", U32_CONVERT(U32_SUB(U32_16, U32_8)));
  printf("16 * 8: %d\n", U32_CONVERT(U32_MUL(U32_16, U32_8)));
  printf("7 * 3: %d\n", U32_CONVERT(U32_MUL(U32_7, U32_3)));
  printf("15 / 3: %d\n", U32_CONVERT(U32_DIV(U32_15, U32_3)));
  printf("7 << 4: %d\n", U32_CONVERT(U32_LSH(U32_7, U32_4)));
  printf("164 >> 4: %d\n", U32_CONVERT(U32_RSH(U32_164, U32_4)));
  printf("33 & 49: %d\n", U32_CONVERT(U32_AND(U32_33, U32_49)));
  printf("1 | 6: %d\n", U32_CONVERT(U32_OR(U32_1, U32_6)));
  printf("5 $ 7: %d\n", U32_CONVERT(U32_XOR(U32_5, U32_7)));
  printf("1 >= 1: %d\n", U32_GEQ(U32_1, U32_1));
  printf("10 == 12: %d\n", U32_EQ(U32_10, U32_12));
  printf("from_base10(1,2,3,4): %d\n", U32_CONVERT(U32_FROM_BASE10(1,2,3,4)));
  printf("clz(16): %d\n", U32_CONVERT(U32_CLZ(U32_16)));
  printf("ctz(16): %d\n", U32_CONVERT(U32_CTZ(U32_16)));
  printf("log2(32): %d\n", U32_CONVERT(U32_LOG2(U32_32)));
  printf("uint32p(7 2 4 5 0 8 2): %d\n", U32_CONVERT(U32P(7 2 4 5 0 8 2)));
  printf("7^4: %d\n", U32_CONVERT(U32_EXP(U32_7, U32_4)));
  printf("sqrt(49): %d\n", U32_CONVERT(U32_SQRT(U32_49)));
  printf("is_odd(14): %d\n", U32_IS_ODD(U32_14));
  printf("is_even(14): %d\n", U32_IS_EVEN(U32_14));
  printf("24 / 7: %d\n", U32_CONVERT(U32_DIV(U32_24, U32_7)));
  printf("24 %% 7: %d\n", U32_CONVERT(U32_REM(U32_24, U32_7)));
  printf("log(1032000,10): %d\n", U32_CONVERT(U32_LOG(U32P(1 0 3 2 0 0 0), U32_10)));
  printf("cmp(11,10): %s\n", STRING(U32_CMP(U32_11, U32_10)));
  printf("cmp(10,10): %s\n", STRING(U32_CMP(U32_10, U32_10)));
  printf("cmp(10,11): %s\n", STRING(U32_CMP(U32_10, U32_11)));
  printf("max(12,24): %d\n", U32_CONVERT(U32_MAX(U32_12, U32_24)));
  printf("max(32,16): %d\n", U32_CONVERT(U32_MAX(U32_32, U32_16)));
  printf("min(12,24): %d\n", U32_CONVERT(U32_MIN(U32_12, U32_24)));
  printf("min(32,16): %d\n", U32_CONVERT(U32_MIN(U32_32, U32_16)));
  printf("1024 + 2048: %d\n", U32_CONVERT(U32_ADD(U32P(1 0 2 4), U32P(2 0 4 8))));
  printf("print(4138): %s\n", STRING(U32_PRINT(U32P(4 1 3 8))));

  printf("\nSIGNED 32\n\n");

  printf("is_odd(14): %d\n" , I32_IS_ODD(I32_14));
  printf("is_even(14): %d\n", I32_IS_EVEN(I32_14));
  printf("-13 > 12: %d\n" , I32_GT(I32_N13, I32_12));
  printf("-13 > -14: %d\n", I32_GT(I32_N13, I32_N14));
  printf("15 > 14: %d\n"  , I32_GT(I32_15, I32_14));
  printf("15 > -18: %d\n" , I32_GT(I32_15, I32_N18));

  printf("-13 < 12: %d\n" , I32_LT(I32_N13, I32_12));
  printf("-13 < -14: %d\n", I32_LT(I32_N13, I32_N14));
  printf("15 < 14: %d\n"  , I32_LT(I32_15, I32_14));
  printf("15 < -18: %d\n" , I32_LT(I32_15, I32_N18));

  printf("-13 >= 12: %d\n" , I32_GEQ(I32_N13, I32_12));
  printf("-13 >= -14: %d\n", I32_GEQ(I32_N13, I32_N14));
  printf("15 >= 14: %d\n"  , I32_GEQ(I32_15, I32_14));
  printf("15 >= -18: %d\n" , I32_GEQ(I32_15, I32_N18));

  printf("-13 <= 12: %d\n" , I32_LEQ(I32_N13, I32_12));
  printf("-13 <= -14: %d\n", I32_LEQ(I32_N13, I32_N14));
  printf("15 <= 14: %d\n"  , I32_LEQ(I32_15, I32_14));
  printf("15 <= -18: %d\n" , I32_LEQ(I32_15, I32_N18));

  printf("-13 == 13: %d\n" , I32_EQ(I32_N13, I32_13));
  printf("-13 == -13: %d\n", I32_EQ(I32_N13, I32_N13));
  printf("13 == 13: %d\n"  , I32_LEQ(I32_13, I32_13));

  printf("-13 != 13: %d\n" , I32_NEQ(I32_N13, I32_13));
  printf("-13 != -13: %d\n", I32_NEQ(I32_N13, I32_N13));
  printf("13 != 13: %d\n"  , I32_NEQ(I32_13, I32_13));

  printf("convert(I32_100): %d\n", I32_CONVERT(I32_100));
  printf("convert(I32_N100): %d\n", I32_CONVERT(I32_N100));

  printf("-(132): %d\n", I32_CONVERT(I32_NEG(I32_132)));
  printf("-(-132): %d\n", I32_CONVERT(I32_NEG(I32_N132)));
  printf("abs(132): %d\n", I32_CONVERT(I32_ABS(I32_132)));
  printf("abs(-132): %d\n", I32_CONVERT(I32_ABS(I32_N132)));

  printf("-(132): %d\n", I32_CONVERT(I32_NEG(I32_132)));
  printf("10 + (-5): %d\n", I32_CONVERT(I32_ADD(I32_10, I32_N5)));
  printf("10 + (-15): %d\n", I32_CONVERT(I32_ADD(I32_10, I32_N15)));
  printf("(-5) + (-15): %d\n", I32_CONVERT(I32_ADD(I32_N5, I32_N15)));

  printf("(-3) * (-5): %d\n", I32_CONVERT(I32_MUL(I32_N3, I32_N5)));
  printf("3 * (-5): %d\n", I32_CONVERT(I32_MUL(I32_3, I32_N5)));
  printf("3 * 5: %d\n", I32_CONVERT(I32_MUL(I32_3, I32_5)));

  printf("15 / (-5): %d\n", I32_CONVERT(I32_DIV(I32_15, I32_N5)));
  printf("(-15) / (-5): %d\n", I32_CONVERT(I32_DIV(I32_N15, I32_N5)));
  printf("(-15) / 5: %d\n", I32_CONVERT(I32_DIV(I32_N15, I32_5)));
  printf("15 / 5: %d\n", I32_CONVERT(I32_DIV(I32_15, I32_5)));
  printf("20 / 5: %d\n", I32_CONVERT(I32_DIV(I32_20, I32_5)));

  printf("16 %% 7: %d\n", I32_CONVERT(I32_REM(I32_16, I32_7)));
  printf("(-16) %% 7: %d\n", I32_CONVERT(I32_REM(I32_N16, I32_7)));
  printf("16 %% (-7): %d\n", I32_CONVERT(I32_REM(I32_16, I32_N7)));
  printf("(-16) %% (-7): %d\n", I32_CONVERT(I32_REM(I32_N16, I32_N7)));

  printf("100 << 1:   %d\n", I32_CONVERT(I32_LSH(I32_100, I32_1)));
  printf("100 << -1:  %d\n", I32_CONVERT(I32_LSH(I32_100, I32_N1)));
  printf("-100 << 1:  %d\n", I32_CONVERT(I32_LSH(I32_N100, I32_1)));
  printf("-100 << -1: %d\n", I32_CONVERT(I32_LSH(I32_N100, I32_N1)));

  printf("100 >> 1:   %d\n", I32_CONVERT(I32_RSH(I32_100, I32_1)));
  printf("100 >> -1:  %d\n", I32_CONVERT(I32_RSH(I32_100, I32_N1)));
  printf("-100 >> 1:  %d\n", I32_CONVERT(I32_RSH(I32_N100, I32_1)));
  printf("-100 >> -1: %d\n", I32_CONVERT(I32_RSH(I32_N100, I32_N1)));
  
  printf("max(200,32):   %d\n", I32_CONVERT(I32_MAX(I32_200,  I32_32)));
  printf("max(-200,32):  %d\n", I32_CONVERT(I32_MAX(I32_N200, I32_32)));
  printf("max(200,-32):  %d\n", I32_CONVERT(I32_MAX(I32_200, I32_N32)));
  printf("max(-200,-32): %d\n", I32_CONVERT(I32_MAX(I32_N200, I32_N32)));
  
  printf("min(200,32):   %d\n", I32_CONVERT(I32_MIN(I32_200,  I32_32)));
  printf("min(-200,32):  %d\n", I32_CONVERT(I32_MIN(I32_N200, I32_32)));
  printf("min(200,-32):  %d\n", I32_CONVERT(I32_MIN(I32_200, I32_N32)));
  printf("min(-200,-32): %d\n", I32_CONVERT(I32_MIN(I32_N200, I32_N32)));

  printf("10^3:       %d\n", I32_CONVERT(I32_EXP(I32_10,  I32_3)));
  printf("10^(-3):    %d\n", I32_CONVERT(I32_EXP(I32_10,  I32_N3)));
  printf("(-10)^3:    %d\n", I32_CONVERT(I32_EXP(I32_N10, I32_3)));
  printf("(-10)^(-3): %d\n", I32_CONVERT(I32_EXP(I32_N10, I32_N3)));
 
  printf("-2^0: %d\n", I32_CONVERT(I32_EXP(I32_N2,  I32_0)));
  printf("2^0: %d\n", I32_CONVERT(I32_EXP(I32_2,  I32_0)));
  printf("0^0: %d\n", I32_CONVERT(I32_EXP(I32_0,  I32_0)));

  printf("sqrt(0): %d\n", I32_CONVERT(I32_SQRT(I32_0)));
  printf("sqrt(16): %d\n", I32_CONVERT(I32_SQRT(I32_16)));
  printf("sqrt(intmax): %d\n", I32_CONVERT(I32_SQRT(I32_VMAX)));

  printf("log(81,3): %d\n", I32_CONVERT(I32_LOG(I32_81, I32_3)));
  printf("log2(32): %d\n", I32_CONVERT(I32_LOG2(I32_32)));

  printf("100 & -32: %d\n", I32_CONVERT(I32_AND(I32_100, I32_N32)));
  printf("1 | 6: %d\n", I32_CONVERT(I32_OR(I32_1, I32_6)));
  printf("5 $ 7: %d\n", I32_CONVERT(I32_XOR(I32_5, I32_7)));

  printf("\nFLOAT 32\n\n");

  printf("convert(FP32_0):   %.1f\n", FP32_CONVERT(FP32_0));
  printf("convert(FP32_1):   %.1f\n", FP32_CONVERT(FP32_1));
  printf("convert(FP32_150): %.1f\n", FP32_CONVERT(FP32_150));

  printf("exponent(1.0): %d\n", U32_CONVERT(FP32_EXPONENT(FP32_1)));
  printf("exponent(2.0): %d\n", U32_CONVERT(FP32_EXPONENT(FP32_2)));
  printf("exponent(8.0): %d\n", U32_CONVERT(FP32_EXPONENT(FP32_8)));

  printf("mantissa(1.0): %d\n", U32_CONVERT(FP32_MANTISSA(FP32_1)));
  printf("mantissa(3.0): %d\n", U32_CONVERT(FP32_MANTISSA(FP32_3)));
  printf("mantissa(15.0): %d\n", U32_CONVERT(FP32_MANTISSA(FP32_15)));

  printf("20.0 > 10.0: %d\n", FP32_GT(FP32_20, FP32_10));
  printf("32.0 > 42.0: %d\n", FP32_GT(FP32_32, FP32_42));
  printf("50.0 > 50.0: %d\n", FP32_GT(FP32_50, FP32_50));

  printf("20.0 < 10.0: %d\n", FP32_LT(FP32_20, FP32_10));
  printf("32.0 < 42.0: %d\n", FP32_LT(FP32_32, FP32_42));
  printf("50.0 < 50.0: %d\n", FP32_LT(FP32_50, FP32_50));

  printf("20.0 <= 10.0: %d\n", FP32_LEQ(FP32_20, FP32_10));
  printf("32.0 <= 42.0: %d\n", FP32_LEQ(FP32_32, FP32_42));
  printf("50.0 <= 50.0: %d\n", FP32_LEQ(FP32_50, FP32_50));

  printf("20.0 >= 10.0: %d\n", FP32_GEQ(FP32_20, FP32_10));
  printf("32.0 >= 42.0: %d\n", FP32_GEQ(FP32_32, FP32_42));
  printf("50.0 >= 50.0: %d\n", FP32_GEQ(FP32_50, FP32_50));

  printf("15.0 + 12.0: %.1f\n", FP32_CONVERT(FP32_ADD(FP32_15, FP32_12)));
  printf("40.0 + (-12.0): %.1f\n", FP32_CONVERT(FP32_ADD(FP32_40, FP32_N12)));
  printf("40.0 + (-42.0): %.1f\n", FP32_CONVERT(FP32_ADD(FP32_40, FP32_N42)));
  printf("40.0 + (-112.0): %.1f\n", FP32_CONVERT(FP32_ADD(FP32_40, FP32_N112)));
  printf("(-28.0) + (-112.0): %.1f\n", FP32_CONVERT(FP32_ADD(FP32_N28, FP32_N112)));
  printf("(-28.0) + 112.0: %.1f\n", FP32_CONVERT(FP32_ADD(FP32_28, FP32_N112)));
  printf("0.5 + 0.25: %.2f\n", FP32_CONVERT(FP32_ADD(FP32_1L2, FP32_1L4)));
  printf("0.5 + 0.5: %.1f\n", FP32_CONVERT(FP32_ADD(FP32_1L2, FP32_1L2)));
  printf("1.0 + 0.5: %.1f\n", FP32_CONVERT(FP32_ADD(FP32_1, FP32_1L2)));

  printf("2.0 * 2.0: %.1f\n", FP32_CONVERT(FP32_MUL(FP32_2, FP32_2)));
  printf("15.0 * 5.0: %.1f\n", FP32_CONVERT(FP32_MUL(FP32_15, FP32_5)));
  printf("1024.0 * 2048.0: %.1f\n", FP32_CONVERT(FP32_MUL(FP32P(1 0 2 4), FP32P(2 0 4 8))));

}