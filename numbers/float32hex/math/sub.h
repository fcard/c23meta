#ifndef C23META_FP32H_SUB
#define C23META_FP32H_SUB
#include "neg.h"
#include "add.h"

#define FP32H_SUB(X,Y) FP32H_ADD(X,FP32H_NEG(Y))

#endif