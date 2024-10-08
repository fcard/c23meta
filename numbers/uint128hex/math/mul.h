#ifndef C23META_U128H_MUL
#define C23META_U128H_MUL
#include "add.h"
#include "../bits/bits.h"

#define U128H_MUL(X,Y) _U128H_MUL(X,Y)
#define _U128H_MUL(X,Y) _U128H_MUL_EVAL(DEFER(_U128H_MUL_X)(UNWRAP X, UNWRAP Y))
#define _U128H_MUL_EVAL(X) X

#define _U128H_MUL_X(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31,\
                     B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31)\
  _U128H_MUL_Y(\
    _U128H_MUL_DIGIT(A0,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A1,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A2,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A3,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A4,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A5,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A6,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A7,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A8,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A9,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A10,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A11,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A12,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A13,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A14,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A15,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A16,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A17,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A18,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A19,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A20,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A21,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A22,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A23,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A24,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A25,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A26,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A27,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A28,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A29,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A30,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31),\
    _U128H_MUL_DIGIT(A31,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31)\
  )

#define _U128H_MUL_Y(P0,P1,P2,P3,P4,P5,P6,P7,P8,P9,P10,P11,P12,P13,P14,P15,P16,P17,P18,P19,P20,P21,P22,P23,P24,P25,P26,P27,P28,P29,P30,P31)\
  U128H_ADD(P0,\
    U128H_ADD(_U128H_LSHIFTN(P1,1),\
      U128H_ADD(_U128H_LSHIFTN(P2,2),\
        U128H_ADD(_U128H_LSHIFTN(P3,3),\
          U128H_ADD(_U128H_LSHIFTN(P4,4),\
            U128H_ADD(_U128H_LSHIFTN(P5,5),\
              U128H_ADD(_U128H_LSHIFTN(P6,6),\
                U128H_ADD(_U128H_LSHIFTN(P7,7),\
                  U128H_ADD(_U128H_LSHIFTN(P8,8),\
                    U128H_ADD(_U128H_LSHIFTN(P9,9),\
                      U128H_ADD(_U128H_LSHIFTN(P10,10),\
                        U128H_ADD(_U128H_LSHIFTN(P11,11),\
                          U128H_ADD(_U128H_LSHIFTN(P12,12),\
                            U128H_ADD(_U128H_LSHIFTN(P13,13),\
                              U128H_ADD(_U128H_LSHIFTN(P14,14),\
                                U128H_ADD(_U128H_LSHIFTN(P15,15),\
                                  U128H_ADD(_U128H_LSHIFTN(P16,16),\
                                    U128H_ADD(_U128H_LSHIFTN(P17,17),\
                                      U128H_ADD(_U128H_LSHIFTN(P18,18),\
                                        U128H_ADD(_U128H_LSHIFTN(P19,19),\
                                          U128H_ADD(_U128H_LSHIFTN(P20,20),\
                                            U128H_ADD(_U128H_LSHIFTN(P21,21),\
                                              U128H_ADD(_U128H_LSHIFTN(P22,22),\
                                                U128H_ADD(_U128H_LSHIFTN(P23,23),\
                                                  U128H_ADD(_U128H_LSHIFTN(P24,24),\
                                                    U128H_ADD(_U128H_LSHIFTN(P25,25),\
                                                      U128H_ADD(_U128H_LSHIFTN(P26,26),\
                                                        U128H_ADD(_U128H_LSHIFTN(P27,27),\
                                                          U128H_ADD(_U128H_LSHIFTN(P28,28),\
                                                            U128H_ADD(_U128H_LSHIFTN(P29,29),\
                                                              U128H_ADD(_U128H_LSHIFTN(P30,30),\
                                                                _U128H_LSHIFTN(P31,31))))))))))))))))))))))))))))))))

#define _U128H_LSHIFTN(X,N) _U128H_LSHIFTN_EVAL(DEFER(U128H_LSHIFTN ## N) X)
#define _U128H_LSHIFTN_EVAL(X) X
#define U128H_LSHIFTN1(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30)
#define U128H_LSHIFTN2(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29)
#define U128H_LSHIFTN3(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28)
#define U128H_LSHIFTN4(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27)
#define U128H_LSHIFTN5(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26)
#define U128H_LSHIFTN6(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25)
#define U128H_LSHIFTN7(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24)
#define U128H_LSHIFTN8(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23)
#define U128H_LSHIFTN9(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22)
#define U128H_LSHIFTN10(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21)
#define U128H_LSHIFTN11(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20)
#define U128H_LSHIFTN12(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19)
#define U128H_LSHIFTN13(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18)
#define U128H_LSHIFTN14(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17)
#define U128H_LSHIFTN15(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16)
#define U128H_LSHIFTN16(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15)
#define U128H_LSHIFTN17(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14)
#define U128H_LSHIFTN18(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13)
#define U128H_LSHIFTN19(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12)
#define U128H_LSHIFTN20(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11)
#define U128H_LSHIFTN21(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10)
#define U128H_LSHIFTN22(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8,A9)
#define U128H_LSHIFTN23(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7,A8)
#define U128H_LSHIFTN24(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6,A7)
#define U128H_LSHIFTN25(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5,A6)
#define U128H_LSHIFTN26(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4,A5)
#define U128H_LSHIFTN27(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3,A4)
#define U128H_LSHIFTN28(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2,A3)
#define U128H_LSHIFTN29(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1,A2)
#define U128H_LSHIFTN30(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0,A1)
#define U128H_LSHIFTN31(A0,A1,A2,A3,A4,A5,A6,A7,A8,A9,A10,A11,A12,A13,A14,A15,A16,A17,A18,A19,A20,A21,A22,A23,A24,A25,A26,A27,A28,A29,A30,A31)\
  (0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,A0)

#define _U128H_MUL_DIGIT(...) _U128H_MUL_DIGIT_EVAL(DEFER(_U128H_MUL_DIGIT_X)(__VA_ARGS__))
#define _U128H_MUL_DIGIT_EVAL(X) _U128H_MUL_DIGIT_EVAL1(_U128H_MUL_DIGIT_EVAL1(_U128H_MUL_DIGIT_EVAL1(_U128H_MUL_DIGIT_EVAL1(X))))
#define _U128H_MUL_DIGIT_EVAL1(X) _U128H_MUL_DIGIT_EVAL2(_U128H_MUL_DIGIT_EVAL2(_U128H_MUL_DIGIT_EVAL2(_U128H_MUL_DIGIT_EVAL2(X))))
#define _U128H_MUL_DIGIT_EVAL2(X) _U128H_MUL_DIGIT_EVAL3(_U128H_MUL_DIGIT_EVAL3(X))
#define _U128H_MUL_DIGIT_EVAL3(X) X

#define _U128H_MUL_DIGIT_X(A,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31)\
  (HEXMUL(0,A,B0,B1,B2,B3,B4,B5,B6,B7,B8,B9,B10,B11,B12,B13,B14,B15,B16,B17,B18,B19,B20,B21,B22,B23,B24,B25,B26,B27,B28,B29,B30,B31))

#endif