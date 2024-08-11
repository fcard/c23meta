#ifndef C23META_LIST_LIST
#define C23META_LIST_LIST

#include "../../util.h"
#include "../../numbers/uint32/uint32.h"

#include "cons.h"
#include "first.h"
#include "rest.h"
#include "is_nil.h"
#include "is_empty.h"
#include "is_cons.h"
#include "is_list.h"
#include "reverse.h"
#include "map.h"
#include "map2.h"
#include "mapcat.h"
#include "foreach.h"
#include "foldl.h"
#include "foldr.h"
#include "reduce.h"
#include "walk.h"
#include "filter.h"
#include "remove.h"
#include "concat.h"
#include "eq.h"
#include "find_first.h"
#include "find_index.h"
#include "split.h"
#include "split_all.h"
#include "split_at.h"
#include "flatten.h"
#include "interpose.h"
#include "as_args.h"
#include "contains.h"
#include "every.h"
#include "none.h"
#include "nth.h"
#include "insert.h"
#include "push.h"
#include "enumerate.h"
#include "sort.h"
#include "zip.h"
#include "range.h"
#include "take.h"
#include "take_while.h"
#include "take_nth.h"
#include "take_last.h"
#include "drop.h"
#include "drop_while.h"
#include "drop_nth.h"
#include "drop_last.h"
#include "last.h"
#include "length.h"
#include "apply.h"
#include "csum.h"
#include "as_data.h"
#include "as_array.h"
#include "as_tuple.h"
#include "as_vector.h"
#include "type.h"

#define LIST_NIL ()

#define LIST(...) _LIST_EVAL(_LIST ## __VA_OPT__(1(__VA_ARGS__)))
#define _LIST_EVAL(X) _LIST_EVAL1(_LIST_EVAL1(_LIST_EVAL1(_LIST_EVAL1(X))))
#define _LIST_EVAL1(X) _LIST_EVAL2(_LIST_EVAL2(_LIST_EVAL2(_LIST_EVAL2(X))))
#define _LIST_EVAL2(X) _LIST_EVAL3(_LIST_EVAL3(_LIST_EVAL3(_LIST_EVAL3(X))))
#define _LIST_EVAL3(X) X

#define _LIST LIST_NIL
#define _LIST1(X,...) _LIST_X ## __VA_OPT__(CONS(X,__VA_ARGS__)IGNORE) (X)
#define _LIST_X(X) (X,LIST_NIL)
#define _LIST_XCONS(X,...) (X,DEFER(_LIST_I)()(__VA_ARGS__))
#define _LIST_I() _LIST1

#endif