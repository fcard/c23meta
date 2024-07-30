#ifndef C23META_FP32_SUB
#define C23META_FP32_SUB
#include "neg.h"
#include "add.h"

#define FP32_SUB(X,Y) FP32_ADD(X,FP32_NEG(Y))

#endif