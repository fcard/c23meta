#ifndef C23META_U32H_RSH
#define C23META_U32H_RSH

#define U32H_RSH1(X) U32H_FROM_BITS(U32_RSH1(U32H_BITS(X)))
#define U32H_RSH(X,N) U32H_FROM_BITS(U32_RSH(U32H_BITS(X),N))

#endif