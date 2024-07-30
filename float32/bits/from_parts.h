#ifndef C23META_FP32_FROM_PARTS
#define C23META_FP32_FROM_PARTS

#define FP32_FROM_PARTS(S,E,M) _FP32_FROM_PARTS_EVAL(_FP32_FROM_PARTS(S, I32_ADD(E, I32_127), M))
#define _FP32_FROM_PARTS(S,E,M) DEFER(_FP32_FROM_PARTS_X)(S, UNWRAP E, UNWRAP M)
#define _FP32_FROM_PARTS_EVAL(X) X

#define _FP32_FROM_PARTS_X(S,\
                         E0,E1,E2,E3,E4,E5,E6,E7,E8,E9,E10,E11,E12,E13,E14,E15,\
                         E16,E17,E18,E19,E20,E21,E22,E23,E24,E25,E26,E27,E28,E29,E30,E31,\
                         M0,M1,M2,M3,M4,M5,M6,M7,M8,M9,M10,M11,M12,M13,M14,M15,\
                         M16,M17,M18,M19,M20,M21,M22,M23,M24,M25,M26,M27,M28,M29,M30,M31)\
  (M0,M1,M2,M3,M4,M5,M6,M7,M8,M9,M10,M11,M12,M13,M14,M15,M16,M17,M18,M19,M20,M21,M22,\
   E0,E1,E2,E3,E4,E5,E6,E7,\
   S)

#endif