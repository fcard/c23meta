#ifndef C23META_HEX_LSH
#define C23META_HEX_LSH

#define HEXLSH1(CARRY,A,...) HEXLSH1_1(CARRY,A) __VA_OPT__(,DEFER(HEXLSH1_I)()(HEXLSH1_CARRY(A),__VA_ARGS__))
#define HEXLSH1_I() HEXLSH1
#define HEXLSH1_1(C,A) HEXLSH1_1_ ## C ## A
#define HEXLSH1_1_00 0
#define HEXLSH1_1_01 2
#define HEXLSH1_1_02 4
#define HEXLSH1_1_03 6
#define HEXLSH1_1_04 8
#define HEXLSH1_1_05 a
#define HEXLSH1_1_06 c
#define HEXLSH1_1_07 e
#define HEXLSH1_1_08 0
#define HEXLSH1_1_09 2
#define HEXLSH1_1_0a 4
#define HEXLSH1_1_0b 6
#define HEXLSH1_1_0c 8
#define HEXLSH1_1_0d a
#define HEXLSH1_1_0e c
#define HEXLSH1_1_0f e
#define HEXLSH1_1_10 1
#define HEXLSH1_1_11 3
#define HEXLSH1_1_12 5
#define HEXLSH1_1_13 7
#define HEXLSH1_1_14 9
#define HEXLSH1_1_15 b
#define HEXLSH1_1_16 d
#define HEXLSH1_1_17 f
#define HEXLSH1_1_18 1
#define HEXLSH1_1_19 3
#define HEXLSH1_1_1a 5
#define HEXLSH1_1_1b 7
#define HEXLSH1_1_1c 9
#define HEXLSH1_1_1d b
#define HEXLSH1_1_1e d
#define HEXLSH1_1_1f f

#define HEXLSH1_CARRY(A) HEXLSH1_CARRY ## A
#define HEXLSH1_CARRY0 0
#define HEXLSH1_CARRY1 0
#define HEXLSH1_CARRY2 0
#define HEXLSH1_CARRY3 0
#define HEXLSH1_CARRY4 0
#define HEXLSH1_CARRY5 0
#define HEXLSH1_CARRY6 0
#define HEXLSH1_CARRY7 0
#define HEXLSH1_CARRY8 0
#define HEXLSH1_CARRY9 1
#define HEXLSH1_CARRYa 1
#define HEXLSH1_CARRYb 1
#define HEXLSH1_CARRYc 1
#define HEXLSH1_CARRYd 1
#define HEXLSH1_CARRYe 1
#define HEXLSH1_CARRYf 1

#define HEXLSH2(CARRY,A,...) HEXLSH2_1(CARRY,A) __VA_OPT__(,DEFER(HEXLSH2_I)()(HEXLSH2_CARRY(A),__VA_ARGS__))
#define HEXLSH2_I() HEXLSH2
#define HEXLSH2_1(C,A) HEXLSH2_1_ ## C ## A
#define HEXLSH2_1_00 0
#define HEXLSH2_1_01 4
#define HEXLSH2_1_02 8
#define HEXLSH2_1_03 c
#define HEXLSH2_1_04 0
#define HEXLSH2_1_05 4
#define HEXLSH2_1_06 8
#define HEXLSH2_1_07 c
#define HEXLSH2_1_08 0
#define HEXLSH2_1_09 4
#define HEXLSH2_1_0a 8
#define HEXLSH2_1_0b c
#define HEXLSH2_1_0c 0
#define HEXLSH2_1_0d 4
#define HEXLSH2_1_0e 8
#define HEXLSH2_1_0f c
#define HEXLSH2_1_10 1
#define HEXLSH2_1_11 5
#define HEXLSH2_1_12 9
#define HEXLSH2_1_13 d
#define HEXLSH2_1_14 1
#define HEXLSH2_1_15 5
#define HEXLSH2_1_16 9
#define HEXLSH2_1_17 d
#define HEXLSH2_1_18 1
#define HEXLSH2_1_19 5
#define HEXLSH2_1_1a 9
#define HEXLSH2_1_1b d
#define HEXLSH2_1_1c 1
#define HEXLSH2_1_1d 5
#define HEXLSH2_1_1e 9
#define HEXLSH2_1_1f d
#define HEXLSH2_1_20 2
#define HEXLSH2_1_21 6
#define HEXLSH2_1_22 a
#define HEXLSH2_1_23 e
#define HEXLSH2_1_24 2
#define HEXLSH2_1_25 6
#define HEXLSH2_1_26 a
#define HEXLSH2_1_27 e
#define HEXLSH2_1_28 2
#define HEXLSH2_1_29 6
#define HEXLSH2_1_2a a
#define HEXLSH2_1_2b e
#define HEXLSH2_1_2c 2
#define HEXLSH2_1_2d 6
#define HEXLSH2_1_2e a
#define HEXLSH2_1_2f e
#define HEXLSH2_1_30 3
#define HEXLSH2_1_31 7
#define HEXLSH2_1_32 b
#define HEXLSH2_1_33 f
#define HEXLSH2_1_34 3
#define HEXLSH2_1_35 7
#define HEXLSH2_1_36 b
#define HEXLSH2_1_37 f
#define HEXLSH2_1_38 3
#define HEXLSH2_1_39 7
#define HEXLSH2_1_3a b
#define HEXLSH2_1_3b f
#define HEXLSH2_1_3c 3
#define HEXLSH2_1_3d 7
#define HEXLSH2_1_3e b
#define HEXLSH2_1_3f f

