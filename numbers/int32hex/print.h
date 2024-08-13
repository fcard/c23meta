#ifndef C23META_I32H_PRINT
#define C23META_I32H_PRINT

#define I32H_PRINT(X) _I32H_PRINT_C(X)
#define _I32H_PRINT_C(X) CAT(_I32H_PRINT,I32H_SIGN_BIT(X))(U32H_PRINT(X))
#define _I32H_PRINT0(X) X
#define _I32H_PRINT1(X) -X

#endif