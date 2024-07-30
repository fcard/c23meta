#ifndef C23META_UTIL
#define C23META_UTIL

#define UNWRAP(...) __VA_ARGS__
#define COMMA_IF(...) __VA_OPT__(,)
#define CALL(F,...) F(__VA_ARGS__)
#define UNWRAP_CALL(F,X) F X

#define ID(...) __VA_ARGS__
#define IGNORE(...)
#define IGNORE_THEN_ID(...) ID
#define ID_THEN_IGNORE(...) __VA_ARGS__ IGNORE
#define IGNORE_THEN_ID_THEN_IGNORE(X) ID_THEN_IGNORE

#define ID2(...) __VA_ARGS__
#define IGNORE2(...)
#define IGNORE_THEN_ID2(...) ID
#define ID_THEN_IGNORE2(...) __VA_ARGS__ IGNORE
#define IGNORE_THEN_ID_THEN_IGNORE2(X) ID_THEN_IGNORE

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

#define PICK(F,G,X,...) _PICK_ ## __VA_OPT__(REST(G(__VA_ARGS__))) (F(X))
#define _PICK_REST(X) X IGNORE
#define _PICK_(X) X

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