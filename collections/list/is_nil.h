#ifndef C23META_LIST_IS_NIL
#define C23META_LIST_IS_NIL

#define LIST_IS_NIL(X) _LIST_IS_NIL_EVAL(_LIST_IS_NIL X)
#define _LIST_IS_NIL_EVAL(X) X

#define _LIST_IS_NIL(...) _LIST_IS_NIL_X ## __VA_OPT__(1)
#define _LIST_IS_NIL_X  1
#define _LIST_IS_NIL_X1 0

#endif