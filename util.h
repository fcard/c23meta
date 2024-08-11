#ifndef C23META_UTIL
#define C23META_UTIL

#define UNWRAP(...) __VA_ARGS__
#define UNWRAP2(...) UNWRAP __VA_ARGS__
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

#define ARGCOUNT(...) _ARGCOUNT ## __VA_OPT__(1(__VA_ARGS__)IGNORE) (0)
#define _ARGCOUNT(N) N
#define _ARGCOUNT1(X,...) _ARGCOUNT ## __VA_OPT__(2(__VA_ARGS__)IGNORE) (1)
#define _ARGCOUNT2(X,...) _ARGCOUNT ## __VA_OPT__(3(__VA_ARGS__)IGNORE) (2)
#define _ARGCOUNT3(X,...) _ARGCOUNT ## __VA_OPT__(4(__VA_ARGS__)IGNORE) (3)
#define _ARGCOUNT4(X,...) _ARGCOUNT ## __VA_OPT__(5(__VA_ARGS__)IGNORE) (4)
#define _ARGCOUNT5(X,...) _ARGCOUNT ## __VA_OPT__(6(__VA_ARGS__)IGNORE) (5)
#define _ARGCOUNT6(X,...) _ARGCOUNT ## __VA_OPT__(7(__VA_ARGS__)IGNORE) (6)
#define _ARGCOUNT7(X,...) _ARGCOUNT ## __VA_OPT__(8(__VA_ARGS__)IGNORE) (7)
#define _ARGCOUNT8(X,...) _ARGCOUNT ## __VA_OPT__(9(__VA_ARGS__)IGNORE) (8)
#define _ARGCOUNT9(X,...) _ARGCOUNT ## __VA_OPT__(10(__VA_ARGS__)IGNORE) (9)
#define _ARGCOUNT10(X,...) _ARGCOUNT ## __VA_OPT__(11(__VA_ARGS__)IGNORE) (10)
#define _ARGCOUNT11(X,...) _ARGCOUNT ## __VA_OPT__(12(__VA_ARGS__)IGNORE) (11)
#define _ARGCOUNT12(X,...) _ARGCOUNT ## __VA_OPT__(13(__VA_ARGS__)IGNORE) (12)
#define _ARGCOUNT13(X,...) _ARGCOUNT ## __VA_OPT__(14(__VA_ARGS__)IGNORE) (13)
#define _ARGCOUNT14(X,...) _ARGCOUNT ## __VA_OPT__(15(__VA_ARGS__)IGNORE) (14)
#define _ARGCOUNT15(X,...) _ARGCOUNT ## __VA_OPT__(16(__VA_ARGS__)IGNORE) (15)
#define _ARGCOUNT16(X,...) _ARGCOUNT ## __VA_OPT__(17(__VA_ARGS__)IGNORE) (16)
#define _ARGCOUNT17(X,...) _ARGCOUNT ## __VA_OPT__(18(__VA_ARGS__)IGNORE) (17)
#define _ARGCOUNT18(X,...) _ARGCOUNT ## __VA_OPT__(19(__VA_ARGS__)IGNORE) (18)
#define _ARGCOUNT19(X,...) _ARGCOUNT ## __VA_OPT__(20(__VA_ARGS__)IGNORE) (19)
#define _ARGCOUNT20(X,...) _ARGCOUNT ## __VA_OPT__(21(__VA_ARGS__)IGNORE) (20)
#define _ARGCOUNT21(X,...) _ARGCOUNT ## __VA_OPT__(22(__VA_ARGS__)IGNORE) (21)
#define _ARGCOUNT22(X,...) _ARGCOUNT ## __VA_OPT__(23(__VA_ARGS__)IGNORE) (22)
#define _ARGCOUNT23(X,...) _ARGCOUNT ## __VA_OPT__(24(__VA_ARGS__)IGNORE) (23)
#define _ARGCOUNT24(X,...) _ARGCOUNT ## __VA_OPT__(25(__VA_ARGS__)IGNORE) (24)
#define _ARGCOUNT25(X,...) _ARGCOUNT ## __VA_OPT__(26(__VA_ARGS__)IGNORE) (25)
#define _ARGCOUNT26(X,...) _ARGCOUNT ## __VA_OPT__(27(__VA_ARGS__)IGNORE) (26)
#define _ARGCOUNT27(X,...) _ARGCOUNT ## __VA_OPT__(28(__VA_ARGS__)IGNORE) (27)
#define _ARGCOUNT28(X,...) _ARGCOUNT ## __VA_OPT__(29(__VA_ARGS__)IGNORE) (28)
#define _ARGCOUNT29(X,...) _ARGCOUNT ## __VA_OPT__(30(__VA_ARGS__)IGNORE) (29)
#define _ARGCOUNT30(X,...) _ARGCOUNT ## __VA_OPT__(31(__VA_ARGS__)IGNORE) (30)
#define _ARGCOUNT31(X,...) _ARGCOUNT ## __VA_OPT__(32(__VA_ARGS__)IGNORE) (31)
#define _ARGCOUNT32(X,...) 32

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
#define _REVX(X,...) __VA_OPT__(DEFER(_REVX_I)()(__VA_ARGS__),)X
#define _REVX_I() _REVX

#define STRING(...) _STR(__VA_ARGS__)
#define _STR(...) #__VA_ARGS__

