#ifndef C23META_I8H_BITSB
#define C23META_I8H_BITSB

#include "sign.h"
#include "leading_zeroes.h"
#include "trailing_zeroes.h"

#define I8H_BITS(X) U8H_BITS(X)
#define I8H_BIT(X,N) I32_BIT(I8H_BITS(X),N)

#endif