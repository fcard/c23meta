
#ifdef __COUNTER__
#ifndef C23META_LIST_AS_DATA
#define C23META_LIST_AS_DATA
#include <stdlib.h>

#define LIST_AS_DATA_VALUE(X,...) _LIST_AS_DATA_VALUE(CAT(_LISTVARNAME, __COUNTER__),X __VA_OPT__(,) __VA_ARGS__)
#define _LIST_AS_DATA_VALUE(VARNAME,...) ({LIST_AS_DATA(VARNAME, __VA_ARGS__); VARNAME;})

#define LIST_AS_DATA(VARNAME,X,...)\
  _LIST_AS_DATA_EVAL(_LIST_AS_DATA(VARNAME, _LIST_AS_DATA_TYPE ## __VA_OPT__(1(__VA_ARGS__) IGNORE)(X), CAT(_LISTSTRUCT, __COUNTER__), X))
#define _LIST_AS_DATA_EVAL(X)  _LIST_AS_DATA_EVAL1(_LIST_AS_DATA_EVAL1(_LIST_AS_DATA_EVAL1(_LIST_AS_DATA_EVAL1(X))))
#define _LIST_AS_DATA_EVAL1(X) _LIST_AS_DATA_EVAL2(_LIST_AS_DATA_EVAL2(_LIST_AS_DATA_EVAL2(_LIST_AS_DATA_EVAL2(X))))
#define _LIST_AS_DATA_EVAL2(X) _LIST_AS_DATA_EVAL3(_LIST_AS_DATA_EVAL3(_LIST_AS_DATA_EVAL3(_LIST_AS_DATA_EVAL3(X))))
#define _LIST_AS_DATA_EVAL3(X) X

#define _LIST_AS_DATA_TYPE(X) typeof(LIST_FIRST(X))
#define _LIST_AS_DATA_TYPE1(T) T


#define _LIST_AS_DATA(VARNAME, TYPE, LISTNAME, X)\
  struct LISTNAME {\
    TYPE first;\
    struct LISTNAME* rest;\
  };\
  struct LISTNAME* VARNAME = nullptr;\
  _LIST_AS_DATA_X(VARNAME,TYPE,LISTNAME,X)

#define _LIST_AS_DATA_X(VARNAME, TYPE, LISTNAME, X)\
  CAT(_LIST_AS_DATA_Y, LIST_IS_NIL(X))(VARNAME, TYPE, LISTNAME, X)

#define _LIST_AS_DATA_Y1(VARNAME, TYPE, LISTNAME, X)
#define _LIST_AS_DATA_Y0(VARNAME, TYPE, LISTNAME, X)\
  VARNAME = malloc(sizeof(struct LISTNAME));\
  VARNAME->first = (TYPE)LIST_FIRST(X);\
  VARNAME->rest = nullptr;\
  DEFER(_LIST_AS_DATA_I)()(VARNAME->rest, TYPE, LISTNAME, LIST_REST(X))
  
#define _LIST_AS_DATA_I() _LIST_AS_DATA_X

#endif
#endif