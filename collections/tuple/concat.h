#ifndef C23META_TUPLE_CONCAT
#define C23META_TUPLE_CONCAT

#define TUPLE_CONCAT(X,Y) _TUPLE_CONCAT_C(X,Y)
#define _TUPLE_CONCAT_C(X,Y) (UNWRAP(UNWRAP X)COMMA_IF_BOTH(X,Y)UNWRAP Y)

#endif