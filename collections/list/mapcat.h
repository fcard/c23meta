#ifndef C23META_LIST_MAPCAT
#define C23META_LIST_MAPCAT

#define LIST_MAPCAT(F,X) LIST_REDUCE(LIST_CONCAT, LIST_MAP(F,X))

#endif