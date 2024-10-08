#ifndef C23META_FP32_DIV
#define C23META_FP32_DIV
#include "../bits/bits.h"
#include "../../int32/int32.h"
#include "../../int32/math/sub.h"

#define FP32_DIV(X,Y) _FP32_DIV_C(X,Y)
#define _FP32_DIV_C(X,Y) CAT_ALL(_FP32_DIV_CHECK_, FP32_CLASSIFY(X), _, FP32_CLASSIFY(Y))(X,Y)

#define _FP32_DIV_CHECK_nan_nan(X,Y) FP32_NAN
#define _FP32_DIV_CHECK_other_nan(X,Y) FP32_NAN
#define _FP32_DIV_CHECK_zero_nan(X,Y) FP32_NAN
#define _FP32_DIV_CHECK_infinity_nan(X,Y) FP32_NAN
#define _FP32_DIV_CHECK_nan_other(X,Y) FP32_NAN
#define _FP32_DIV_CHECK_nan_zero(X,Y) FP32_NAN
#define _FP32_DIV_CHECK_nan_infinity(X,Y) FP32_NAN

#define _FP32_DIV_CHECK_infinity_infinity(X,Y) FP32_NAN
#define _FP32_DIV_CHECK_infinity_other(X,Y) CAT(_FP32_DIV_CHECK_, FP32_CMP_SIGN(X,Y))(X)
#define _FP32_DIV_CHECK_infinity_zero(X,Y) CAT(_FP32_DIV_CHECK_, FP32_CMP_SIGN(X,Y))(FP32_INF)
#define _FP32_DIV_CHECK_other_infinity(X,Y) CAT(_FP32_DIV_CHECK_, FP32_CMP_SIGN(X,Y))(FP32_0)
#define _FP32_DIV_CHECK_zero_infinity(X,Y) CAT(_FP32_DIV_CHECK_, FP32_CMP_SIGN(X,Y))(FP32_INF)

#define _FP32_DIV_CHECK_other_other(X,Y) FP32_DIV_UNCHECKED(X,Y)
#define _FP32_DIV_CHECK_other_zero(X,Y) CAT(_FP32_DIV_CHECK_, FP32_CMP_SIGN(X,Y))(FP32_INF)
#define _FP32_DIV_CHECK_zero_other(X,Y) CAT(_FP32_DIV_CHECK_, FP32_CMP_SIGN(X,Y))(FP32_0)

#define _FP32_DIV_CHECK_zero_zero(X,Y) CAT(_FP32_DIV_CHECK_, FP32_CMP_SIGN(X,Y))(FP32_INF)

#define _FP32_DIV_CHECK_POS_POS(X) X
#define _FP32_DIV_CHECK_POS_NEG(X) FP32_NEG(X)
#define _FP32_DIV_CHECK_NEG_POS(X) FP32_NEG(X)
#define _FP32_DIV_CHECK_NEG_NEG(X) X

#define FP32_DIV_UNCHECKED(X,Y) FP32_DIV_EVAL(_FP32_DIV(FP32_EXPONENT(X),FP32_EXPONENT(Y), FP32_MANTISSA(X), FP32_MANTISSA(Y), FP32_CMP_SIGN(X,Y)))
#define FP32_DIV_EVAL(X) FP32_DIV_EVAL1(FP32_DIV_EVAL1(FP32_DIV_EVAL1(FP32_DIV_EVAL1(X))))
#define FP32_DIV_EVAL1(X) FP32_DIV_EVAL2(FP32_DIV_EVAL2(FP32_DIV_EVAL2(FP32_DIV_EVAL2(X))))
#define FP32_DIV_EVAL2(X) X

#define _FP32_DIV(EX,EY,MX,MY,S) _FP32_DIV_X(I32_SUB(EX,EY),U128H_DIVSHIFT32(MX,MY),S)
#define _FP32_DIV_X(E,M,S) CAT(_FP32_DIV_Y_,S)(E,M)
#define _FP32_DIV_Y_POS_POS(E,M) FP32_NORMALIZE(E,M)
#define _FP32_DIV_Y_POS_NEG(E,M) FP32_NEG(FP32_NORMALIZE(E,M))
#define _FP32_DIV_Y_NEG_POS(E,M) FP32_NEG(FP32_NORMALIZE(E,M))
#define _FP32_DIV_Y_NEG_NEG(E,M) FP32_NORMALIZE(E,M)

