#ifndef C23META_U32_PRINT
#define C23META_U32_PRINT

#define U32_PRINT(X) _U32_PRINT_C(X)
#define _U32_PRINT_C(X) _U32_PRINT_CAT(_U32_PRINT_EVAL((_U32_PRINT(U32_GT(X,U32_9),X))))
#define _U32_PRINT_EVAL(X) _U32_PRINT_EVAL1(_U32_PRINT_EVAL1(_U32_PRINT_EVAL1(_U32_PRINT_EVAL1(X))))
#define _U32_PRINT_EVAL1(X) _U32_PRINT_EVAL2(_U32_PRINT_EVAL2(_U32_PRINT_EVAL2(_U32_PRINT_EVAL2(X))))
#define _U32_PRINT_EVAL2(X) X
#define _U32_PRINT_CAT(X) _U32_PRINT_EVAL(CAT_ALL X)

#define _U32_PRINT(G,X) CAT(_U32_PRINT_X,G)(U32_DIV(X,U32_10)) U32_PRINT_DIGIT(U32_REM(X,U32_10))
#define _U32_PRINT_X0(X)
#define _U32_PRINT_X1(X) DEFER(_U32_PRINT_I)()(U32_GT(X,U32_9),X),
#define _U32_PRINT_I() _U32_PRINT

#define U32_PRINT_DIGIT(X) _U32_PRINT_DIGIT(CAT32 X)
#define _U32_PRINT_DIGIT(X) CAT(_U32_PRINT_DIGIT_X,X)
#define _U32_PRINT_DIGIT_X00000000000000000000000000000000 0
#define _U32_PRINT_DIGIT_X10000000000000000000000000000000 1
#define _U32_PRINT_DIGIT_X01000000000000000000000000000000 2
#define _U32_PRINT_DIGIT_X11000000000000000000000000000000 3
#define _U32_PRINT_DIGIT_X00100000000000000000000000000000 4
#define _U32_PRINT_DIGIT_X10100000000000000000000000000000 5
#define _U32_PRINT_DIGIT_X01100000000000000000000000000000 6
#define _U32_PRINT_DIGIT_X11100000000000000000000000000000 7
#define _U32_PRINT_DIGIT_X00010000000000000000000000000000 8
#define _U32_PRINT_DIGIT_X10010000000000000000000000000000 9

#endif