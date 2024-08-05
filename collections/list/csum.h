#ifndef C23META_LIST_CSUM
#define C23META_LIST_CSUM

#define LIST_CSUM(X) LIST_FOLDL(_LIST_CSUM_ADD, X, 0)
#define _LIST_CSUM_ADD(X,Y) ((X)+(Y))

#endif