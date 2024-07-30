#ifndef C23META_I32_CMP
#define C23META_I32_CMP

#include "eq.h"
#include "neq.h"
#include "geq.h"
#include "gt.h"
#include "leq.h"
#include "lt.h"
#include "is_odd.h"
#include "is_even.h"

#define I32_CMP(X,Y) _I32_CMP(I32_LT(X,Y), I32_LT(Y,X))
#define _I32_CMP(LXY,LYX) _I32_CMP_X(LXY,LYX)
#define _I32_CMP_X(LXY,LYX) _I32_CMP_Y ## LXY ## LYX
#define _I32_CMP_Y00 EQUAL
#define _I32_CMP_Y10 LESS
#define _I32_CMP_Y01 GREATER


#endif