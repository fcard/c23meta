#ifndef C23META_PAIR_SECOND
#define C23META_PAIR_SECOND

#define PAIR_SECOND(X) _PAIR_SECOND_EVAL(_PAIR_SECOND X)
#define _PAIR_SECOND_EVAL(X) X
#define _PAIR_SECOND(X,Y) Y

#endif