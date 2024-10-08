#ifndef C23META_VECTOR_AS_ARRAY
#define C23META_VECTOR_AS_ARRAY

#define VECTOR32_AS_ARRAY(X,...) _VECTOR32_AS_ARRAY_C(X __VA_OPT__(,) __VA_ARGS__)
#define _VECTOR32_AS_ARRAY_C(X,...) _VECTOR32_AS_ARRAY(VECTOR32_LENGTH(X), _VECTOR32_AS_ARRAY_TYPE ## __VA_OPT__(1(__VA_ARGS__) IGNORE)(X), VECTOR32_VALUES(X))
#define _VECTOR32_AS_ARRAY_EVAL(X) VECTOR_APPLY(_VECTOR_AS_ARRAY, X)
#define _VECTOR32_AS_ARRAY(LEN,TYPE,ARGS) (TYPE[LEN]){UNWRAP ARGS}

#define _VECTOR32_AS_ARRAY_TYPE(X) typeof(VECTOR32_NTH(X,0))
#define _VECTOR32_AS_ARRAY_TYPE1(T) T
#endif