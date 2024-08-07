#ifndef C23META_I32H_RSH
#define C23META_I32H_RSH

#define I32H_RSH1(X) _I32H_RSH1_C(X)
#define _I32H_RSH1_C(X) I32H_RSH_EVAL(_I32H_RSH1(I32H_SIGN_BIT(X),X))

#define _I32H_RSH1(S,X) CAT(_I32H_RSH1_X_,S)(X)
#define _I32H_RSH1_X_0(X) U32H_RSH1(X)
#define _I32H_RSH1_X_1(X) I32H_NEG(U32H_RSH1(I32H_NEG(X)))


#define I32H_RSH(X,N) _I32H_RSH_C(X,N)
#define _I32H_RSH_C(X,N) I32H_RSH_EVAL(_I32H_RSH(I32H_CMP_SIGN(X,N),X,N))
#define I32H_RSH_EVAL(X) X

#define _I32H_RSH(S,X,N) CAT(_I32H_RSH_X_,S)(X,N)
#define _I32H_RSH_X_POS_POS(X,N) U32H_RSH(X,N)
#define _I32H_RSH_X_NEG_POS(X,N) I32H_NEG(U32H_RSH(I32H_NEG(X),N))
#define _I32H_RSH_X_POS_NEG(X,N) U32H_LSH(X,I32H_NEG(N))
#define _I32H_RSH_X_NEG_NEG(X,N) I32H_NEG(U32H_LSH(I32H_NEG(X),I32H_NEG(N)))

#endif