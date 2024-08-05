#ifndef C23META_U32H_CONVERT
#define C23META_U32H_CONVERT

#define U32H_CONVERT(X) _U32H_CONVERT X
#define _U32H_CONVERT(A0,A1,A2,A3,A4,A5,A6,A7)\
  ((0x ## A0 << 0)  + (0x ## A1 << 4)  + (0x ## A2 << 8) + (0x ## A3 << 12) + (0x ## A4 << 16) +\
   (0x ## A5 << 20) + (0x ## A6 << 24) + (0x ## A7 << 28))
#endif