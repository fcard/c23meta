#ifndef C23META_VECTOR32_AS_LIST
#define C23META_VECTOR32_AS_LIST

#define VECTOR32_AS_LIST(X) _VECTOR32_AS_LIST_EVAL(LIST VECTOR32_VALUES(X))
#define _VECTOR32_AS_LIST_EVAL(X) X

#endif