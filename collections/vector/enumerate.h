#ifndef C23META_VECTOR_ENUMERATE
#define C23META_VECTOR_ENUMERATE

#define VECTOR32_ENUMERATE(X) _VECTOR32_ENUMERATE_C(X)
#define _VECTOR32_ENUMERATE_C(X) _VECTOR32_ENUMERATE(CAT(_VECTOR32_ENUMERATE,VECTOR32_LENGTH(X)),VECTOR32_UNWRAP(X))
#define _VECTOR32_ENUMERATE(F,...) F(__VA_ARGS__)

#define _VECTOR32_ENUMERATE0(...)\
 (0,())

#define _VECTOR32_ENUMERATE1(X0,...)\
 (1,((0,X0)))

#define _VECTOR32_ENUMERATE2(X0,X1,...)\
 (2,((0,X0),(1,X1)))

#define _VECTOR32_ENUMERATE3(X0,X1,X2,...)\
 (3,((0,X0),(1,X1),(2,X2)))

#define _VECTOR32_ENUMERATE4(X0,X1,X2,X3,...)\
 (4,((0,X0),(1,X1),(2,X2),(3,X3)))

#define _VECTOR32_ENUMERATE5(X0,X1,X2,X3,X4,...)\
 (5,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4)))

#define _VECTOR32_ENUMERATE6(X0,X1,X2,X3,X4,X5,...)\
 (6,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5)))

#define _VECTOR32_ENUMERATE7(X0,X1,X2,X3,X4,X5,X6,...)\
 (7,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6)))

#define _VECTOR32_ENUMERATE8(X0,X1,X2,X3,X4,X5,X6,X7,...)\
 (8,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7)))

#define _VECTOR32_ENUMERATE9(X0,X1,X2,X3,X4,X5,X6,X7,X8,...)\
 (9,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8)))

#define _VECTOR32_ENUMERATE10(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,...)\
 (10,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9)))

#define _VECTOR32_ENUMERATE11(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,...)\
 (11,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10)))

#define _VECTOR32_ENUMERATE12(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,...)\
 (12,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11)))

#define _VECTOR32_ENUMERATE13(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,...)\
 (13,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12)))

#define _VECTOR32_ENUMERATE14(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,...)\
 (14,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13)))

#define _VECTOR32_ENUMERATE15(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,...)\
 (15,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14)))

#define _VECTOR32_ENUMERATE16(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,...)\
 (16,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15)))

#define _VECTOR32_ENUMERATE17(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,...)\
 (17,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16)))

#define _VECTOR32_ENUMERATE18(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,...)\
 (18,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16),(17,X17)))

#define _VECTOR32_ENUMERATE19(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,...)\
 (19,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16),(17,X17),(18,X18)))

#define _VECTOR32_ENUMERATE20(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,...)\
 (20,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16),(17,X17),(18,X18),(19,X19)))

#define _VECTOR32_ENUMERATE21(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,...)\
 (21,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16),(17,X17),(18,X18),(19,X19),(20,X20)))

#define _VECTOR32_ENUMERATE22(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,...)\
 (22,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16),(17,X17),(18,X18),(19,X19),(20,X20),(21,X21)))

#define _VECTOR32_ENUMERATE23(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,...)\
 (23,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16),(17,X17),(18,X18),(19,X19),(20,X20),(21,X21),(22,X22)))

#define _VECTOR32_ENUMERATE24(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,...)\
 (24,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16),(17,X17),(18,X18),(19,X19),(20,X20),(21,X21),(22,X22),(23,X23)))

#define _VECTOR32_ENUMERATE25(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,...)\
 (25,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16),(17,X17),(18,X18),(19,X19),(20,X20),(21,X21),(22,X22),(23,X23),(24,X24)))

#define _VECTOR32_ENUMERATE26(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,...)\
 (26,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16),(17,X17),(18,X18),(19,X19),(20,X20),(21,X21),(22,X22),(23,X23),(24,X24),(25,X25)))

#define _VECTOR32_ENUMERATE27(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,...)\
 (27,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16),(17,X17),(18,X18),(19,X19),(20,X20),(21,X21),(22,X22),(23,X23),(24,X24),(25,X25),(26,X26)))

#define _VECTOR32_ENUMERATE28(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,...)\
 (28,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16),(17,X17),(18,X18),(19,X19),(20,X20),(21,X21),(22,X22),(23,X23),(24,X24),(25,X25),(26,X26),(27,X27)))

#define _VECTOR32_ENUMERATE29(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,...)\
 (29,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16),(17,X17),(18,X18),(19,X19),(20,X20),(21,X21),(22,X22),(23,X23),(24,X24),(25,X25),(26,X26),(27,X27),(28,X28)))

#define _VECTOR32_ENUMERATE30(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,...)\
 (30,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16),(17,X17),(18,X18),(19,X19),(20,X20),(21,X21),(22,X22),(23,X23),(24,X24),(25,X25),(26,X26),(27,X27),(28,X28),(29,X29)))

#define _VECTOR32_ENUMERATE31(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,X30,...)\
 (31,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16),(17,X17),(18,X18),(19,X19),(20,X20),(21,X21),(22,X22),(23,X23),(24,X24),(25,X25),(26,X26),(27,X27),(28,X28),(29,X29),(30,X30)))

#define _VECTOR32_ENUMERATE32(X0,X1,X2,X3,X4,X5,X6,X7,X8,X9,X10,X11,X12,X13,X14,X15,X16,X17,X18,X19,X20,X21,X22,X23,X24,X25,X26,X27,X28,X29,X30,X31,...)\
 (32,((0,X0),(1,X1),(2,X2),(3,X3),(4,X4),(5,X5),(6,X6),(7,X7),(8,X8),(9,X9),(10,X10),(11,X11),(12,X12),(13,X13),(14,X14),(15,X15),(16,X16),(17,X17),(18,X18),(19,X19),(20,X20),(21,X21),(22,X22),(23,X23),(24,X24),(25,X25),(26,X26),(27,X27),(28,X28),(29,X29),(30,X30),(31,X31)))



#endif