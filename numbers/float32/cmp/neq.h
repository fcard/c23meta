#ifndef C23META_FP32_NEQ
#define C23META_FP32_NEQ
#include "../../uint32/cmp/neq.h"

#define FP32_NEQ(X,Y) CAT(CAT(_FP32_NEQ,FP32_IS_NAN(X)),FP32_IS_NAN(Y))(X,Y)
#define _FP32_NEQ00(X,Y) U32_NEQ(X,Y)
#define _FP32_NEQ01(X,Y) 1
#define _FP32_NEQ10(X,Y) 1
#define _FP32_NEQ11(X,Y) 1

#define FP32_NEQ_UNCHECKED(X,Y) U32_NEQ(X,Y)

#endif