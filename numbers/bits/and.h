#ifndef C23META_BITS_AND
#define C23META_BITS_AND

#define BITAND(A,B,...) BITAND1(A,B)__VA_OPT__(,OBSTRUCT(BITAND_I)()(__VA_ARGS__))
#define BITAND_I() BITAND
#define BITAND1(A,B) BITAND1_ ## A ## B
#define BITAND1_00 0
#define BITAND1_01 0
#define BITAND1_10 0
#define BITAND1_11 1

#endif