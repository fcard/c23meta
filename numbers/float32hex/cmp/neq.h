#ifndef C23META_FP32H_NEQ
#define C23META_FP32H_NEQ
#include "../../uint32/cmp/neq.h"

#define FP32H_NEQ(X,Y) _FP32H_NEQ(X,Y)
#define _FP32H_NEQ(X,Y) CAT(CAT(_FP32H_NEQ,FP32H_IS_NAN(X)),FP32H_IS_NAN(Y))(X,Y)
#define _FP32H_NEQ00(X,Y) U32H_NEQ(X,Y)
#define _FP32H_NEQ01(X,Y) 1
#define _FP32H_NEQ10(X,Y) 1
#define _FP32H_NEQ11(X,Y) 1

#define FP32H_NEQ_UNCHECKED(X,Y) U32H_NEQ(X,Y)

#endif