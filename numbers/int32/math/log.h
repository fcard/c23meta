#ifndef C23META_I32_LOG
#define C23META_I32_LOG
#include "../bits/sign.h"
#include "../../uint32/math/log.h"


#define I32_LOG(X,N) _I32_LOG_C(X,N)
#define _I32_LOG_C(X,N) I32_LOG_EVAL(_I32_LOG(I32_CMP_SIGN(X,N),X,N))
#define I32_LOG_EVAL(X) I32_LOG_EVAL1(X)
#define I32_LOG_EVAL1(X) X

#define _I32_LOG(S,X,N) CAT(_I32_LOG_X_,S)(X,N)
#define _I32_LOG_X_POS_POS(X,N) U32_LOG(X,N)
#define _I32_LOG_X_NEG_POS(X,N) I32_0 _Pragma("GCC error \"Log of negative value\"")
#define _I32_LOG_X_POS_NEG(X,N) I32_0 _Pragma("GCC error \"Log of negative base\"")
#define _I32_LOG_X_NEG_NEG(X,N) I32_0 _Pragma("GCC error \"Log of negative base & value\"")

#endif