#define STRING_CAT(X,Y) _STR_CAT(X,Y)
#define _STR_CAT(X,Y) X Y

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


#define CAT_ALL(X,...)  CAT(X __VA_OPT__(, CAT_ALL2(__VA_ARGS__)))
#define CAT_ALL2(X,...) CAT(X __VA_OPT__(, CAT_ALL3(__VA_ARGS__)))
#define CAT_ALL3(X,...) CAT(X __VA_OPT__(, CAT_ALL4(__VA_ARGS__)))
#define CAT_ALL4(X,...) CAT(X __VA_OPT__(, CAT_ALL5(__VA_ARGS__)))
#define CAT_ALL5(X,...) CAT(X __VA_OPT__(, CAT_ALL6(__VA_ARGS__)))
#define CAT_ALL6(X,...) CAT(X __VA_OPT__(, CAT_ALL7(__VA_ARGS__)))
#define CAT_ALL7(X,...) CAT(X __VA_OPT__(, CAT_ALL8(__VA_ARGS__)))
#define CAT_ALL8(X,...) CAT(X __VA_OPT__(, CAT_ALL9(__VA_ARGS__)))
#define CAT_ALL9(X,...) CAT(X __VA_OPT__(, CAT_ALL10(__VA_ARGS__)))
#define CAT_ALL10(X,...) CAT(X __VA_OPT__(, CAT_ALL11(__VA_ARGS__)))
#define CAT_ALL11(X,...) CAT(X __VA_OPT__(, CAT_ALL12(__VA_ARGS__)))
#define CAT_ALL12(X,...) CAT(X __VA_OPT__(, CAT_ALL13(__VA_ARGS__)))
#define CAT_ALL13(X,...) CAT(X __VA_OPT__(, CAT_ALL14(__VA_ARGS__)))
#define CAT_ALL14(X,...) CAT(X __VA_OPT__(, CAT_ALL15(__VA_ARGS__)))
#define CAT_ALL15(X,...) CAT(X __VA_OPT__(, CAT_ALL16(__VA_ARGS__)))
#define CAT_ALL16(X,...) CAT(X __VA_OPT__(, CAT_ALL17(__VA_ARGS__)))
#define CAT_ALL17(X,...) CAT(X __VA_OPT__(, CAT_ALL18(__VA_ARGS__)))
#define CAT_ALL18(X,...) CAT(X __VA_OPT__(, CAT_ALL19(__VA_ARGS__)))
#define CAT_ALL19(X,...) CAT(X __VA_OPT__(, CAT_ALL20(__VA_ARGS__)))
#define CAT_ALL20(X,...) CAT(X __VA_OPT__(, CAT_ALL21(__VA_ARGS__)))
#define CAT_ALL21(X,...) CAT(X __VA_OPT__(, CAT_ALL22(__VA_ARGS__)))
#define CAT_ALL22(X,...) CAT(X __VA_OPT__(, CAT_ALL23(__VA_ARGS__)))
#define CAT_ALL23(X,...) CAT(X __VA_OPT__(, CAT_ALL24(__VA_ARGS__)))
#define CAT_ALL24(X,...) CAT(X __VA_OPT__(, CAT_ALL25(__VA_ARGS__)))
#define CAT_ALL25(X,...) CAT(X __VA_OPT__(, CAT_ALL26(__VA_ARGS__)))
#define CAT_ALL26(X,...) CAT(X __VA_OPT__(, CAT_ALL27(__VA_ARGS__)))
#define CAT_ALL27(X,...) CAT(X __VA_OPT__(, CAT_ALL28(__VA_ARGS__)))
#define CAT_ALL28(X,...) CAT(X __VA_OPT__(, CAT_ALL29(__VA_ARGS__)))
#define CAT_ALL29(X,...) CAT(X __VA_OPT__(, CAT_ALL30(__VA_ARGS__)))
#define CAT_ALL30(X,...) CAT(X __VA_OPT__(, CAT_ALL31(__VA_ARGS__)))
#define CAT_ALL31(X,...) CAT(X __VA_OPT__(, CAT_ALL32(__VA_ARGS__)))
#define CAT_ALL32(X,...) CAT(X __VA_OPT__(, CAT_ALL33(__VA_ARGS__)))
#define CAT_ALL33(X,...) CAT(X __VA_OPT__(, CAT_ALL34(__VA_ARGS__)))
#define CAT_ALL34(X,...) CAT(X __VA_OPT__(, CAT_ALL35(__VA_ARGS__)))
#define CAT_ALL35(X,...) CAT(X __VA_OPT__(, CAT_ALL36(__VA_ARGS__)))
#define CAT_ALL36(X,...) CAT(X __VA_OPT__(, CAT_ALL37(__VA_ARGS__)))
#define CAT_ALL37(X,...) CAT(X __VA_OPT__(, CAT_ALL38(__VA_ARGS__)))
#define CAT_ALL38(X,...) CAT(X __VA_OPT__(, CAT_ALL39(__VA_ARGS__)))
#define CAT_ALL39(X,...) CAT(X __VA_OPT__(, CAT_ALL40(__VA_ARGS__)))
#define CAT_ALL40(X,...) CAT(X __VA_OPT__(, CAT_ALL41(__VA_ARGS__)))
#define CAT_ALL41(X,...) X

#endif