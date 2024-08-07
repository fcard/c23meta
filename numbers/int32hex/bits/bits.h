#ifndef C23META_I32H_BITSB
#define C23META_I32H_BITSB

#include "sign.h"
#include "leading_zeroes.h"
#include "trailing_zeroes.h"

#define I32H_BITS(X) U32H_BITS(X)
#define I32H_BIT(X,N) I32_BIT(I32H_BITS(X),N)

#endif