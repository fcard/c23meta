#ifndef C23META_LIST_FLATTEN
#define C23META_LIST_FLATTEN

#define LIST_FLATTEN(X) LIST_FOLDL(LIST_CONCAT, X, LIST_NIL)

#endif