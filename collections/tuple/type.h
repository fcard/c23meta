#ifndef C23META_TUPLE_TYPE
#define C23META_TUPLE_TYPE

#define TUPLE_TYPE(...) typeof(LIST_AS_TUPLE_VALUE(LIST_MAP(_TUPLE_TYPE_MAPPER, LIST(__VA_ARGS__))))
#define _TUPLE_TYPE_MAPPER(T) (*((T*)nullptr))

#endif