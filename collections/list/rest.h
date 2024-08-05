#ifndef C23META_LIST_REST
#define C23META_LIST_REST

#define LIST_REST(X) _LIST_REST_EVAL(_LIST_REST X)
#define _LIST_REST_EVAL(X) X
#define _LIST_REST(...) _LIST_REST_X ## __VA_OPT__(1(__VA_ARGS__))
#define _LIST_REST_X LIST_NIL
#define _LIST_REST_X1(X,Y) Y

#endif