#ifndef C23META_DEC5_CMP
#define C23META_DEC5_CMP

#include "eq.h"
#include "neq.h"
#include "geq.h"
#include "gt.h"
#include "leq.h"
#include "lt.h"
#include "is_even.h"
#include "is_odd.h"

#define DEC5_CMP(X,Y) CAT_ALL(_DEC5_CMP, DEC5_LT(X,Y), DEC5_LT(Y,X))
#define _DEC5_CMP00 EQUAL
#define _DEC5_CMP10 LESS
#define _DEC5_CMP01 GREATER

#endif