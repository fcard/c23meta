#ifndef C23META_U8H_LSH
#define C23META_U8H_LSH

#define U8H_LSH1(X) U8H_FROM_BITS(_U8H_LSH1(U8H_BITS(X)))
#define _U8H_LSH1(X) _U8H_LSH1_X X
#define _U8H_LSH1_X(A0,A1,A2,A3,A4,A5,A6,A7) (0,A0,A1,A2,A3,A4,A5,A6)

#define U8H_LSH(X,N) U8H_FROM_BITS(_U8H_LSH(U8H_BITS(X),N))
#define _U8H_LSH(X,N) CAT(_U8H_LSH_U,U8H_LEQ(N,U8H_7))(X,UNWRAP2(N))
#define _U8H_LSH_U0(X,N) (0,0,0,0,0,0,0,0)
#define _U8H_LSH_U1(X,N) _U8H_LSH_X(X,N)
#define _U8H_LSH_X(X,N0,N1) CAT(_U8H_LSH_X,N0) X
#define _U8H_LSH_X1(A0,A1,A2,A3,A4,A5,A6,A7) (0,A0,A1,A2,A3,A4,A5,A6)
#define _U8H_LSH_X2(A0,A1,A2,A3,A4,A5,A6,A7) (0,0,A0,A1,A2,A3,A4,A5)
#define _U8H_LSH_X3(A0,A1,A2,A3,A4,A5,A6,A7) (0,0,0,A0,A1,A2,A3,A4)
#define _U8H_LSH_X4(A0,A1,A2,A3,A4,A5,A6,A7) (0,0,0,0,A0,A1,A2,A3)
#define _U8H_LSH_X5(A0,A1,A2,A3,A4,A5,A6,A7) (0,0,0,0,0,A0,A1,A2)
#define _U8H_LSH_X6(A0,A1,A2,A3,A4,A5,A6,A7) (0,0,0,0,0,0,A0,A1)
#define _U8H_LSH_X7(A0,A1,A2,A3,A4,A5,A6,A7) (0,0,0,0,0,0,0,A0)

#endif