#ifndef C23META_ATOM_EQ
#define C23META_ATOM_EQ

// example usage, testing for the token "0":
// #define CHECK_ZERO0 ATOM_CHECK
// #if ATOM_EQ(CHECK_ZERO, 0)
// #  pragma message "0 is 0"
// #endif

#define ATOM_EQ(CHECK,X) BOOL_NOT(ATOM_NEQ(CHECK,X))

#endif