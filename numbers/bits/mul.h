#ifndef C23META_BITS_MUL
#define C23META_BITS_MUL

#define BIT_AND32(X,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,\
                  A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
          (\
            BIT_AND1(X,A0),\
            BIT_AND1(X,A1),\
            BIT_AND1(X,A2),\
            BIT_AND1(X,A3),\
            BIT_AND1(X,A4),\
            BIT_AND1(X,A5),\
            BIT_AND1(X,A6),\
            BIT_AND1(X,A7),\
            BIT_AND1(X,A8),\
            BIT_AND1(X,A9),\
            BIT_AND1(X,A10),\
            BIT_AND1(X,A11),\
            BIT_AND1(X,A12),\
            BIT_AND1(X,A13),\
            BIT_AND1(X,A14),\
            BIT_AND1(X,A15),\
            BIT_AND1(X,A16),\
            BIT_AND1(X,A17),\
            BIT_AND1(X,A18),\
            BIT_AND1(X,A19),\
            BIT_AND1(X,A20),\
            BIT_AND1(X,A21),\
            BIT_AND1(X,A22),\
            BIT_AND1(X,A23),\
            BIT_AND1(X,A24),\
            BIT_AND1(X,A25),\
            BIT_AND1(X,A26),\
            BIT_AND1(X,A27),\
            BIT_AND1(X,A28),\
            BIT_AND1(X,A29),\
            BIT_AND1(X,A30),\
            BIT_AND1(X,A31)\
          )

#define BIT_AND1(A,B) BIT_AND1_ ## A ## B
#define BIT_AND1_00 0
#define BIT_AND1_01 0
#define BIT_AND1_10 0
#define BIT_AND1_11 1


#endif
