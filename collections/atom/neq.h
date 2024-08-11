#ifndef C23META_ATOM_NEQ
#define C23META_ATOM_NEQ

// example usage, testing for values different from the token "0":
// #define CHECK_ZERO0 ATOM_CHECK
// #if ATOM_NEQ(CHECK_ZERO, 1)
// #  pragma message "1 is not 0"
// #endif

#define ATOM_CHECK ~,~
#define ATOM_NEQ(CHECK,X) _ATOM_NEQ(CAT(CHECK,X))
#define _ATOM_NEQ(...) _ATOM_NEQ_X(__VA_ARGS__)
#define _ATOM_NEQ_X(X,...) _ATOM_NEQ_Y ## __VA_OPT__(0)
#define _ATOM_NEQ_Y0 0
#define _ATOM_NEQ_Y  1

#endif