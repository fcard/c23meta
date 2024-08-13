#ifndef C23META_I8H_RSH
#define C23META_I8H_RSH

#define I8H_RSH1(X) _I8H_RSH1_C(X)
#define _I8H_RSH1_C(X) I8H_RSH_EVAL(_I8H_RSH1(I8H_SIGN_BIT(X),X))

#define _I8H_RSH1(S,X) CAT(_I8H_RSH1_X_,S)(X)
#define _I8H_RSH1_X_0(X) U8H_RSH1(X)
#define _I8H_RSH1_X_1(X) I8H_NEG(U8H_RSH1(I8H_NEG(X)))


#define I8H_RSH(X,N) _I8H_RSH_C(X,N)
#define _I8H_RSH_C(X,N) I8H_RSH_EVAL(_I8H_RSH(I8H_CMP_SIGN(X,N),X,N))
#define I8H_RSH_EVAL(X) X

#define _I8H_RSH(S,X,N) CAT(_I8H_RSH_X_,S)(X,N)
#define _I8H_RSH_X_POS_POS(X,N) U8H_RSH(X,N)
#define _I8H_RSH_X_NEG_POS(X,N) I8H_NEG(U8H_RSH(I8H_NEG(X),N))
#define _I8H_RSH_X_POS_NEG(X,N) U8H_LSH(X,I8H_NEG(N))
#define _I8H_RSH_X_NEG_NEG(X,N) I8H_NEG(U8H_LSH(I8H_NEG(X),I8H_NEG(N)))

#endif