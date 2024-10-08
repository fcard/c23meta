#ifndef C23META_U32H_PRINT
#define C23META_U32H_PRINT

#define U32H_PRINT(X) _U32H_PRINT_C(X)
#define _U32H_PRINT_C(X) _U32H_PRINT_CAT(_U32H_PRINT_EVAL((_U32H_PRINT(U32H_GT(X,U32H_9),X))))
#define _U32H_PRINT_EVAL(X) _U32H_PRINT_EVAL1(_U32H_PRINT_EVAL1(_U32H_PRINT_EVAL1(_U32H_PRINT_EVAL1(X))))
#define _U32H_PRINT_EVAL1(X) _U32H_PRINT_EVAL2(_U32H_PRINT_EVAL2(_U32H_PRINT_EVAL2(_U32H_PRINT_EVAL2(X))))
#define _U32H_PRINT_EVAL2(X) X
#define _U32H_PRINT_CAT(X) _U32H_PRINT_EVAL(CAT_ALL X)

#define _U32H_PRINT(G,X) CAT(_U32H_PRINT_X,G)(U32H_DIV(X,U32H_10)) U32H_PRINT_DIGIT(U32H_REM(X,U32H_10))
#define _U32H_PRINT_X0(X)
#define _U32H_PRINT_X1(X) DEFER(_U32H_PRINT_I)()(U32H_GT(X,U32H_9),X),
#define _U32H_PRINT_I() _U32H_PRINT

#define U32H_PRINT_DIGIT(X) _U32H_PRINT_DIGIT(CAT_ALL X)
#define _U32H_PRINT_DIGIT(X) CAT(_U32H_PRINT_DIGIT_X,X)
#define _U32H_PRINT_DIGIT_X00000000 0
#define _U32H_PRINT_DIGIT_X10000000 1
#define _U32H_PRINT_DIGIT_X20000000 2
#define _U32H_PRINT_DIGIT_X30000000 3
#define _U32H_PRINT_DIGIT_X40000000 4
#define _U32H_PRINT_DIGIT_X50000000 5
#define _U32H_PRINT_DIGIT_X60000000 6
#define _U32H_PRINT_DIGIT_X70000000 7
#define _U32H_PRINT_DIGIT_X80000000 8
#define _U32H_PRINT_DIGIT_X90000000 9

#endif