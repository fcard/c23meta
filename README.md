# C23META
## Experiments with c23's preprocessor

Implements numeric computation and collections using only the C Preprocessor.

```c
#include "numbers/numbers.h"
#include "collections/list/list.h"

#define FACTORIAL(N)\
  LIST_FOLDL(U128H_MUL,\
    LIST_MAP(U128H_FROM_U32H,\
      LIST_RANGE(U32H_1, N)), U128H_1)

#define S(X) STRING(U128H_PRINT(X))

int main(void) {
  printf("%s\n", S(FACTORIAL(U32H_1)));
  printf("%s\n", S(FACTORIAL(U32H_5)));
  printf("%s\n", S(FACTORIAL(U32H_10)));
  printf("%s\n", S(FACTORIAL(U32H_15)));
  printf("%s\n", S(FACTORIAL(U32H_20)));
  printf("%s\n", S(FACTORIAL(U32H_30)));
}
```
```
1
120
3628800
1307674368000
2432902008176640000
265252859812191058636308480000000
```