#define FP32_DIV2(X)  _FP32_DIV2PN(X, I32_1)
#define FP32_DIV4(X)  _FP32_DIV2PN(X, I32_2)
#define FP32_DIV8(X)  _FP32_DIV2PN(X, I32_3)
#define FP32_DIV16(X) _FP32_DIV2PN(X, I32_4)
#define FP32_DIV32(X) _FP32_DIV2PN(X, I32_5)
#define FP32_DIV64(X) _FP32_DIV2PN(X, I32_6)
#define FP32_DIV128(X) _FP32_DIV2PN(X, I32_7)
#define FP32_DIV256(X) _FP32_DIV2PN(X, I32_8)
#define FP32_DIV512(X) _FP32_DIV2PN(X, I32_9)
#define FP32_DIV1024(X) _FP32_DIV2PN(X, I32_10)
#define FP32_DIV2048(X) _FP32_DIV2PN(X, I32_11)
#define FP32_DIV4096(X) _FP32_DIV2PN(X, I32_12)
#define FP32_DIV8192(X) _FP32_DIV2PN(X, I32_13)
#define FP32_DIV16384(X) _FP32_DIV2PN(X, I32_14)
#define FP32_DIV32768(X) _FP32_DIV2PN(X, I32_15)
#define FP32_DIV65536(X) _FP32_DIV2PN(X, I32_16)
#define FP32_DIV131072(X) _FP32_DIV2PN(X, I32_17)
#define FP32_DIV262144(X) _FP32_DIV2PN(X, I32_18)
#define FP32_DIV524288(X) _FP32_DIV2PN(X, I32_19)
#define FP32_DIV1048576(X) _FP32_DIV2PN(X, I32_20)
#define FP32_DIV2097152(X) _FP32_DIV2PN(X, I32_21)
#define FP32_DIV4194304(X) _FP32_DIV2PN(X, I32_22)
#define FP32_DIV8388608(X) _FP32_DIV2PN(X, I32_23)
#define FP32_DIV16777216(X) _FP32_DIV2PN(X, I32_24)
#define FP32_DIV33554432(X) _FP32_DIV2PN(X, I32_25)
#define FP32_DIV67108864(X) _FP32_DIV2PN(X, I32_26)
#define FP32_DIV134217728(X) _FP32_DIV2PN(X, I32_27)
#define FP32_DIV268435456(X) _FP32_DIV2PN(X, I32_28)
#define FP32_DIV536870912(X) _FP32_DIV2PN(X, I32_29)
#define FP32_DIV1073741824(X) _FP32_DIV2PN(X, I32_30)
#define FP32_DIV2147483648(X) _FP32_DIV2PN(X, I32_31)
#define FP32_DIV4294967296(X) _FP32_DIV2PN(X, I32_32)
#define FP32_DIV8589934592(X) _FP32_DIV2PN(X, I32_33)
#define FP32_DIV17179869184(X) _FP32_DIV2PN(X, I32_34)
#define FP32_DIV34359738368(X) _FP32_DIV2PN(X, I32_35)
#define FP32_DIV68719476736(X) _FP32_DIV2PN(X, I32_36)
#define FP32_DIV137438953472(X) _FP32_DIV2PN(X, I32_37)
#define FP32_DIV274877906944(X) _FP32_DIV2PN(X, I32_38)
#define FP32_DIV549755813888(X) _FP32_DIV2PN(X, I32_39)
#define FP32_DIV1099511627776(X) _FP32_DIV2PN(X, I32_40)
#define FP32_DIV2199023255552(X) _FP32_DIV2PN(X, I32_41)
#define FP32_DIV4398046511104(X) _FP32_DIV2PN(X, I32_42)
#define FP32_DIV8796093022208(X) _FP32_DIV2PN(X, I32_43)
#define FP32_DIV17592186044416(X) _FP32_DIV2PN(X, I32_44)
#define FP32_DIV35184372088832(X) _FP32_DIV2PN(X, I32_45)
#define FP32_DIV70368744177664(X) _FP32_DIV2PN(X, I32_46)
#define FP32_DIV140737488355328(X) _FP32_DIV2PN(X, I32_47)
#define FP32_DIV281474976710656(X) _FP32_DIV2PN(X, I32_48)
#define FP32_DIV562949953421312(X) _FP32_DIV2PN(X, I32_49)
#define FP32_DIV1125899906842624(X) _FP32_DIV2PN(X, I32_50)
#define FP32_DIV2251799813685248(X) _FP32_DIV2PN(X, I32_51)
#define FP32_DIV4503599627370496(X) _FP32_DIV2PN(X, I32_52)
#define FP32_DIV9007199254740992(X) _FP32_DIV2PN(X, I32_53)
#define FP32_DIV18014398509481984(X) _FP32_DIV2PN(X, I32_54)
#define FP32_DIV36028797018963968(X) _FP32_DIV2PN(X, I32_55)
#define FP32_DIV72057594037927936(X) _FP32_DIV2PN(X, I32_56)
#define FP32_DIV144115188075855872(X) _FP32_DIV2PN(X, I32_57)
#define FP32_DIV288230376151711744(X) _FP32_DIV2PN(X, I32_58)
#define FP32_DIV576460752303423488(X) _FP32_DIV2PN(X, I32_59)
#define FP32_DIV1152921504606846976(X) _FP32_DIV2PN(X, I32_60)
#define FP32_DIV2305843009213693952(X) _FP32_DIV2PN(X, I32_61)
#define FP32_DIV4611686018427387904(X) _FP32_DIV2PN(X, I32_62)
#define FP32_DIV9223372036854775808(X) _FP32_DIV2PN(X, I32_63)
#define FP32_DIV18446744073709551616(X) _FP32_DIV2PN(X, I32_64)
#define FP32_DIV36893488147419103232(X) _FP32_DIV2PN(X, I32_65)
#define FP32_DIV73786976294838206464(X) _FP32_DIV2PN(X, I32_66)
#define FP32_DIV147573952589676412928(X) _FP32_DIV2PN(X, I32_67)
#define FP32_DIV295147905179352825856(X) _FP32_DIV2PN(X, I32_68)
#define FP32_DIV590295810358705651712(X) _FP32_DIV2PN(X, I32_69)
#define FP32_DIV1180591620717411303424(X) _FP32_DIV2PN(X, I32_70)
#define FP32_DIV2361183241434822606848(X) _FP32_DIV2PN(X, I32_71)
#define FP32_DIV4722366482869645213696(X) _FP32_DIV2PN(X, I32_72)
#define FP32_DIV9444732965739290427392(X) _FP32_DIV2PN(X, I32_73)
#define FP32_DIV18889465931478580854784(X) _FP32_DIV2PN(X, I32_74)
#define FP32_DIV37778931862957161709568(X) _FP32_DIV2PN(X, I32_75)
#define FP32_DIV75557863725914323419136(X) _FP32_DIV2PN(X, I32_76)
#define FP32_DIV151115727451828646838272(X) _FP32_DIV2PN(X, I32_77)
#define FP32_DIV302231454903657293676544(X) _FP32_DIV2PN(X, I32_78)
#define FP32_DIV604462909807314587353088(X) _FP32_DIV2PN(X, I32_79)
#define FP32_DIV1208925819614629174706176(X) _FP32_DIV2PN(X, I32_80)
#define FP32_DIV2417851639229258349412352(X) _FP32_DIV2PN(X, I32_81)
#define FP32_DIV4835703278458516698824704(X) _FP32_DIV2PN(X, I32_82)
#define FP32_DIV9671406556917033397649408(X) _FP32_DIV2PN(X, I32_83)
#define FP32_DIV19342813113834066795298816(X) _FP32_DIV2PN(X, I32_84)
#define FP32_DIV38685626227668133590597632(X) _FP32_DIV2PN(X, I32_85)
#define FP32_DIV77371252455336267181195264(X) _FP32_DIV2PN(X, I32_86)
#define FP32_DIV154742504910672534362390528(X) _FP32_DIV2PN(X, I32_87)
#define FP32_DIV309485009821345068724781056(X) _FP32_DIV2PN(X, I32_88)
#define FP32_DIV618970019642690137449562112(X) _FP32_DIV2PN(X, I32_89)
#define FP32_DIV1237940039285380274899124224(X) _FP32_DIV2PN(X, I32_90)
#define FP32_DIV2475880078570760549798248448(X) _FP32_DIV2PN(X, I32_91)
#define FP32_DIV4951760157141521099596496896(X) _FP32_DIV2PN(X, I32_92)
#define FP32_DIV9903520314283042199192993792(X) _FP32_DIV2PN(X, I32_93)
#define FP32_DIV19807040628566084398385987584(X) _FP32_DIV2PN(X, I32_94)
#define FP32_DIV39614081257132168796771975168(X) _FP32_DIV2PN(X, I32_95)
#define FP32_DIV79228162514264337593543950336(X) _FP32_DIV2PN(X, I32_96)
#define FP32_DIV158456325028528675187087900672(X) _FP32_DIV2PN(X, I32_97)
#define FP32_DIV316912650057057350374175801344(X) _FP32_DIV2PN(X, I32_98)
#define FP32_DIV633825300114114700748351602688(X) _FP32_DIV2PN(X, I32_99)
#define FP32_DIV1267650600228229401496703205376(X) _FP32_DIV2PN(X, I32_100)
#define FP32_DIV2535301200456458802993406410752(X) _FP32_DIV2PN(X, I32_101)
#define FP32_DIV5070602400912917605986812821504(X) _FP32_DIV2PN(X, I32_102)
#define FP32_DIV10141204801825835211973625643008(X) _FP32_DIV2PN(X, I32_103)
#define FP32_DIV20282409603651670423947251286016(X) _FP32_DIV2PN(X, I32_104)
#define FP32_DIV40564819207303340847894502572032(X) _FP32_DIV2PN(X, I32_105)
#define FP32_DIV81129638414606681695789005144064(X) _FP32_DIV2PN(X, I32_106)
#define FP32_DIV162259276829213363391578010288128(X) _FP32_DIV2PN(X, I32_107)
#define FP32_DIV324518553658426726783156020576256(X) _FP32_DIV2PN(X, I32_108)
#define FP32_DIV649037107316853453566312041152512(X) _FP32_DIV2PN(X, I32_109)
#define FP32_DIV1298074214633706907132624082305024(X) _FP32_DIV2PN(X, I32_110)
#define FP32_DIV2596148429267413814265248164610048(X) _FP32_DIV2PN(X, I32_111)
#define FP32_DIV5192296858534827628530496329220096(X) _FP32_DIV2PN(X, I32_112)
#define FP32_DIV10384593717069655257060992658440192(X) _FP32_DIV2PN(X, I32_113)
#define FP32_DIV20769187434139310514121985316880384(X) _FP32_DIV2PN(X, I32_114)
#define FP32_DIV41538374868278621028243970633760768(X) _FP32_DIV2PN(X, I32_115)
#define FP32_DIV83076749736557242056487941267521536(X) _FP32_DIV2PN(X, I32_116)
#define FP32_DIV166153499473114484112975882535043072(X) _FP32_DIV2PN(X, I32_117)
#define FP32_DIV332306998946228968225951765070086144(X) _FP32_DIV2PN(X, I32_118)
#define FP32_DIV664613997892457936451903530140172288(X) _FP32_DIV2PN(X, I32_119)
#define FP32_DIV1329227995784915872903807060280344576(X) _FP32_DIV2PN(X, I32_120)
#define FP32_DIV2658455991569831745807614120560689152(X) _FP32_DIV2PN(X, I32_121)
#define FP32_DIV5316911983139663491615228241121378304(X) _FP32_DIV2PN(X, I32_122)
#define FP32_DIV10633823966279326983230456482242756608(X) _FP32_DIV2PN(X, I32_123)
#define FP32_DIV21267647932558653966460912964485513216(X) _FP32_DIV2PN(X, I32_124)
#define FP32_DIV42535295865117307932921825928971026432(X) _FP32_DIV2PN(X, I32_125)
#define FP32_DIV85070591730234615865843651857942052864(X) _FP32_DIV2PN(X, I32_126)
#define FP32_DIV170141183460469231731687303715884105728(X) _FP32_DIV2PN(X, I32_127)

#define _FP32_DIV2PN(X,N) _FP32_DIV2PN_X(FP32_SIGN_BIT(X), FP32_EXPONENT(X), FP32_MANTISSA(X), N)
#define _FP32_DIV2PN_X(S,E,M,N) FP32_FROM_PARTS(S, I32_SUB(E,N), M)

#endif