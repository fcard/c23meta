#ifndef C23META_LIST_RANGE
#define C23META_LIST_RANGE

#define LIST_RANGE(X,Y,...) _LIST_RANGE_EVAL(_LIST_RANGE(X,Y, _LIST_RANGE_BY ## __VA_OPT__(_N(__VA_ARGS__))))
#define _LIST_RANGE_EVAL(X)  _LIST_RANGE_EVAL1(_LIST_RANGE_EVAL1(_LIST_RANGE_EVAL1(_LIST_RANGE_EVAL1(X))))
#define _LIST_RANGE_EVAL1(X) _LIST_RANGE_EVAL2(_LIST_RANGE_EVAL2(_LIST_RANGE_EVAL2(_LIST_RANGE_EVAL2(X))))
#define _LIST_RANGE_EVAL2(X) _LIST_RANGE_EVAL3(_LIST_RANGE_EVAL3(_LIST_RANGE_EVAL3(_LIST_RANGE_EVAL3(X))))
#define _LIST_RANGE_EVAL3(X) X

#define _LIST_RANGE_BY_N(X) X
#define _LIST_RANGE_BY I32H_1

#define _LIST_RANGE(X,Y,BY) CAT(_LIST_RANGE_X,I32H_SIGN_BIT(BY))(X,Y,BY)
#define _LIST_RANGE_X0(X,Y,BY) _LIST_RANGE_P(X,Y,BY)
#define _LIST_RANGE_X1(X,Y,BY) _LIST_RANGE_N(X,Y,BY)

#define _LIST_RANGE_P(X,Y,BY) CAT(_LIST_RANGE_P_X, I32H_GT(X,Y))(X,Y,BY)
#define _LIST_RANGE_P_X1(X,Y,BY) LIST_NIL
#define _LIST_RANGE_P_X0(X,Y,BY) (X,_LIST_RANGE_P_Y(I32H_ADD(X,BY),Y,BY))
#define _LIST_RANGE_P_Y(X,Y,BY) DEFER(_LIST_RANGE_P_I)()(X,Y,BY)
#define _LIST_RANGE_P_I() _LIST_RANGE_P

#define _LIST_RANGE_N(X,Y,BY) CAT(_LIST_RANGE_N_X, I32H_LT(X,Y))(X,Y,BY)
#define _LIST_RANGE_N_X1(X,Y,BY) LIST_NIL
#define _LIST_RANGE_N_X0(X,Y,BY) (X,_LIST_RANGE_N_Y(I32H_ADD(X,BY),Y,BY))
#define _LIST_RANGE_N_Y(X,Y,BY) DEFER(_LIST_RANGE_N_I)()(X,Y,BY)
#define _LIST_RANGE_N_I() _LIST_RANGE_N

#endif