#ifndef C23META_BITS_XOR
#define C23META_BITS_XOR

#define BITXOR(A,B,...) BITXOR1(A,B)__VA_OPT__(,OBSTRUCT(BITXOR_I)()(__VA_ARGS__))
#define BITXOR_I() BITXOR
#define BITXOR1(A,B) BITXOR1_ ## A ## B
#define BITXOR1_00 0
#define BITXOR1_01 1
#define BITXOR1_10 1
#define BITXOR1_11 0

#endif