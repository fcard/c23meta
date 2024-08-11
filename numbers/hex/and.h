#ifndef C23META_HEX_AND
#define C23META_HEX_AND

#define HEXAND(A,B,...) HEXAND1(A,B)__VA_OPT__(,DEFER(HEXAND_I)()(__VA_ARGS__))
#define HEXAND_I() HEXAND
#define HEXAND1(A,B) HEXAND1_ ## A ## B
#define HEXAND1_00 0
#define HEXAND1_01 0
#define HEXAND1_02 0
#define HEXAND1_03 0
#define HEXAND1_04 0
#define HEXAND1_05 0
#define HEXAND1_06 0
#define HEXAND1_07 0
#define HEXAND1_08 0
#define HEXAND1_09 0
#define HEXAND1_0a 0
#define HEXAND1_0b 0
#define HEXAND1_0c 0
#define HEXAND1_0d 0
#define HEXAND1_0e 0
#define HEXAND1_0f 0
#define HEXAND1_10 0
#define HEXAND1_11 1
#define HEXAND1_12 0
#define HEXAND1_13 1
#define HEXAND1_14 0
#define HEXAND1_15 1
#define HEXAND1_16 0
#define HEXAND1_17 1
#define HEXAND1_18 0
#define HEXAND1_19 1
#define HEXAND1_1a 0
#define HEXAND1_1b 1
#define HEXAND1_1c 0
#define HEXAND1_1d 1
#define HEXAND1_1e 0
#define HEXAND1_1f 1
#define HEXAND1_20 0
#define HEXAND1_21 0
#define HEXAND1_22 2
#define HEXAND1_23 2
#define HEXAND1_24 0
#define HEXAND1_25 0
#define HEXAND1_26 2
#define HEXAND1_27 2
#define HEXAND1_28 0
#define HEXAND1_29 0
#define HEXAND1_2a 2
#define HEXAND1_2b 2
#define HEXAND1_2c 0
#define HEXAND1_2d 0
#define HEXAND1_2e 2
#define HEXAND1_2f 2
#define HEXAND1_30 0
#define HEXAND1_31 1
#define HEXAND1_32 2
#define HEXAND1_33 3
#define HEXAND1_34 0
#define HEXAND1_35 1
#define HEXAND1_36 2
#define HEXAND1_37 3
#define HEXAND1_38 0
#define HEXAND1_39 1
#define HEXAND1_3a 2
#define HEXAND1_3b 3
#define HEXAND1_3c 0
#define HEXAND1_3d 1
#define HEXAND1_3e 2
#define HEXAND1_3f 3
#define HEXAND1_40 0
#define HEXAND1_41 0
#define HEXAND1_42 0
#define HEXAND1_43 0
#define HEXAND1_44 4
#define HEXAND1_45 4
#define HEXAND1_46 4
#define HEXAND1_47 4
#define HEXAND1_48 0
#define HEXAND1_49 0
#define HEXAND1_4a 0
#define HEXAND1_4b 0
#define HEXAND1_4c 4
#define HEXAND1_4d 4
#define HEXAND1_4e 4
#define HEXAND1_4f 4
#define HEXAND1_50 0
#define HEXAND1_51 1
#define HEXAND1_52 0
#define HEXAND1_53 1
#define HEXAND1_54 4
#define HEXAND1_55 5
#define HEXAND1_56 4
#define HEXAND1_57 5
#define HEXAND1_58 0
#define HEXAND1_59 1
#define HEXAND1_5a 0
#define HEXAND1_5b 1
#define HEXAND1_5c 4
#define HEXAND1_5d 5
#define HEXAND1_5e 4
#define HEXAND1_5f 5
#define HEXAND1_60 0
#define HEXAND1_61 0
#define HEXAND1_62 2
#define HEXAND1_63 2
#define HEXAND1_64 4
#define HEXAND1_65 4
#define HEXAND1_66 6
#define HEXAND1_67 6
#define HEXAND1_68 0
#define HEXAND1_69 0
#define HEXAND1_6a 2
#define HEXAND1_6b 2
#define HEXAND1_6c 4
#define HEXAND1_6d 4
#define HEXAND1_6e 6
#define HEXAND1_6f 6
#define HEXAND1_70 0
#define HEXAND1_71 1
#define HEXAND1_72 2
#define HEXAND1_73 3
#define HEXAND1_74 4
#define HEXAND1_75 5
#define HEXAND1_76 6
#define HEXAND1_77 7
#define HEXAND1_78 0
#define HEXAND1_79 1
#define HEXAND1_7a 2
#define HEXAND1_7b 3
#define HEXAND1_7c 4
#define HEXAND1_7d 5
#define HEXAND1_7e 6
#define HEXAND1_7f 7
#define HEXAND1_80 0
#define HEXAND1_81 0
#define HEXAND1_82 0
#define HEXAND1_83 0
#define HEXAND1_84 0
#define HEXAND1_85 0
#define HEXAND1_86 0
#define HEXAND1_87 0
#define HEXAND1_88 8
#define HEXAND1_89 8
#define HEXAND1_8a 8
#define HEXAND1_8b 8
#define HEXAND1_8c 8
#define HEXAND1_8d 8
#define HEXAND1_8e 8
#define HEXAND1_8f 8
#define HEXAND1_90 0
#define HEXAND1_91 1
#define HEXAND1_92 0
#define HEXAND1_93 1
#define HEXAND1_94 0
#define HEXAND1_95 1
#define HEXAND1_96 0
#define HEXAND1_97 1
#define HEXAND1_98 8
#define HEXAND1_99 9
#define HEXAND1_9a 8
#define HEXAND1_9b 9
#define HEXAND1_9c 8
#define HEXAND1_9d 9
#define HEXAND1_9e 8
#define HEXAND1_9f 9
#define HEXAND1_a0 0
#define HEXAND1_a1 0
#define HEXAND1_a2 2
#define HEXAND1_a3 2
#define HEXAND1_a4 0
#define HEXAND1_a5 0
#define HEXAND1_a6 2
#define HEXAND1_a7 2
#define HEXAND1_a8 8
#define HEXAND1_a9 8
#define HEXAND1_aa a
#define HEXAND1_ab a
#define HEXAND1_ac 8
#define HEXAND1_ad 8
#define HEXAND1_ae a
#define HEXAND1_af a
#define HEXAND1_b0 0
#define HEXAND1_b1 1
#define HEXAND1_b2 2
#define HEXAND1_b3 3
#define HEXAND1_b4 0
#define HEXAND1_b5 1
#define HEXAND1_b6 2
#define HEXAND1_b7 3
#define HEXAND1_b8 8
#define HEXAND1_b9 9
#define HEXAND1_ba a
#define HEXAND1_bb b
#define HEXAND1_bc 8
#define HEXAND1_bd 9
#define HEXAND1_be a
#define HEXAND1_bf b
#define HEXAND1_c0 0
#define HEXAND1_c1 0
#define HEXAND1_c2 0
#define HEXAND1_c3 0
#define HEXAND1_c4 4
#define HEXAND1_c5 4
#define HEXAND1_c6 4
#define HEXAND1_c7 4
#define HEXAND1_c8 8
#define HEXAND1_c9 8
#define HEXAND1_ca 8
#define HEXAND1_cb 8
#define HEXAND1_cc c
#define HEXAND1_cd c
#define HEXAND1_ce c
#define HEXAND1_cf c
#define HEXAND1_d0 0
#define HEXAND1_d1 1
#define HEXAND1_d2 0
#define HEXAND1_d3 1
#define HEXAND1_d4 4
#define HEXAND1_d5 5
#define HEXAND1_d6 4
#define HEXAND1_d7 5
#define HEXAND1_d8 8
#define HEXAND1_d9 9
#define HEXAND1_da 8
#define HEXAND1_db 9
#define HEXAND1_dc c
#define HEXAND1_dd d
#define HEXAND1_de c
#define HEXAND1_df d
#define HEXAND1_e0 0
#define HEXAND1_e1 0
#define HEXAND1_e2 2
#define HEXAND1_e3 2
#define HEXAND1_e4 4
#define HEXAND1_e5 4
#define HEXAND1_e6 6
#define HEXAND1_e7 6
#define HEXAND1_e8 8
#define HEXAND1_e9 8
#define HEXAND1_ea a
#define HEXAND1_eb a
#define HEXAND1_ec c
#define HEXAND1_ed c
#define HEXAND1_ee e
#define HEXAND1_ef e
#define HEXAND1_f0 0
#define HEXAND1_f1 1
#define HEXAND1_f2 2
#define HEXAND1_f3 3
#define HEXAND1_f4 4
#define HEXAND1_f5 5
#define HEXAND1_f6 6
#define HEXAND1_f7 7
#define HEXAND1_f8 8
#define HEXAND1_f9 9
#define HEXAND1_fa a
#define HEXAND1_fb b
#define HEXAND1_fc c
#define HEXAND1_fd d
#define HEXAND1_fe e
#define HEXAND1_ff f

#endif