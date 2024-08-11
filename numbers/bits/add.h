#ifndef C23META_BITS_ADD
#define C23META_BITS_ADD

#define BITADD(CARRY,A,B,...) BITADD1(CARRY,A,B) __VA_OPT__(,OBSTRUCT(BITADD_I)()(BITCARRY(CARRY,A,B),__VA_ARGS__))
#define BITADD_I() BITADD
#define BITADD1(C,A,B) BITADD1_ ## C ## A ## B
#define BITADD1_000 0
#define BITADD1_001 1
#define BITADD1_010 1
#define BITADD1_011 0
#define BITADD1_100 1
#define BITADD1_101 0
#define BITADD1_110 0
#define BITADD1_111 1

#define BITCARRY(C,A,B) BITCARRY_ ## C ## A ## B
#define BITCARRY_000 0
#define BITCARRY_001 0
#define BITCARRY_010 0
#define BITCARRY_011 1
#define BITCARRY_100 0
#define BITCARRY_101 1
#define BITCARRY_110 1
#define BITCARRY_111 1

#endif