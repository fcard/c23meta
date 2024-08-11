#ifndef C23META_BITS_OR
#define C23META_BITS_OR

#define BITOR(A,B,...) BITOR1(A,B)__VA_OPT__(,OBSTRUCT(BITOR_I)()(__VA_ARGS__))
#define BITOR_I() BITOR
#define BITOR1(A,B) BITOR1_ ## A ## B
#define BITOR1_00 0
#define BITOR1_01 1
#define BITOR1_10 1
#define BITOR1_11 1

#endif