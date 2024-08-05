#ifndef C23META_U128H_CMP
#define C23META_U128H_CMP

#include "eq.h"
#include "lt.h"
#include "neq.h"
#include "geq.h"
#include "gt.h"
#include "leq.h"
#include "is_odd.h"
#include "is_even.h"

#define U128H_CMP(X,Y) _U128H_CMP(U128H_LT(X,Y), U128H_LT(Y,X))
#define _U128H_CMP(LXY,LYX) _U128H_CMP_X(LXY,LYX)
#define _U128H_CMP_X(LXY,LYX) _U128H_CMP_Y ## LXY ## LYX
#define _U128H_CMP_Y00 EQUAL
#define _U128H_CMP_Y10 LESS
#define _U128H_CMP_Y01 GREATER

#endif