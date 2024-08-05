#ifndef C23META_UTIL
#define C23META_UTIL

#define UNWRAP(...) __VA_ARGS__
#define COMMA_IF(...) __VA_OPT__(,)
#define CALL(F,...) F(__VA_ARGS__)
#define UNWRAP_CALL(F,X) F X

#define COMMA_IF_BOTH(X,Y) CAT(CAT(_COMMA_IF_BOTH_X, _COMMA_IF_BOTH(X)), _COMMA_IF_BOTH(Y))
#define _COMMA_IF_BOTH(X) _COMMA_IF_BOTH_Y X
#define _COMMA_IF_BOTH_X00
#define _COMMA_IF_BOTH_X10
#define _COMMA_IF_BOTH_X01
#define _COMMA_IF_BOTH_X11 ,
#define _COMMA_IF_BOTH_Y(...) _COMMA_IF_BOTH_Z ## __VA_OPT__(1)
#define _COMMA_IF_BOTH_Z1 1
#define _COMMA_IF_BOTH_Z  0

#define ARGCOUNT(...) _ARGCOUNT ## __VA_OPT__(1(__VA_ARGS__) IGNORE) (0)
#define _ARGCOUNT(N) N
#define _ARGCOUNT1(X,...) _ARGCOUNT ## __VA_OPT__(2(__VA_ARGS__) IGNORE) (1)
#define _ARGCOUNT2(X,...) _ARGCOUNT ## __VA_OPT__(3(__VA_ARGS__) IGNORE) (2)
#define _ARGCOUNT3(X,...) _ARGCOUNT ## __VA_OPT__(4(__VA_ARGS__) IGNORE) (3)
#define _ARGCOUNT4(X,...) _ARGCOUNT ## __VA_OPT__(5(__VA_ARGS__) IGNORE) (4)
#define _ARGCOUNT5(X,...) _ARGCOUNT ## __VA_OPT__(6(__VA_ARGS__) IGNORE) (5)
#define _ARGCOUNT6(X,...) _ARGCOUNT ## __VA_OPT__(7(__VA_ARGS__) IGNORE) (6)
#define _ARGCOUNT7(X,...) _ARGCOUNT ## __VA_OPT__(8(__VA_ARGS__) IGNORE) (7)
#define _ARGCOUNT8(X,...) _ARGCOUNT ## __VA_OPT__(9(__VA_ARGS__) IGNORE) (8)
#define _ARGCOUNT9(X,...) _ARGCOUNT ## __VA_OPT__(10(__VA_ARGS__) IGNORE) (9)
#define _ARGCOUNT10(X,...) _ARGCOUNT ## __VA_OPT__(11(__VA_ARGS__) IGNORE) (10)
#define _ARGCOUNT11(X,...) _ARGCOUNT ## __VA_OPT__(12(__VA_ARGS__) IGNORE) (11)
#define _ARGCOUNT12(X,...) _ARGCOUNT ## __VA_OPT__(13(__VA_ARGS__) IGNORE) (12)
#define _ARGCOUNT13(X,...) _ARGCOUNT ## __VA_OPT__(14(__VA_ARGS__) IGNORE) (13)
#define _ARGCOUNT14(X,...) _ARGCOUNT ## __VA_OPT__(15(__VA_ARGS__) IGNORE) (14)
#define _ARGCOUNT15(X,...) _ARGCOUNT ## __VA_OPT__(16(__VA_ARGS__) IGNORE) (15)
#define _ARGCOUNT16(X,...) 16

#define ID(...) __VA_ARGS__
#define IGNORE(...)
#define IGNORE_THEN_ID(...) ID
#define ID_THEN_IGNORE(...) __VA_ARGS__ IGNORE
#define IGNORE_THEN_ID_THEN_IGNORE(X) ID_THEN_IGNORE

#define EMPTY()
#define DEFER(F) F EMPTY()
#define EVAL1(X) X

#define EVAL(...)  EVAL2(EVAL2(EVAL2(__VA_ARGS__)))
#define EVAL2(...) EVAL3(EVAL3(EVAL3(__VA_ARGS__)))
#define EVAL3(...) EVAL4(EVAL4(EVAL4(__VA_ARGS__)))
#define EVAL4(...) EVAL5(EVAL5(EVAL5(__VA_ARGS__)))
#define EVAL5(...) __VA_ARGS__

