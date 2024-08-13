#ifndef C23META_I8H_LOG
#define C23META_I8H_LOG

#define I8H_LOG(X,N) _I8H_LOG_C(X,N)
#define _I8H_LOG_C(X,N) I8H_LOG_EVAL(_I8H_LOG(I8H_CMP_SIGN(X,N),X,N))
#define I8H_LOG_EVAL(X) I8H_LOG_EVAL1(X)
#define I8H_LOG_EVAL1(X) X

#define _I8H_LOG(S,X,N) CAT(_I8H_LOG_X_,S)(X,N)
#define _I8H_LOG_X_POS_POS(X,N) U8H_LOG(X,N)
#define _I8H_LOG_X_NEG_POS(X,N) I8H_0 _Pragma("GCC error \"Log of negative value\"")
#define _I8H_LOG_X_POS_NEG(X,N) I8H_0 _Pragma("GCC error \"Log of negative base\"")
#define _I8H_LOG_X_NEG_NEG(X,N) I8H_0 _Pragma("GCC error \"Log of negative base & value\"")

#endif