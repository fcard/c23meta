#ifndef C23META_U32_CMP
#define C23META_U32_CMP

#include "eq.h"
#include "neq.h"
#include "geq.h"
#include "gt.h"
#include "leq.h"
#include "lt.h"
#include "is_odd.h"
#include "is_even.h"

#define U32_CMP(X,Y) _U32_CMP(U32_LT(X,Y), U32_LT(Y,X))
#define _U32_CMP(LXY,LYX) _U32_CMP_X(LXY,LYX)
#define _U32_CMP_X(LXY,LYX) _U32_CMP_Y ## LXY ## LYX
#define _U32_CMP_Y00 EQUAL
#define _U32_CMP_Y10 LESS
#define _U32_CMP_Y01 GREATER


#endif