#define HEXLSH2_CARRY(A) HEXLSH2_CARRY ## A
#define HEXLSH2_CARRY0 0
#define HEXLSH2_CARRY1 0
#define HEXLSH2_CARRY2 0
#define HEXLSH2_CARRY3 0
#define HEXLSH2_CARRY4 1
#define HEXLSH2_CARRY5 1
#define HEXLSH2_CARRY6 1
#define HEXLSH2_CARRY7 1
#define HEXLSH2_CARRY8 2
#define HEXLSH2_CARRY9 2
#define HEXLSH2_CARRYa 2
#define HEXLSH2_CARRYb 2
#define HEXLSH2_CARRYc 3
#define HEXLSH2_CARRYd 3
#define HEXLSH2_CARRYe 3
#define HEXLSH2_CARRYf 3

#define HEXLSH3(CARRY,A,...) HEXLSH3_1(CARRY,A) __VA_OPT__(,DEFER(HEXLSH3_I)()(HEXLSH3_CARRY(A),__VA_ARGS__))
#define HEXLSH3_I() HEXLSH3
#define HEXLSH3_1(C,A) HEXLSH3_1_ ## C ## A
#define HEXLSH3_1_00 0
#define HEXLSH3_1_01 8
#define HEXLSH3_1_02 0
#define HEXLSH3_1_03 8
#define HEXLSH3_1_04 0
#define HEXLSH3_1_05 8
#define HEXLSH3_1_06 0
#define HEXLSH3_1_07 8
#define HEXLSH3_1_08 0
#define HEXLSH3_1_09 8
#define HEXLSH3_1_0a 0
#define HEXLSH3_1_0b 8
#define HEXLSH3_1_0c 0
#define HEXLSH3_1_0d 8
#define HEXLSH3_1_0e 0
#define HEXLSH3_1_0f 8
#define HEXLSH3_1_10 1
#define HEXLSH3_1_11 9
#define HEXLSH3_1_12 1
#define HEXLSH3_1_13 9
#define HEXLSH3_1_14 1
#define HEXLSH3_1_15 9
#define HEXLSH3_1_16 1
#define HEXLSH3_1_17 9
#define HEXLSH3_1_18 1
#define HEXLSH3_1_19 9
#define HEXLSH3_1_1a 1
#define HEXLSH3_1_1b 9
#define HEXLSH3_1_1c 1
#define HEXLSH3_1_1d 9
#define HEXLSH3_1_1e 1
#define HEXLSH3_1_1f 9
#define HEXLSH3_1_20 2
#define HEXLSH3_1_21 a
#define HEXLSH3_1_22 2
#define HEXLSH3_1_23 a
#define HEXLSH3_1_24 2
#define HEXLSH3_1_25 a
#define HEXLSH3_1_26 2
#define HEXLSH3_1_27 a
#define HEXLSH3_1_28 2
#define HEXLSH3_1_29 a
#define HEXLSH3_1_2a 2
#define HEXLSH3_1_2b a
#define HEXLSH3_1_2c 2
#define HEXLSH3_1_2d a
#define HEXLSH3_1_2e 2
#define HEXLSH3_1_2f a
#define HEXLSH3_1_30 3
#define HEXLSH3_1_31 b
#define HEXLSH3_1_32 3
#define HEXLSH3_1_33 b
#define HEXLSH3_1_34 3
#define HEXLSH3_1_35 b
#define HEXLSH3_1_36 3
#define HEXLSH3_1_37 b
#define HEXLSH3_1_38 3
#define HEXLSH3_1_39 b
#define HEXLSH3_1_3a 3
#define HEXLSH3_1_3b b
#define HEXLSH3_1_3c 3
#define HEXLSH3_1_3d b
#define HEXLSH3_1_3e 3
#define HEXLSH3_1_3f b
#define HEXLSH3_1_40 4
#define HEXLSH3_1_41 c
#define HEXLSH3_1_42 4
#define HEXLSH3_1_43 c
#define HEXLSH3_1_44 4
#define HEXLSH3_1_45 c
#define HEXLSH3_1_46 4
#define HEXLSH3_1_47 c
#define HEXLSH3_1_48 4
#define HEXLSH3_1_49 c
#define HEXLSH3_1_4a 4
#define HEXLSH3_1_4b c
#define HEXLSH3_1_4c 4
#define HEXLSH3_1_4d c
#define HEXLSH3_1_4e 4
#define HEXLSH3_1_4f c
#define HEXLSH3_1_50 5
#define HEXLSH3_1_51 d
#define HEXLSH3_1_52 5
#define HEXLSH3_1_53 d
#define HEXLSH3_1_54 5
#define HEXLSH3_1_55 d
#define HEXLSH3_1_56 5
#define HEXLSH3_1_57 d
#define HEXLSH3_1_58 5
#define HEXLSH3_1_59 d
#define HEXLSH3_1_5a 5
#define HEXLSH3_1_5b d
#define HEXLSH3_1_5c 5
#define HEXLSH3_1_5d d
#define HEXLSH3_1_5e 5
#define HEXLSH3_1_5f d
#define HEXLSH3_1_60 6
#define HEXLSH3_1_61 e
#define HEXLSH3_1_62 6
#define HEXLSH3_1_63 e
#define HEXLSH3_1_64 6
#define HEXLSH3_1_65 e
#define HEXLSH3_1_66 6
#define HEXLSH3_1_67 e
#define HEXLSH3_1_68 6
#define HEXLSH3_1_69 e
#define HEXLSH3_1_6a 6
#define HEXLSH3_1_6b e
#define HEXLSH3_1_6c 6
#define HEXLSH3_1_6d e
#define HEXLSH3_1_6e 6
#define HEXLSH3_1_6f e
#define HEXLSH3_1_70 7
#define HEXLSH3_1_71 f
#define HEXLSH3_1_72 7
#define HEXLSH3_1_73 f
#define HEXLSH3_1_74 7
#define HEXLSH3_1_75 f
#define HEXLSH3_1_76 7
#define HEXLSH3_1_77 f
#define HEXLSH3_1_78 7
#define HEXLSH3_1_79 f
#define HEXLSH3_1_7a 7
#define HEXLSH3_1_7b f
#define HEXLSH3_1_7c 7
#define HEXLSH3_1_7d f
#define HEXLSH3_1_7e 7
#define HEXLSH3_1_7f f

#define HEXLSH3_CARRY(A) HEXLSH3_CARRY ## A
#define HEXLSH3_CARRY0 0
#define HEXLSH3_CARRY1 0
#define HEXLSH3_CARRY2 1
#define HEXLSH3_CARRY3 1
#define HEXLSH3_CARRY4 2
#define HEXLSH3_CARRY5 2
#define HEXLSH3_CARRY6 3
#define HEXLSH3_CARRY7 3
#define HEXLSH3_CARRY8 4
#define HEXLSH3_CARRY9 4
#define HEXLSH3_CARRYa 5
#define HEXLSH3_CARRYb 5
#define HEXLSH3_CARRYc 6
#define HEXLSH3_CARRYd 6
#define HEXLSH3_CARRYe 7
#define HEXLSH3_CARRYf 7

#endif