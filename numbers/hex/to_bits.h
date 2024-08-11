#ifndef C23META_HEX_TO_BITS
#define C23META_HEX_TO_BITS

#define HEX_TO_BITS(HEX) _HEX_TO_BITS_X ## HEX
#define _HEX_TO_BITS_X0 0,0,0,0
#define _HEX_TO_BITS_X1 1,0,0,0
#define _HEX_TO_BITS_X2 0,1,0,0
#define _HEX_TO_BITS_X3 1,1,0,0
#define _HEX_TO_BITS_X4 0,0,1,0
#define _HEX_TO_BITS_X5 1,0,1,0
#define _HEX_TO_BITS_X6 0,1,1,0
#define _HEX_TO_BITS_X7 1,1,1,0
#define _HEX_TO_BITS_X8 0,0,0,1
#define _HEX_TO_BITS_X9 1,0,0,1
#define _HEX_TO_BITS_Xa 0,1,0,1
#define _HEX_TO_BITS_Xb 1,1,0,1
#define _HEX_TO_BITS_Xc 0,0,1,1
#define _HEX_TO_BITS_Xd 1,0,1,1
#define _HEX_TO_BITS_Xe 0,1,1,1
#define _HEX_TO_BITS_Xf 1,1,1,1

#endif