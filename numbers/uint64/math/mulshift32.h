#ifndef C23META_U64_MULSHIFT32
#define C23META_U64_MULSHIFT32
#include "mul32.h"
#include "rshift32.h"

#define U64_MULSHIFT32(X,Y) U64_RSH32_23(U64_MUL32(X,Y))

#endif