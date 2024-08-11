#ifndef C23META_ATOM_IS_ATOM
#define C23META_ATOM_IS_ATOM

// example usage:
// #if IS_ATOM(0)
// #  pragma message "0 is an atom"
// #endif
// #if !IS_ATOM((1,2,3))
// #  pragma message "(1,2,3) is not an atom"
// #endif

#define IS_ATOM(X) BOOL_NOT(IS_TUPLE(X))

#endif