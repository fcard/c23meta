#ifndef C23META_U8H_CONVERT
#define C23META_U8H_CONVERT

#define U8H_CONVERT(X) _U8H_CONVERT X
#define _U8H_CONVERT(A0,A1) 0x ## A1 ## A0
#endif