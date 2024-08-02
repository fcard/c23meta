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

#include "list/list.h"
#include "tuple/tuple.h"
#include "pair/pair.h"

#include <stdio.h>


int main(void) {
#ifdef NUMBER_DEBUG
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

  printf("20.0 == 10.0: %d\n", FP32_EQ(FP32_20, FP32_10));
  printf("32.0 == 42.0: %d\n", FP32_EQ(FP32_32, FP32_42));
  printf("50.0 == 50.0: %d\n", FP32_EQ(FP32_50, FP32_50));

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
#endif

#define EQZ(X) _EQZ_EVAL(DEFER(CAT(_EQZ,X))())
#define _EQZ_EVAL(X) X
#define _EQZ0() 1
#define _EQZ1() 0

#define NEQZ(X) _NEQZ_EVAL(DEFER(CAT(_NEQZ,X))())
#define _NEQZ_EVAL(X) X
#define _NEQZ0() 0
#define _NEQZ1() 1
#define _NEQZ2() 1
#define _NEQZ3() 1

#define EQB(X,Y) _EQB_EVAL(DEFER(CAT(CAT(_EQB,X),Y))())
#define _EQB_EVAL(X) X
#define _EQB00() 1
#define _EQB10() 0
#define _EQB01() 0
#define _EQB11() 1
#define EQB(X,Y) _EQB_EVAL(DEFER(CAT(CAT(_EQB,X),Y))())

#define CONS0(X) (0,(X,LIST_NIL))

#ifdef LIST_DEBUG
  printf("list(1,2,3): %s\n",                    STRING(LIST(1,2,3)));
  printf("first([1,2,3]): %s\n",                 STRING(LIST_FIRST(LIST(1,2,3))));
  printf("rest([1,2,3]): %s\n",                  STRING(LIST_REST(LIST(1,2,3))));
  printf("reverse([1,2,3]): %s\n",               STRING(LIST_REVERSE(LIST(1,2,3))));
  printf("map(f,[1,2,3]): %s\n",                 STRING(LIST_MAP(F,LIST(1,2,3))));
  printf("map2(f,[1,2,3],[4,5,6]): %s\n",        STRING(LIST_MAP2(F,LIST(1,2,3),LIST(4,5,6))));
  printf("reduce(f,[1,2,3]): %s\n",              STRING(LIST_REDUCE(F,LIST(1,2,3))));
  printf("foldl(f,[1,2,3]): %s\n",               STRING(LIST_FOLDL(F,LIST(1,2,3))));
  printf("foldr(f,[1,2,3]): %s\n",               STRING(LIST_FOLDR(F,LIST(1,2,3))));
  printf("reduce(f,[1,2,3],0): %s\n",            STRING(LIST_REDUCE(F,LIST(1,2,3),0)));
  printf("foldl(f,[1,2,3],0): %s\n",             STRING(LIST_FOLDL(F,LIST(1,2,3),0)));
  printf("foldr(f,[1,2,3],0): %s\n",             STRING(LIST_FOLDR(F,LIST(1,2,3),0)));
  printf("filter(eq0,[0,1,0,1]): %s\n",          STRING(LIST_FILTER(EQZ,LIST(0,1,0,1))));
  printf("remove(eq0,[0,1,0,1]): %s\n",          STRING(LIST_REMOVE(EQZ,LIST(0,1,0,1))));
  printf("concat([1,2,3],[4,5,6]): %s\n",        STRING(LIST_CONCAT(LIST(1,2,3), LIST(4,5,6))));
  printf("find_index(eq0,[1,1,0,1,1]): %d\n",    U32_CONVERT(LIST_FIND_INDEX(EQZ,LIST(1,1,0,1,1))));
  printf("find_first(neq0,[0,0,3,2,1]): %d\n",   LIST_FIND_FIRST(NEQZ,LIST(0,0,3,2,1)));
  printf("split(eq0,[1,1,0,1,1,1]): %s\n",       STRING(LIST_SPLIT(EQZ,LIST(1,1,0,1,1,1))));
  printf("split_all(eq0,[1,0,1,1,1,0,1]): %s\n", STRING(LIST_SPLIT_ALL(EQZ,LIST(1,0,1,1,1,0,1))));
  printf("flatten([[1,0],[1,1],[1,0]]): %s\n",   STRING(LIST_FLATTEN(LIST(LIST(1,0),LIST(1,1),LIST(1,0)))));
  printf("contains(eq0,[1,0,1]): %d\n",          LIST_CONTAINS(EQZ,LIST(1,0,1)));
  printf("contains(eq0,[1,1,1]): %d\n",          LIST_CONTAINS(EQZ,LIST(1,1,1)));
  printf("nth([1,2,3],1): %d\n",                 LIST_NTH(LIST(1,2,3), U32_1));
  printf("length([1,2,3]): %d\n",                U32_CONVERT(LIST_LENGTH(LIST(1,2,3))));
  printf("foreach(F,[1,2,3]): %s\n",             STRING(LIST_FOREACH(F,LIST(1,2,3))));
  printf("csum([1,2,3]): %d\n",                  LIST_CSUM(LIST(1,2,3)));
  printf("eq(eqb,[0,1,1],[0,1,1]): %d\n",        LIST_EQ(EQB,LIST(0,1,1),LIST(0,1,1)));
  printf("eq(eqb,[0,0,1],[0,1,1]): %d\n",        LIST_EQ(EQB,LIST(0,0,1),LIST(0,1,1)));
  printf("apply(F,[1,2,3,4,5]): %s\n",           STRING(LIST_APPLY(F,LIST(1,2,3,4,5))));
  printf("mapcat(cons0,[1,1,1,1]): %s\n",        STRING(LIST_MAPCAT(CONS0,LIST(1,1,1,1,1))));
  printf("as_args([1,2,3,4,5]): %s\n",           STRING(LIST_AS_ARGS(LIST(1,2,3,4,5))));
  printf("take([1,2,3,4,5],3): %s\n",            STRING(LIST_TAKE(LIST(1,2,3,4,5), U32_3)));
  printf("take_while(eq0,[0,0,0,1,1]): %s\n",    STRING(LIST_TAKE_WHILE(EQZ,LIST(0,0,0,1,1))));
  printf("take_nth([1,2,3,4,5,6],2): %s\n",      STRING(LIST_TAKE_NTH(LIST(1,2,3,4,5,6), U32_2)));
  printf("take_last([1,2,3,4,5,6],3): %s\n",     STRING(LIST_TAKE_LAST(LIST(1,2,3,4,5,6), U32_3)));
  printf("drop([1,2,3,4,5],3): %s\n",            STRING(LIST_DROP(LIST(1,2,3,4,5), U32_3)));
  printf("drop_while(eq0,[0,0,0,1,1]): %s\n",    STRING(LIST_DROP_WHILE(EQZ,LIST(0,0,0,1,1))));
  printf("drop_nth([1,2,3,4,5,6],2): %s\n",      STRING(LIST_DROP_NTH(LIST(1,2,3,4,5,6), U32_2)));
  printf("drop_last([1,2,3,4,5,6],2): %s\n",     STRING(LIST_DROP_LAST(LIST(1,2,3,4,5,6), U32_2)));
  printf("is_list([1,2,3]): %s\n",               STRING(IS_LIST(LIST(1,2,3))));
  printf("is_list(1): %s\n",                     STRING(IS_LIST(1)));
  printf("every(eq0,[0,0,0,0]): %d\n",           LIST_EVERY(EQZ,LIST(0,0,0,0,0)));
  printf("none(neq0,[0,0,0,0]): %d\n",           LIST_NONE(NEQZ,LIST(0,0,0,0,0)));
  printf("interpose([1,2,3],0): %s\n",           STRING(LIST_INTERPOSE(LIST(1,2,3),0)));
  printf("insert([1,2,4],3,2): %s\n",            STRING(LIST_INSERT(LIST(1,2,4),3,U32_2)));
  printf("push([1,2,3],4): %s\n",                STRING(LIST_PUSH(LIST(1,2,3),4)));
  printf("enumerate([a,b,c]): %s\n",             STRING(LIST_ENUMERATE(LIST(a,b,c))));
  printf("walk(F,[1,2,3]): %s\n",                STRING(LIST_WALK(F,LIST(1,2,3))));
  printf("walk(F,[[1,2],3]): %s\n",              STRING(LIST_WALK(F,LIST(LIST(1,2),3))));
  printf("range(1,5): %s\n",                     STRING(LIST_MAP(U32_PRINT, LIST_RANGE(U32_1, U32_5))));
  printf("range(5,1,-1): %s\n",                  STRING(LIST_MAP(U32_PRINT, LIST_RANGE(U32_5, U32_1, I32_N1))));
  printf("sort(u32_lt, [3,1,2]): %s\n",          STRING(LIST_MAP(U32_PRINT, LIST_SORT(U32_LT, LIST(U32_3, U32_1, I32_2)))));
  printf("sort(u32_lt, [3,2,1]): %s\n",          STRING(LIST_MAP(U32_PRINT, LIST_SORT(U32_LT, LIST(U32_3, U32_2, I32_1)))));
  printf("sort(u32_lt, [1,2,3]): %s\n",          STRING(LIST_MAP(U32_PRINT, LIST_SORT(U32_LT, LIST(U32_1, U32_2, I32_3)))));
  printf("last([1,2,3,4,5]): %d\n",              LIST_LAST(LIST(1,2,3,4,5)));

  LIST_AS_DATA(list,  LIST(1,2,3), int);
  LIST_AS_DATA(list2, LIST(4,5,6));
  auto array  = LIST_AS_ARRAY(LIST(1,2,3),int);
  auto array2 = LIST_AS_ARRAY(LIST(4,5,6));

  printf("as_data([1,2,3],int):  [%d, %d, %d]\n", list->first, list->rest->first, list->rest->rest->first);
  printf("as_data([4,5,6]):      [%d, %d, %d]\n", list2->first, list2->rest->first, list2->rest->rest->first);
  printf("as_array([1,2,3],int): {%d, %d, %d}\n", array[0], array[1], array[2]);
  printf("as_array([4,5,6]):     {%d, %d, %d}\n", array2[0], array2[1], array2[2]);

  LIST_TYPE(int) list3 = (typeof(list3))LIST_AS_DATA_VALUE(LIST(1,2,3),int);
  LIST_TYPE(int) list4 = (typeof(list4))LIST_AS_DATA_VALUE(LIST(4,5,6));
  printf("as_data_value([1,2,3],int)->first: %d\n", list3->first);
  printf("as_data_value([4,5,6])->first: %d\n", list4->first);

  LIST_AS_TUPLE(tuple, LIST(1,'a',(char*)"abc"));
  printf("as_tuple([1,'a',\"abc\"]): (%d, '%c', \"%s\")\n",
    TUPLE_GET(tuple,1), TUPLE_GET(tuple,2), TUPLE_GET(tuple,3));

  TUPLE_AS_DATA(tuple2, ((char*)"def", (int*)((int[3]){1,2,3}), 1));
  printf("as_tuple([\"def\",{1,2,3},1]): (\"%s\", {%d,%d,%d}, %d)\n",
   TUPLE_GET(tuple2, U32_1),
   TUPLE_GET(tuple2, 2)[0],
   TUPLE_GET(tuple2, 2)[1],
   TUPLE_GET(tuple2, 2)[2],
   TUPLE_GET(tuple2, 3));

  printf("pair(1,2): %s\n", STRING(PAIR(1,2)));
  printf("first((1,2)): %d\n", PAIR_FIRST(PAIR(1,2)));
  printf("second((1,2)): %d\n", PAIR_SECOND(PAIR(1,2)));
  printf("is_pair(0): %d\n", IS_PAIR(0));
  printf("is_pair((1)): %d\n", IS_PAIR((1)));
  printf("is_pair((1,2)): %d\n", IS_PAIR(PAIR(1,2)));
  printf("is_pair((1,2,3)): %d\n", IS_PAIR((1,2,3)));
  printf("is_pair([1,2,3]): %d\n", IS_PAIR(LIST(1,2,3)));
  printf("map(first, enumerate([1,2,3])): %s\n",
    STRING(LIST_MAP(U32_PRINT, LIST_MAP(PAIR_FIRST, LIST_ENUMERATE(LIST(1,2,3))))));
#endif

}