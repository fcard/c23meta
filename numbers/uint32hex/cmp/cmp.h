#ifndef C23META_U32H_CMP
#define C23META_U32H_CMP

#include "eq.h"
#include "lt.h"
#include "neq.h"
#include "geq.h"
#include "gt.h"
#include "leq.h"
#include "is_odd.h"
#include "is_even.h"

#define U32H_CMP(X,Y) _U32H_CMP(U32H_LT(X,Y), U32H_LT(Y,X))
#define _U32H_CMP(LXY,LYX) _U32H_CMP_X(LXY,LYX)
#define _U32H_CMP_X(LXY,LYX) _U32H_CMP_Y ## LXY ## LYX
#define _U32H_CMP_Y00 EQUAL
#define _U32H_CMP_Y10 LESS
#define _U32H_CMP_Y01 GREATER


#endif