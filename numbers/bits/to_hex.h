#ifndef BINARY_BITS_TO_HEX
#define BINARY_BITS_TO_HEX

#define BITS_TO_HEX(A0,A1,A2,A3) _BITS_TO_HEX_X ## A0 ## A1 ## A2 ## A3
#define _BITS_TO_HEX_X0000 0
#define _BITS_TO_HEX_X1000 1
#define _BITS_TO_HEX_X0100 2
#define _BITS_TO_HEX_X1100 3
#define _BITS_TO_HEX_X0010 4
#define _BITS_TO_HEX_X1010 5
#define _BITS_TO_HEX_X0110 6
#define _BITS_TO_HEX_X1110 7
#define _BITS_TO_HEX_X0001 8
#define _BITS_TO_HEX_X1001 9
#define _BITS_TO_HEX_X0101 a
#define _BITS_TO_HEX_X1101 b
#define _BITS_TO_HEX_X0011 c
#define _BITS_TO_HEX_X1011 d
#define _BITS_TO_HEX_X0111 e
#define _BITS_TO_HEX_X1111 f

#endif