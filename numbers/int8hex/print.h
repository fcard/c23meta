#ifndef C23META_I8H_PRINT
#define C23META_I8H_PRINT

#define I8H_PRINT(X) _I8H_PRINT_C(X)
#define _I8H_PRINT_C(X) CAT(_I8H_PRINT,I8H_SIGN_BIT(X))(U8H_PRINT(X))
#define _I8H_PRINT0(X) X
#define _I8H_PRINT1(X) -X

#endif