#ifndef C23META_I32H_LOG
#define C23META_I32H_LOG

#define I32H_LOG(X,N) _I32H_LOG_C(X,N)
#define _I32H_LOG_C(X,N) I32H_LOG_EVAL(_I32H_LOG(I32H_CMP_SIGN(X,N),X,N))
#define I32H_LOG_EVAL(X) I32H_LOG_EVAL1(X)
#define I32H_LOG_EVAL1(X) X

#define _I32H_LOG(S,X,N) CAT(_I32H_LOG_X_,S)(X,N)
#define _I32H_LOG_X_POS_POS(X,N) U32H_LOG(X,N)
#define _I32H_LOG_X_NEG_POS(X,N) I32H_0 _Pragma("GCC error \"Log of negative value\"")
#define _I32H_LOG_X_POS_NEG(X,N) I32H_0 _Pragma("GCC error \"Log of negative base\"")
#define _I32H_LOG_X_NEG_NEG(X,N) I32H_0 _Pragma("GCC error \"Log of negative base & value\"")

#endif