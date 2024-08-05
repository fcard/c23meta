#ifndef C23META_LIST_TYPE
#define C23META_LIST_TYPE

#define LIST_TYPE(T) _LIST_TYPE(CAT(_LISTSTRUCT, __COUNTER__), T)
#define _LIST_TYPE(LISTNAME,T) struct LISTNAME { T first; struct LISTNAME* rest;}*

#endif