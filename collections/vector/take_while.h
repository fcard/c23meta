#ifndef C23META_VECTOR_TAKE_WHILE
#define C23META_VECTOR_TAKE_WHILE

#define VECTOR32_TAKE_WHILE(F,X) TUPLE_AS_VECTOR32(TUPLE_TAKE_WHILE(F,VECTOR32_AS_TUPLE(X)))

#endif