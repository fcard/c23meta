#ifndef C23META_TUPLE_REST
#define C23META_TUPLE_REST

#define TUPLE_REST(X) _TUPLE_REST X
#define _TUPLE_REST(X,...) (__VA_ARGS__)

#endif