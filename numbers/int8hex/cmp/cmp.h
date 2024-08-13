#ifndef C23META_I8H_CMP
#define C23META_I8H_CMP

#include "eq.h"
#include "neq.h"
#include "geq.h"
#include "gt.h"
#include "leq.h"
#include "lt.h"
#include "is_odd.h"
#include "is_even.h"

#define I8H_CMP(X,Y) _I8H_CMP_C(X,Y)
#define _I8H_CMP_C(X,Y) _I8H_CMP(I8H_LT(X,Y), I8H_LT(Y,X))
#define _I8H_CMP(LXY,LYX) _I8H_CMP_X(LXY,LYX)
#define _I8H_CMP_X(LXY,LYX) _I8H_CMP_Y ## LXY ## LYX
#define _I8H_CMP_Y00 EQUAL
#define _I8H_CMP_Y10 LESS
#define _I8H_CMP_Y01 GREATER


#endif