#define DO_PRAGMA(X) // _Pragma(#X)
#define MESSAGE(X) _MSG(X)
#define _MSG(X) DO_PRAGMA(message #X)

#define REV_EVAL(...)  REV_EVAL2(REV_EVAL2(REV_EVAL2(__VA_ARGS__)))
#define REV_EVAL2(...) REV_EVAL3(REV_EVAL3(REV_EVAL3(__VA_ARGS__)))
#define REV_EVAL3(...) REV_EVAL4(REV_EVAL4(REV_EVAL4(__VA_ARGS__)))
#define REV_EVAL4(...) REV_EVAL5(REV_EVAL5(REV_EVAL5(__VA_ARGS__)))
#define REV_EVAL5(...) __VA_ARGS__

#define REVERSE(...) (REV_EVAL(_REV(__VA_ARGS__)))
#define _REV(...) __VA_OPT__(_REVX(__VA_ARGS__))
#define _REVX(X,...) __VA_OPT__(OBSTRUCT(_REVX_I)()(__VA_ARGS__),)X
#define _REVX_I() _REVX

#define STRING(X) _STR(X)
#define _STR(X) #X

#define EVALX(...)  EVALX2(EVALX2(EVALX2(__VA_ARGS__)))
#define EVALX2(...) EVALX3(EVALX3(EVALX3(__VA_ARGS__)))
#define EVALX3(...) EVALX4(EVALX4(EVALX4(__VA_ARGS__)))
#define EVALX4(...) EVALX5(EVALX5(EVALX5(__VA_ARGS__)))
#define EVALX5(...) __VA_ARGS__

#define OBSTRUCT(...) __VA_ARGS__ DEFER(EMPTY)()

#define PICK(F,G,X,...) _PICK __VA_OPT__((G(__VA_ARGS__)) IGNORE) (F(X))
#define _PICK(X) X

#define PRIMITIVE_CAT(X,...) X ## __VA_OPT__(__VA_ARGS__)
#define CAT(...) PRIMITIVE_CAT(__VA_ARGS__)

#define CAT32(C0,C1,C2,C3,C4,C5,C6,C7,C8,C9,C10,C11,C12,C13,C14,C15,C16,\
              C17,C18,C19,C20,C21,C22,C23,C24,C25,C26,C27,C28,C29,C30,C31)\
        PRIMITIVE_CAT32(C0,C1,C2,C3,C4,C5,C6,C7,C8,C9,C10,C11,C12,C13,C14,C15,C16,\
              C17,C18,C19,C20,C21,C22,C23,C24,C25,C26,C27,C28,C29,C30,C31)\

#define PRIMITIVE_CAT32(C0,C1,C2,C3,C4,C5,C6,C7,C8,C9,C10,C11,C12,C13,C14,C15,C16,\
              C17,C18,C19,C20,C21,C22,C23,C24,C25,C26,C27,C28,C29,C30,C31)\
        C0 ## C1 ## C2 ## C3 ## C4 ## C5 ## C6 ## C7 ## C8 ## C9 ## C10 ## C11 ## C12 ## C13 ## C14 ## C15 ## C16 ##\
        C17 ## C18 ## C19 ## C20 ## C21 ## C22 ## C23 ## C24 ## C25 ## C26 ## C27 ## C28 ## C29 ## C30 ## C31


#define CAT_ALL(X,...)  DEFER(CAT)(X __VA_OPT__(, CAT_ALL2(__VA_ARGS__)))
#define CAT_ALL2(X,...) DEFER(CAT)(X __VA_OPT__(, CAT_ALL3(__VA_ARGS__)))
#define CAT_ALL3(X,...) DEFER(CAT)(X __VA_OPT__(, CAT_ALL4(__VA_ARGS__)))
#define CAT_ALL4(X,...) DEFER(CAT)(X __VA_OPT__(, CAT_ALL5(__VA_ARGS__)))
#define CAT_ALL5(X,...) DEFER(CAT)(X __VA_OPT__(, CAT_ALL6(__VA_ARGS__)))
#define CAT_ALL6(X,...) DEFER(CAT)(X __VA_OPT__(, CAT_ALL7(__VA_ARGS__)))
#define CAT_ALL7(X,...) DEFER(CAT)(X __VA_OPT__(, CAT_ALL8(__VA_ARGS__)))
#define CAT_ALL8(X,...) X

#endif