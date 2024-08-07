#ifndef C23META_FP32H_FP32
#define C23META_FP32H_FP32

#include "cmp/cmp.h"
#include "bits/bits.h"
#include "math/math.h"
#include "convert.h"
#include "parse.h"

#define FP32H_EXPONENT_BIAS I32H_127

#define FP32H_NAN  (0,0,0,0,0,c,f,7)
#define FP32H_INF  (0,0,0,0,0,8,f,7)
#define FP32H_NINF (0,0,0,0,0,8,f,f)

#define FP32H_0 (0,0,0,0,0,0,0,0)
#define FP32H_1 (0,0,0,0,0,8,f,3)
#define FP32H_2 (0,0,0,0,0,0,0,4)
#define FP32H_3 (0,0,0,0,0,4,0,4)
#define FP32H_4 (0,0,0,0,0,8,0,4)
#define FP32H_5 (0,0,0,0,0,a,0,4)
#define FP32H_6 (0,0,0,0,0,c,0,4)
#define FP32H_7 (0,0,0,0,0,e,0,4)
#define FP32H_8 (0,0,0,0,0,0,1,4)
#define FP32H_9 (0,0,0,0,0,1,1,4)
#define FP32H_10 (0,0,0,0,0,2,1,4)
#define FP32H_11 (0,0,0,0,0,3,1,4)
#define FP32H_12 (0,0,0,0,0,4,1,4)
#define FP32H_13 (0,0,0,0,0,5,1,4)
#define FP32H_14 (0,0,0,0,0,6,1,4)
#define FP32H_15 (0,0,0,0,0,7,1,4)
#define FP32H_16 (0,0,0,0,0,8,1,4)
#define FP32H_17 (0,0,0,0,8,8,1,4)
#define FP32H_18 (0,0,0,0,0,9,1,4)
#define FP32H_19 (0,0,0,0,8,9,1,4)
#define FP32H_20 (0,0,0,0,0,a,1,4)
#define FP32H_21 (0,0,0,0,8,a,1,4)
#define FP32H_22 (0,0,0,0,0,b,1,4)
#define FP32H_23 (0,0,0,0,8,b,1,4)
#define FP32H_24 (0,0,0,0,0,c,1,4)
#define FP32H_25 (0,0,0,0,8,c,1,4)
#define FP32H_26 (0,0,0,0,0,d,1,4)
#define FP32H_27 (0,0,0,0,8,d,1,4)
#define FP32H_28 (0,0,0,0,0,e,1,4)
#define FP32H_29 (0,0,0,0,8,e,1,4)
#define FP32H_30 (0,0,0,0,0,f,1,4)
#define FP32H_31 (0,0,0,0,8,f,1,4)
#define FP32H_32 (0,0,0,0,0,0,2,4)
#define FP32H_33 (0,0,0,0,4,0,2,4)
#define FP32H_34 (0,0,0,0,8,0,2,4)
#define FP32H_35 (0,0,0,0,c,0,2,4)
#define FP32H_36 (0,0,0,0,0,1,2,4)
#define FP32H_37 (0,0,0,0,4,1,2,4)
#define FP32H_38 (0,0,0,0,8,1,2,4)
#define FP32H_39 (0,0,0,0,c,1,2,4)
#define FP32H_40 (0,0,0,0,0,2,2,4)
#define FP32H_41 (0,0,0,0,4,2,2,4)
#define FP32H_42 (0,0,0,0,8,2,2,4)
#define FP32H_43 (0,0,0,0,c,2,2,4)
#define FP32H_44 (0,0,0,0,0,3,2,4)
#define FP32H_45 (0,0,0,0,4,3,2,4)
#define FP32H_46 (0,0,0,0,8,3,2,4)
#define FP32H_47 (0,0,0,0,c,3,2,4)
#define FP32H_48 (0,0,0,0,0,4,2,4)
#define FP32H_49 (0,0,0,0,4,4,2,4)
#define FP32H_50 (0,0,0,0,8,4,2,4)
#define FP32H_51 (0,0,0,0,c,4,2,4)
#define FP32H_52 (0,0,0,0,0,5,2,4)
#define FP32H_53 (0,0,0,0,4,5,2,4)
#define FP32H_54 (0,0,0,0,8,5,2,4)
#define FP32H_55 (0,0,0,0,c,5,2,4)
#define FP32H_56 (0,0,0,0,0,6,2,4)
#define FP32H_57 (0,0,0,0,4,6,2,4)
#define FP32H_58 (0,0,0,0,8,6,2,4)
#define FP32H_59 (0,0,0,0,c,6,2,4)
#define FP32H_60 (0,0,0,0,0,7,2,4)
#define FP32H_61 (0,0,0,0,4,7,2,4)
#define FP32H_62 (0,0,0,0,8,7,2,4)
#define FP32H_63 (0,0,0,0,c,7,2,4)
#define FP32H_64 (0,0,0,0,0,8,2,4)
#define FP32H_65 (0,0,0,0,2,8,2,4)
#define FP32H_66 (0,0,0,0,4,8,2,4)
#define FP32H_67 (0,0,0,0,6,8,2,4)
#define FP32H_68 (0,0,0,0,8,8,2,4)
#define FP32H_69 (0,0,0,0,a,8,2,4)
#define FP32H_70 (0,0,0,0,c,8,2,4)
#define FP32H_71 (0,0,0,0,e,8,2,4)
#define FP32H_72 (0,0,0,0,0,9,2,4)
#define FP32H_73 (0,0,0,0,2,9,2,4)
#define FP32H_74 (0,0,0,0,4,9,2,4)
#define FP32H_75 (0,0,0,0,6,9,2,4)
#define FP32H_76 (0,0,0,0,8,9,2,4)
#define FP32H_77 (0,0,0,0,a,9,2,4)
#define FP32H_78 (0,0,0,0,c,9,2,4)
#define FP32H_79 (0,0,0,0,e,9,2,4)
#define FP32H_80 (0,0,0,0,0,a,2,4)
#define FP32H_81 (0,0,0,0,2,a,2,4)
#define FP32H_82 (0,0,0,0,4,a,2,4)
#define FP32H_83 (0,0,0,0,6,a,2,4)
#define FP32H_84 (0,0,0,0,8,a,2,4)
#define FP32H_85 (0,0,0,0,a,a,2,4)
#define FP32H_86 (0,0,0,0,c,a,2,4)
#define FP32H_87 (0,0,0,0,e,a,2,4)
#define FP32H_88 (0,0,0,0,0,b,2,4)
#define FP32H_89 (0,0,0,0,2,b,2,4)
#define FP32H_90 (0,0,0,0,4,b,2,4)
#define FP32H_91 (0,0,0,0,6,b,2,4)
#define FP32H_92 (0,0,0,0,8,b,2,4)
#define FP32H_93 (0,0,0,0,a,b,2,4)
#define FP32H_94 (0,0,0,0,c,b,2,4)
#define FP32H_95 (0,0,0,0,e,b,2,4)
#define FP32H_96 (0,0,0,0,0,c,2,4)
#define FP32H_97 (0,0,0,0,2,c,2,4)
#define FP32H_98 (0,0,0,0,4,c,2,4)
#define FP32H_99 (0,0,0,0,6,c,2,4)
#define FP32H_100 (0,0,0,0,8,c,2,4)
#define FP32H_101 (0,0,0,0,a,c,2,4)
#define FP32H_102 (0,0,0,0,c,c,2,4)
#define FP32H_103 (0,0,0,0,e,c,2,4)
#define FP32H_104 (0,0,0,0,0,d,2,4)
#define FP32H_105 (0,0,0,0,2,d,2,4)
#define FP32H_106 (0,0,0,0,4,d,2,4)
#define FP32H_107 (0,0,0,0,6,d,2,4)
#define FP32H_108 (0,0,0,0,8,d,2,4)
#define FP32H_109 (0,0,0,0,a,d,2,4)
#define FP32H_110 (0,0,0,0,c,d,2,4)
#define FP32H_111 (0,0,0,0,e,d,2,4)
#define FP32H_112 (0,0,0,0,0,e,2,4)
#define FP32H_113 (0,0,0,0,2,e,2,4)
#define FP32H_114 (0,0,0,0,4,e,2,4)
#define FP32H_115 (0,0,0,0,6,e,2,4)
#define FP32H_116 (0,0,0,0,8,e,2,4)
#define FP32H_117 (0,0,0,0,a,e,2,4)
#define FP32H_118 (0,0,0,0,c,e,2,4)
#define FP32H_119 (0,0,0,0,e,e,2,4)
#define FP32H_120 (0,0,0,0,0,f,2,4)
#define FP32H_121 (0,0,0,0,2,f,2,4)
#define FP32H_122 (0,0,0,0,4,f,2,4)
#define FP32H_123 (0,0,0,0,6,f,2,4)
#define FP32H_124 (0,0,0,0,8,f,2,4)
#define FP32H_125 (0,0,0,0,a,f,2,4)
#define FP32H_126 (0,0,0,0,c,f,2,4)
#define FP32H_127 (0,0,0,0,e,f,2,4)
#define FP32H_128 (0,0,0,0,0,0,3,4)
#define FP32H_129 (0,0,0,0,1,0,3,4)
#define FP32H_130 (0,0,0,0,2,0,3,4)
#define FP32H_131 (0,0,0,0,3,0,3,4)
#define FP32H_132 (0,0,0,0,4,0,3,4)
#define FP32H_133 (0,0,0,0,5,0,3,4)
#define FP32H_134 (0,0,0,0,6,0,3,4)
#define FP32H_135 (0,0,0,0,7,0,3,4)
#define FP32H_136 (0,0,0,0,8,0,3,4)
#define FP32H_137 (0,0,0,0,9,0,3,4)
#define FP32H_138 (0,0,0,0,a,0,3,4)
#define FP32H_139 (0,0,0,0,b,0,3,4)
#define FP32H_140 (0,0,0,0,c,0,3,4)
#define FP32H_141 (0,0,0,0,d,0,3,4)
#define FP32H_142 (0,0,0,0,e,0,3,4)
#define FP32H_143 (0,0,0,0,f,0,3,4)
#define FP32H_144 (0,0,0,0,0,1,3,4)
#define FP32H_145 (0,0,0,0,1,1,3,4)
#define FP32H_146 (0,0,0,0,2,1,3,4)
#define FP32H_147 (0,0,0,0,3,1,3,4)
#define FP32H_148 (0,0,0,0,4,1,3,4)
#define FP32H_149 (0,0,0,0,5,1,3,4)
#define FP32H_150 (0,0,0,0,6,1,3,4)
#define FP32H_151 (0,0,0,0,7,1,3,4)
#define FP32H_152 (0,0,0,0,8,1,3,4)
#define FP32H_153 (0,0,0,0,9,1,3,4)
#define FP32H_154 (0,0,0,0,a,1,3,4)
#define FP32H_155 (0,0,0,0,b,1,3,4)
#define FP32H_156 (0,0,0,0,c,1,3,4)
#define FP32H_157 (0,0,0,0,d,1,3,4)
#define FP32H_158 (0,0,0,0,e,1,3,4)
#define FP32H_159 (0,0,0,0,f,1,3,4)
#define FP32H_160 (0,0,0,0,0,2,3,4)
#define FP32H_161 (0,0,0,0,1,2,3,4)
#define FP32H_162 (0,0,0,0,2,2,3,4)
#define FP32H_163 (0,0,0,0,3,2,3,4)
#define FP32H_164 (0,0,0,0,4,2,3,4)
#define FP32H_165 (0,0,0,0,5,2,3,4)
#define FP32H_166 (0,0,0,0,6,2,3,4)
#define FP32H_167 (0,0,0,0,7,2,3,4)
#define FP32H_168 (0,0,0,0,8,2,3,4)
#define FP32H_169 (0,0,0,0,9,2,3,4)
#define FP32H_170 (0,0,0,0,a,2,3,4)
#define FP32H_171 (0,0,0,0,b,2,3,4)
#define FP32H_172 (0,0,0,0,c,2,3,4)
#define FP32H_173 (0,0,0,0,d,2,3,4)
#define FP32H_174 (0,0,0,0,e,2,3,4)
#define FP32H_175 (0,0,0,0,f,2,3,4)
#define FP32H_176 (0,0,0,0,0,3,3,4)
#define FP32H_177 (0,0,0,0,1,3,3,4)
#define FP32H_178 (0,0,0,0,2,3,3,4)
#define FP32H_179 (0,0,0,0,3,3,3,4)
#define FP32H_180 (0,0,0,0,4,3,3,4)
#define FP32H_181 (0,0,0,0,5,3,3,4)
#define FP32H_182 (0,0,0,0,6,3,3,4)
#define FP32H_183 (0,0,0,0,7,3,3,4)
#define FP32H_184 (0,0,0,0,8,3,3,4)
#define FP32H_185 (0,0,0,0,9,3,3,4)
#define FP32H_186 (0,0,0,0,a,3,3,4)
#define FP32H_187 (0,0,0,0,b,3,3,4)
#define FP32H_188 (0,0,0,0,c,3,3,4)
#define FP32H_189 (0,0,0,0,d,3,3,4)
#define FP32H_190 (0,0,0,0,e,3,3,4)
#define FP32H_191 (0,0,0,0,f,3,3,4)
#define FP32H_192 (0,0,0,0,0,4,3,4)
#define FP32H_193 (0,0,0,0,1,4,3,4)
#define FP32H_194 (0,0,0,0,2,4,3,4)
#define FP32H_195 (0,0,0,0,3,4,3,4)
#define FP32H_196 (0,0,0,0,4,4,3,4)
#define FP32H_197 (0,0,0,0,5,4,3,4)
#define FP32H_198 (0,0,0,0,6,4,3,4)
#define FP32H_199 (0,0,0,0,7,4,3,4)
#define FP32H_200 (0,0,0,0,8,4,3,4)
#define FP32H_201 (0,0,0,0,9,4,3,4)
#define FP32H_202 (0,0,0,0,a,4,3,4)
#define FP32H_203 (0,0,0,0,b,4,3,4)
#define FP32H_204 (0,0,0,0,c,4,3,4)
#define FP32H_205 (0,0,0,0,d,4,3,4)
#define FP32H_206 (0,0,0,0,e,4,3,4)
#define FP32H_207 (0,0,0,0,f,4,3,4)
#define FP32H_208 (0,0,0,0,0,5,3,4)
#define FP32H_209 (0,0,0,0,1,5,3,4)
#define FP32H_210 (0,0,0,0,2,5,3,4)
#define FP32H_211 (0,0,0,0,3,5,3,4)
#define FP32H_212 (0,0,0,0,4,5,3,4)
#define FP32H_213 (0,0,0,0,5,5,3,4)
#define FP32H_214 (0,0,0,0,6,5,3,4)
#define FP32H_215 (0,0,0,0,7,5,3,4)
#define FP32H_216 (0,0,0,0,8,5,3,4)
#define FP32H_217 (0,0,0,0,9,5,3,4)
#define FP32H_218 (0,0,0,0,a,5,3,4)
#define FP32H_219 (0,0,0,0,b,5,3,4)
#define FP32H_220 (0,0,0,0,c,5,3,4)
#define FP32H_221 (0,0,0,0,d,5,3,4)
#define FP32H_222 (0,0,0,0,e,5,3,4)
#define FP32H_223 (0,0,0,0,f,5,3,4)
#define FP32H_224 (0,0,0,0,0,6,3,4)
#define FP32H_225 (0,0,0,0,1,6,3,4)
#define FP32H_226 (0,0,0,0,2,6,3,4)
#define FP32H_227 (0,0,0,0,3,6,3,4)
#define FP32H_228 (0,0,0,0,4,6,3,4)
#define FP32H_229 (0,0,0,0,5,6,3,4)
#define FP32H_230 (0,0,0,0,6,6,3,4)
#define FP32H_231 (0,0,0,0,7,6,3,4)
#define FP32H_232 (0,0,0,0,8,6,3,4)
#define FP32H_233 (0,0,0,0,9,6,3,4)
#define FP32H_234 (0,0,0,0,a,6,3,4)
#define FP32H_235 (0,0,0,0,b,6,3,4)
#define FP32H_236 (0,0,0,0,c,6,3,4)
#define FP32H_237 (0,0,0,0,d,6,3,4)
#define FP32H_238 (0,0,0,0,e,6,3,4)
#define FP32H_239 (0,0,0,0,f,6,3,4)
#define FP32H_240 (0,0,0,0,0,7,3,4)
#define FP32H_241 (0,0,0,0,1,7,3,4)
#define FP32H_242 (0,0,0,0,2,7,3,4)
#define FP32H_243 (0,0,0,0,3,7,3,4)
#define FP32H_244 (0,0,0,0,4,7,3,4)
#define FP32H_245 (0,0,0,0,5,7,3,4)
#define FP32H_246 (0,0,0,0,6,7,3,4)
#define FP32H_247 (0,0,0,0,7,7,3,4)
#define FP32H_248 (0,0,0,0,8,7,3,4)
#define FP32H_249 (0,0,0,0,9,7,3,4)
#define FP32H_250 (0,0,0,0,a,7,3,4)
#define FP32H_251 (0,0,0,0,b,7,3,4)
#define FP32H_252 (0,0,0,0,c,7,3,4)
#define FP32H_253 (0,0,0,0,d,7,3,4)
#define FP32H_254 (0,0,0,0,e,7,3,4)
#define FP32H_255 (0,0,0,0,f,7,3,4)
#define FP32H_256 (0,0,0,0,0,8,3,4)

#define FP32H_1L1 (0,0,0,0,0,8,f,3)
#define FP32H_1L2 (0,0,0,0,0,0,f,3)
#define FP32H_1L3 (b,a,a,a,a,a,e,3)
#define FP32H_1L4 (0,0,0,0,0,8,e,3)
#define FP32H_1L5 (d,c,c,c,c,4,e,3)
#define FP32H_1L6 (b,a,a,a,a,2,e,3)
#define FP32H_1L7 (5,2,9,4,2,1,e,3)
#define FP32H_1L8 (0,0,0,0,0,0,e,3)
#define FP32H_1L9 (9,3,e,8,3,e,d,3)
#define FP32H_1L10 (d,c,c,c,c,c,d,3)
#define FP32H_1L11 (c,8,e,2,a,b,d,3)
#define FP32H_1L12 (b,a,a,a,a,a,d,3)
#define FP32H_1L13 (9,d,9,8,d,9,d,3)
#define FP32H_1L14 (5,2,9,4,2,9,d,3)
#define FP32H_1L15 (9,8,8,8,8,8,d,3)
#define FP32H_1L16 (0,0,0,0,0,8,d,3)
#define FP32H_1L17 (1,f,0,f,0,7,d,3)
#define FP32H_1L18 (9,3,e,8,3,6,d,3)
#define FP32H_1L19 (6,3,4,9,7,5,d,3)
#define FP32H_1L20 (d,c,c,c,c,4,d,3)
#define FP32H_1L21 (1,3,c,0,3,4,d,3)
#define FP32H_1L22 (c,8,e,2,a,3,d,3)
#define FP32H_1L23 (3,4,6,1,2,3,d,3)
#define FP32H_1L24 (b,a,a,a,a,2,d,3)
#define FP32H_1L25 (a,0,7,d,3,2,d,3)
#define FP32H_1L26 (9,d,9,8,d,1,d,3)
#define FP32H_1L27 (6,2,4,b,7,1,d,3)
#define FP32H_1L28 (5,2,9,4,2,1,d,3)
#define FP32H_1L29 (b,c,d,3,d,0,d,3)
#define FP32H_1L30 (9,8,8,8,8,0,d,3)
#define FP32H_1L31 (8,0,1,2,4,0,d,3)
#define FP32H_1L32 (0,0,0,0,0,0,d,3)
#define FP32H_1L33 (0,1,e,3,8,f,c,3)
#define FP32H_1L34 (1,f,0,f,0,f,c,3)
#define FP32H_1L35 (1,a,e,0,a,e,c,3)
#define FP32H_1L36 (9,3,e,8,3,e,c,3)
#define FP32H_1L37 (9,c,7,6,d,d,c,3)
#define FP32H_1L38 (6,3,4,9,7,d,c,3)
#define FP32H_1L39 (1,2,d,0,2,d,c,3)
#define FP32H_1L40 (d,c,c,c,c,c,c,3)
#define FP32H_1L41 (c,0,e,c,7,c,c,3)
#define FP32H_1L42 (1,3,c,0,3,c,c,3)
#define FP32H_1L43 (a,f,2,8,e,b,c,3)
#define FP32H_1L44 (c,8,e,2,a,b,c,3)
#define FP32H_1L45 (1,6,b,0,6,b,c,3)
#define FP32H_1L46 (3,4,6,1,2,b,c,3)
#define FP32H_1L47 (1,4,c,4,e,a,c,3)
#define FP32H_1L48 (b,a,a,a,a,a,c,3)
#define FP32H_1L49 (5,0,f,2,7,a,c,3)
#define FP32H_1L50 (a,0,7,d,3,a,c,3)
#define FP32H_1L51 (1,a,0,a,0,a,c,3)
#define FP32H_1L52 (9,d,9,8,d,9,c,3)
#define FP32H_1L53 (8,e,0,9,a,9,c,3)
#define FP32H_1L54 (6,2,4,b,7,9,c,3)
#define FP32H_1L55 (9,0,2,f,4,9,c,3)
#define FP32H_1L56 (5,2,9,4,2,9,c,3)
#define FP32H_1L57 (4,2,8,b,f,8,c,3)
#define FP32H_1L58 (b,c,d,3,d,8,c,3)
#define FP32H_1L59 (3,f,8,d,a,8,c,3)
#define FP32H_1L60 (9,8,8,8,8,8,c,3)
#define FP32H_1L61 (a,8,b,4,6,8,c,3)
#define FP32H_1L62 (8,0,1,2,4,8,c,3)
#define FP32H_1L63 (1,2,8,0,2,8,c,3)
#define FP32H_1L64 (0,0,0,0,0,8,c,3)
#define FP32H_1L65 (1,c,f,0,c,7,c,3)
#define FP32H_1L66 (0,1,e,3,8,7,c,3)
#define FP32H_1L67 (d,8,9,8,4,7,c,3)
#define FP32H_1L68 (1,f,0,f,0,7,c,3)
#define FP32H_1L69 (4,0,3,7,d,6,c,3)
#define FP32H_1L70 (1,a,e,0,a,6,c,3)
#define FP32H_1L71 (4,b,2,c,6,6,c,3)
#define FP32H_1L72 (9,3,e,8,3,6,c,3)
#define FP32H_1L73 (8,3,0,7,0,6,c,3)
#define FP32H_1L74 (9,c,7,6,d,5,c,3)
#define FP32H_1L75 (e,0,4,7,a,5,c,3)
#define FP32H_1L76 (6,3,4,9,7,5,c,3)
#define FP32H_1L77 (b,7,7,c,4,5,c,3)
#define FP32H_1L78 (1,2,d,0,2,5,c,3)
#define FP32H_1L79 (5,7,4,6,f,4,c,3)
#define FP32H_1L80 (d,c,c,c,c,4,c,3)
#define FP32H_1L81 (8,8,5,4,a,4,c,3)
#define FP32H_1L82 (c,0,e,c,7,4,c,3)
#define FP32H_1L83 (8,c,5,6,5,4,c,3)
#define FP32H_1L84 (1,3,c,0,3,4,c,3)
#define FP32H_1L85 (1,c,0,c,0,4,c,3)
#define FP32H_1L86 (a,f,2,8,e,3,c,3)
#define FP32H_1L87 (4,6,2,5,c,3,c,3)
#define FP32H_1L88 (c,8,e,2,a,3,c,3)
#define FP32H_1L89 (3,0,7,1,8,3,c,3)
#define FP32H_1L90 (1,6,b,0,6,3,c,3)
#define FP32H_1L91 (1,4,b,0,4,3,c,3)
#define FP32H_1L92 (3,4,6,1,2,3,c,3)
#define FP32H_1L93 (b,0,c,2,0,3,c,3)
#define FP32H_1L94 (1,4,c,4,e,2,c,3)
#define FP32H_1L95 (2,9,6,7,c,2,c,3)
#define FP32H_1L96 (b,a,a,a,a,2,c,3)
#define FP32H_1L97 (f,3,8,e,8,2,c,3)
#define FP32H_1L98 (5,0,f,2,7,2,c,3)
#define FP32H_1L99 (5,b,e,7,5,2,c,3)
#define FP32H_1L100 (a,0,7,d,3,2,c,3)
#define FP32H_1L101 (3,c,7,3,2,2,c,3)
#define FP32H_1L102 (1,a,0,a,0,2,c,3)
#define FP32H_1L103 (6,6,1,1,f,1,c,3)
#define FP32H_1L104 (9,d,9,8,d,1,c,3)
#define FP32H_1L105 (1,c,9,0,c,1,c,3)
#define FP32H_1L106 (8,e,0,9,a,1,c,3)
#define FP32H_1L107 (a,1,f,1,9,1,c,3)
#define FP32H_1L108 (6,2,4,b,7,1,c,3)
#define FP32H_1L109 (a,d,f,4,6,1,c,3)
#define FP32H_1L110 (9,0,2,f,4,1,c,3)
#define FP32H_1L111 (6,8,a,9,3,1,c,3)
#define FP32H_1L112 (5,2,9,4,2,1,c,3)
#define FP32H_1L113 (c,b,d,f,0,1,c,3)
#define FP32H_1L114 (4,2,8,b,f,0,c,3)
#define FP32H_1L115 (5,3,8,7,e,0,c,3)
#define FP32H_1L116 (b,c,d,3,d,0,c,3)
#define FP32H_1L117 (1,c,8,0,c,0,c,3)
#define FP32H_1L118 (3,f,8,d,a,0,c,3)
#define FP32H_1L119 (1,4,e,a,9,0,c,3)
#define FP32H_1L120 (9,8,8,8,8,0,c,3)
#define FP32H_1L121 (b,a,7,6,7,0,c,3)
#define FP32H_1L122 (a,8,b,4,6,0,c,3)
#define FP32H_1L123 (8,0,4,3,5,0,c,3)
#define FP32H_1L124 (8,0,1,2,4,0,c,3)
#define FP32H_1L125 (f,6,2,1,3,0,c,3)
#define FP32H_1L126 (1,2,8,0,2,0,c,3)
#define FP32H_1L127 (4,0,2,0,1,0,c,3)
#define FP32H_1L128 (0,0,0,0,0,0,c,3)
#define FP32H_1L129 (8,f,3,0,e,f,b,3)
#define FP32H_1L130 (1,c,f,0,c,f,b,3)
#define FP32H_1L131 (d,2,3,2,a,f,b,3)
#define FP32H_1L132 (0,1,e,3,8,f,b,3)
#define FP32H_1L133 (e,3,0,6,6,f,b,3)
#define FP32H_1L134 (d,8,9,8,4,f,b,3)
#define FP32H_1L135 (6,d,9,b,2,f,b,3)
#define FP32H_1L136 (1,f,0,f,0,f,b,3)
#define FP32H_1L137 (7,b,e,2,f,e,b,3)
#define FP32H_1L138 (4,0,3,7,d,e,b,3)
#define FP32H_1L139 (3,b,d,b,b,e,b,3)
#define FP32H_1L140 (1,a,e,0,a,e,b,3)
#define FP32H_1L141 (c,a,5,6,8,e,b,3)
#define FP32H_1L142 (4,b,2,c,6,e,b,3)
#define FP32H_1L143 (8,9,5,2,5,e,b,3)
#define FP32H_1L144 (9,3,e,8,3,e,b,3)
#define FP32H_1L145 (8,7,c,f,1,e,b,3)
#define FP32H_1L146 (8,3,0,7,0,e,b,3)
#define FP32H_1L147 (c,5,9,e,e,d,b,3)
#define FP32H_1L148 (9,c,7,6,d,d,b,3)
#define FP32H_1L149 (2,6,b,e,b,d,b,3)
#define FP32H_1L150 (e,0,4,7,a,d,b,3)
#define FP32H_1L151 (2,b,1,0,9,d,b,3)
#define FP32H_1L152 (6,3,4,9,7,d,b,3)
#define FP32H_1L153 (1,8,b,2,6,d,b,3)
#define FP32H_1L154 (b,7,7,c,4,d,b,3)
#define FP32H_1L155 (d,0,8,6,3,d,b,3)
#define FP32H_1L156 (1,2,d,0,2,d,b,3)
#define FP32H_1L157 (0,a,6,b,0,d,b,3)
#define FP32H_1L158 (5,7,4,6,f,c,b,3)
#define FP32H_1L159 (a,8,6,1,e,c,b,3)
#define FP32H_1L160 (d,c,c,c,c,c,b,3)
#define FP32H_1L161 (8,2,7,8,b,c,b,3)
#define FP32H_1L162 (8,8,5,4,a,c,b,3)
#define FP32H_1L163 (a,d,7,0,9,c,b,3)
#define FP32H_1L164 (c,0,e,c,7,c,b,3)
#define FP32H_1L165 (c,0,8,9,6,c,b,3)
#define FP32H_1L166 (8,c,5,6,5,c,b,3)
#define FP32H_1L167 (0,3,7,3,4,c,b,3)
#define FP32H_1L168 (1,3,c,0,3,c,b,3)
#define FP32H_1L169 (c,b,4,e,1,c,b,3)
#define FP32H_1L170 (1,c,0,c,0,c,b,3)
#define FP32H_1L171 (0,3,0,a,f,b,b,3)
#define FP32H_1L172 (a,f,2,8,e,b,b,3)
#define FP32H_1L173 (0,1,9,6,d,b,b,3)
#define FP32H_1L174 (4,6,2,5,c,b,b,3)
#define FP32H_1L175 (7,e,e,3,b,b,b,3)
#define FP32H_1L176 (c,8,e,2,a,b,b,3)
#define FP32H_1L177 (4,4,1,2,9,b,b,3)
#define FP32H_1L178 (3,0,7,1,8,b,b,3)
#define FP32H_1L179 (b,b,f,0,7,b,b,3)
#define FP32H_1L180 (1,6,b,0,6,b,b,3)
#define FP32H_1L181 (7,e,9,0,5,b,b,3)
#define FP32H_1L182 (1,4,b,0,4,b,b,3)
#define FP32H_1L183 (3,6,f,0,3,b,b,3)
#define FP32H_1L184 (3,4,6,1,2,b,b,3)
#define FP32H_1L185 (4,d,f,1,1,b,b,3)
#define FP32H_1L186 (b,0,c,2,0,b,b,3)
#define FP32H_1L187 (e,d,a,3,f,a,b,3)
#define FP32H_1L188 (1,4,c,4,e,a,b,3)
#define FP32H_1L189 (b,2,0,6,d,a,b,3)
#define FP32H_1L190 (2,9,6,7,c,a,b,3)
#define FP32H_1L191 (a,6,f,8,b,a,b,3)
#define FP32H_1L192 (b,a,a,a,a,a,b,3)
#define FP32H_1L193 (a,4,8,c,9,a,b,3)
#define FP32H_1L194 (f,3,8,e,8,a,b,3)
#define FP32H_1L195 (1,8,a,0,8,a,b,3)
#define FP32H_1L196 (5,0,f,2,7,a,b,3)
#define FP32H_1L197 (4,c,5,5,6,a,b,3)
#define FP32H_1L198 (5,b,e,7,5,a,b,3)
#define FP32H_1L199 (f,c,9,a,4,a,b,3)
#define FP32H_1L200 (a,0,7,d,3,a,b,3)
#define FP32H_1L201 (e,5,6,0,3,a,b,3)
#define FP32H_1L202 (3,c,7,3,2,a,b,3)
#define FP32H_1L203 (1,3,b,6,1,a,b,3)
#define FP32H_1L204 (1,a,0,a,0,a,b,3)
#define FP32H_1L205 (a,0,8,d,f,9,b,3)
#define FP32H_1L206 (6,6,1,1,f,9,b,3)
#define FP32H_1L207 (d,a,c,4,e,9,b,3)
#define FP32H_1L208 (9,d,9,8,d,9,b,3)
#define FP32H_1L209 (1,e,8,c,c,9,b,3)
#define FP32H_1L210 (1,c,9,0,c,9,b,3)
#define FP32H_1L211 (0,7,c,4,b,9,b,3)
#define FP32H_1L212 (8,e,0,9,a,9,b,3)
#define FP32H_1L213 (3,2,7,d,9,9,b,3)
#define FP32H_1L214 (a,1,f,1,9,9,b,3)
#define FP32H_1L215 (8,c,8,6,8,9,b,3)
#define FP32H_1L216 (6,2,4,b,7,9,b,3)
#define FP32H_1L217 (e,2,1,0,7,9,b,3)
#define FP32H_1L218 (a,d,f,4,6,9,b,3)
#define FP32H_1L219 (5,2,0,a,5,9,b,3)
#define FP32H_1L220 (9,0,2,f,4,9,b,3)
#define FP32H_1L221 (1,8,5,4,4,9,b,3)
#define FP32H_1L222 (6,8,a,9,3,9,b,3)
#define FP32H_1L223 (4,1,1,f,2,9,b,3)
#define FP32H_1L224 (5,2,9,4,2,9,b,3)
#define FP32H_1L225 (4,b,2,a,1,9,b,3)
#define FP32H_1L226 (c,b,d,f,0,9,b,3)
#define FP32H_1L227 (8,3,a,5,0,9,b,3)
#define FP32H_1L228 (4,2,8,b,f,8,b,3)
#define FP32H_1L229 (a,7,7,1,f,8,b,3)
#define FP32H_1L230 (5,3,8,7,e,8,b,3)
#define FP32H_1L231 (2,5,a,d,d,8,b,3)
#define FP32H_1L232 (b,c,d,3,d,8,b,3)
#define FP32H_1L233 (c,9,2,a,c,8,b,3)
#define FP32H_1L234 (1,c,8,0,c,8,b,3)
#define FP32H_1L235 (4,3,0,7,b,8,b,3)
#define FP32H_1L236 (3,f,8,d,a,8,b,3)
#define FP32H_1L237 (8,f,2,4,a,8,b,3)
#define FP32H_1L238 (1,4,e,a,9,8,b,3)
#define FP32H_1L239 (7,c,a,1,9,8,b,3)
#define FP32H_1L240 (9,8,8,8,8,8,b,3)
#define FP32H_1L241 (1,8,7,f,7,8,b,3)
#define FP32H_1L242 (b,a,7,6,7,8,b,3)
#define FP32H_1L243 (5,0,9,d,6,8,b,3)
#define FP32H_1L244 (a,8,b,4,6,8,b,3)
#define FP32H_1L245 (7,3,f,b,5,8,b,3)
#define FP32H_1L246 (8,0,4,3,5,8,b,3)
#define FP32H_1L247 (a,f,9,a,4,8,b,3)
#define FP32H_1L248 (8,0,1,2,4,8,b,3)
#define FP32H_1L249 (0,3,9,9,3,8,b,3)
#define FP32H_1L250 (f,6,2,1,3,8,b,3)
#define FP32H_1L251 (0,c,c,8,2,8,b,3)
#define FP32H_1L252 (1,2,8,0,2,8,b,3)
#define FP32H_1L253 (e,8,4,8,1,8,b,3)
#define FP32H_1L254 (4,0,2,0,1,8,b,3)
#define FP32H_1L255 (1,8,0,8,0,8,b,3)
#define FP32H_1L256 (0,0,0,0,0,8,b,3)

#define FP32H_N0 (0,0,0,0,0,0,0,8)
#define FP32H_N1 (0,0,0,0,0,8,f,b)
#define FP32H_N2 (0,0,0,0,0,0,0,c)
#define FP32H_N3 (0,0,0,0,0,4,0,c)
#define FP32H_N4 (0,0,0,0,0,8,0,c)
#define FP32H_N5 (0,0,0,0,0,a,0,c)
#define FP32H_N6 (0,0,0,0,0,c,0,c)
#define FP32H_N7 (0,0,0,0,0,e,0,c)
#define FP32H_N8 (0,0,0,0,0,0,1,c)
#define FP32H_N9 (0,0,0,0,0,1,1,c)
#define FP32H_N10 (0,0,0,0,0,2,1,c)
#define FP32H_N11 (0,0,0,0,0,3,1,c)
#define FP32H_N12 (0,0,0,0,0,4,1,c)
#define FP32H_N13 (0,0,0,0,0,5,1,c)
#define FP32H_N14 (0,0,0,0,0,6,1,c)
#define FP32H_N15 (0,0,0,0,0,7,1,c)
#define FP32H_N16 (0,0,0,0,0,8,1,c)
#define FP32H_N17 (0,0,0,0,8,8,1,c)
#define FP32H_N18 (0,0,0,0,0,9,1,c)
#define FP32H_N19 (0,0,0,0,8,9,1,c)
#define FP32H_N20 (0,0,0,0,0,a,1,c)
#define FP32H_N21 (0,0,0,0,8,a,1,c)
#define FP32H_N22 (0,0,0,0,0,b,1,c)
#define FP32H_N23 (0,0,0,0,8,b,1,c)
#define FP32H_N24 (0,0,0,0,0,c,1,c)
#define FP32H_N25 (0,0,0,0,8,c,1,c)
#define FP32H_N26 (0,0,0,0,0,d,1,c)
#define FP32H_N27 (0,0,0,0,8,d,1,c)
#define FP32H_N28 (0,0,0,0,0,e,1,c)
#define FP32H_N29 (0,0,0,0,8,e,1,c)
#define FP32H_N30 (0,0,0,0,0,f,1,c)
#define FP32H_N31 (0,0,0,0,8,f,1,c)
#define FP32H_N32 (0,0,0,0,0,0,2,c)
#define FP32H_N33 (0,0,0,0,4,0,2,c)
#define FP32H_N34 (0,0,0,0,8,0,2,c)
#define FP32H_N35 (0,0,0,0,c,0,2,c)
#define FP32H_N36 (0,0,0,0,0,1,2,c)
#define FP32H_N37 (0,0,0,0,4,1,2,c)
#define FP32H_N38 (0,0,0,0,8,1,2,c)
#define FP32H_N39 (0,0,0,0,c,1,2,c)
#define FP32H_N40 (0,0,0,0,0,2,2,c)
#define FP32H_N41 (0,0,0,0,4,2,2,c)
#define FP32H_N42 (0,0,0,0,8,2,2,c)
#define FP32H_N43 (0,0,0,0,c,2,2,c)
#define FP32H_N44 (0,0,0,0,0,3,2,c)
#define FP32H_N45 (0,0,0,0,4,3,2,c)
#define FP32H_N46 (0,0,0,0,8,3,2,c)
#define FP32H_N47 (0,0,0,0,c,3,2,c)
#define FP32H_N48 (0,0,0,0,0,4,2,c)
#define FP32H_N49 (0,0,0,0,4,4,2,c)
#define FP32H_N50 (0,0,0,0,8,4,2,c)
#define FP32H_N51 (0,0,0,0,c,4,2,c)
#define FP32H_N52 (0,0,0,0,0,5,2,c)
#define FP32H_N53 (0,0,0,0,4,5,2,c)
#define FP32H_N54 (0,0,0,0,8,5,2,c)
#define FP32H_N55 (0,0,0,0,c,5,2,c)
#define FP32H_N56 (0,0,0,0,0,6,2,c)
#define FP32H_N57 (0,0,0,0,4,6,2,c)
#define FP32H_N58 (0,0,0,0,8,6,2,c)
#define FP32H_N59 (0,0,0,0,c,6,2,c)
#define FP32H_N60 (0,0,0,0,0,7,2,c)
#define FP32H_N61 (0,0,0,0,4,7,2,c)
#define FP32H_N62 (0,0,0,0,8,7,2,c)
#define FP32H_N63 (0,0,0,0,c,7,2,c)
#define FP32H_N64 (0,0,0,0,0,8,2,c)
#define FP32H_N65 (0,0,0,0,2,8,2,c)
#define FP32H_N66 (0,0,0,0,4,8,2,c)
#define FP32H_N67 (0,0,0,0,6,8,2,c)
#define FP32H_N68 (0,0,0,0,8,8,2,c)
#define FP32H_N69 (0,0,0,0,a,8,2,c)
#define FP32H_N70 (0,0,0,0,c,8,2,c)
#define FP32H_N71 (0,0,0,0,e,8,2,c)
#define FP32H_N72 (0,0,0,0,0,9,2,c)
#define FP32H_N73 (0,0,0,0,2,9,2,c)
#define FP32H_N74 (0,0,0,0,4,9,2,c)
#define FP32H_N75 (0,0,0,0,6,9,2,c)
#define FP32H_N76 (0,0,0,0,8,9,2,c)
#define FP32H_N77 (0,0,0,0,a,9,2,c)
#define FP32H_N78 (0,0,0,0,c,9,2,c)
#define FP32H_N79 (0,0,0,0,e,9,2,c)
#define FP32H_N80 (0,0,0,0,0,a,2,c)
#define FP32H_N81 (0,0,0,0,2,a,2,c)
#define FP32H_N82 (0,0,0,0,4,a,2,c)
#define FP32H_N83 (0,0,0,0,6,a,2,c)
#define FP32H_N84 (0,0,0,0,8,a,2,c)
#define FP32H_N85 (0,0,0,0,a,a,2,c)
#define FP32H_N86 (0,0,0,0,c,a,2,c)
#define FP32H_N87 (0,0,0,0,e,a,2,c)
#define FP32H_N88 (0,0,0,0,0,b,2,c)
#define FP32H_N89 (0,0,0,0,2,b,2,c)
#define FP32H_N90 (0,0,0,0,4,b,2,c)
#define FP32H_N91 (0,0,0,0,6,b,2,c)
#define FP32H_N92 (0,0,0,0,8,b,2,c)
#define FP32H_N93 (0,0,0,0,a,b,2,c)
#define FP32H_N94 (0,0,0,0,c,b,2,c)
#define FP32H_N95 (0,0,0,0,e,b,2,c)
#define FP32H_N96 (0,0,0,0,0,c,2,c)
#define FP32H_N97 (0,0,0,0,2,c,2,c)
#define FP32H_N98 (0,0,0,0,4,c,2,c)
#define FP32H_N99 (0,0,0,0,6,c,2,c)
#define FP32H_N100 (0,0,0,0,8,c,2,c)
#define FP32H_N101 (0,0,0,0,a,c,2,c)
#define FP32H_N102 (0,0,0,0,c,c,2,c)
#define FP32H_N103 (0,0,0,0,e,c,2,c)
#define FP32H_N104 (0,0,0,0,0,d,2,c)
#define FP32H_N105 (0,0,0,0,2,d,2,c)
#define FP32H_N106 (0,0,0,0,4,d,2,c)
#define FP32H_N107 (0,0,0,0,6,d,2,c)
#define FP32H_N108 (0,0,0,0,8,d,2,c)
#define FP32H_N109 (0,0,0,0,a,d,2,c)
#define FP32H_N110 (0,0,0,0,c,d,2,c)
#define FP32H_N111 (0,0,0,0,e,d,2,c)
#define FP32H_N112 (0,0,0,0,0,e,2,c)
#define FP32H_N113 (0,0,0,0,2,e,2,c)
#define FP32H_N114 (0,0,0,0,4,e,2,c)
#define FP32H_N115 (0,0,0,0,6,e,2,c)
#define FP32H_N116 (0,0,0,0,8,e,2,c)
#define FP32H_N117 (0,0,0,0,a,e,2,c)
#define FP32H_N118 (0,0,0,0,c,e,2,c)
#define FP32H_N119 (0,0,0,0,e,e,2,c)
#define FP32H_N120 (0,0,0,0,0,f,2,c)
#define FP32H_N121 (0,0,0,0,2,f,2,c)
#define FP32H_N122 (0,0,0,0,4,f,2,c)
#define FP32H_N123 (0,0,0,0,6,f,2,c)
#define FP32H_N124 (0,0,0,0,8,f,2,c)
#define FP32H_N125 (0,0,0,0,a,f,2,c)
#define FP32H_N126 (0,0,0,0,c,f,2,c)
#define FP32H_N127 (0,0,0,0,e,f,2,c)
#define FP32H_N128 (0,0,0,0,0,0,3,c)
#define FP32H_N129 (0,0,0,0,1,0,3,c)
#define FP32H_N130 (0,0,0,0,2,0,3,c)
#define FP32H_N131 (0,0,0,0,3,0,3,c)
#define FP32H_N132 (0,0,0,0,4,0,3,c)
#define FP32H_N133 (0,0,0,0,5,0,3,c)
#define FP32H_N134 (0,0,0,0,6,0,3,c)
#define FP32H_N135 (0,0,0,0,7,0,3,c)
#define FP32H_N136 (0,0,0,0,8,0,3,c)
#define FP32H_N137 (0,0,0,0,9,0,3,c)
#define FP32H_N138 (0,0,0,0,a,0,3,c)
#define FP32H_N139 (0,0,0,0,b,0,3,c)
#define FP32H_N140 (0,0,0,0,c,0,3,c)
#define FP32H_N141 (0,0,0,0,d,0,3,c)
#define FP32H_N142 (0,0,0,0,e,0,3,c)
#define FP32H_N143 (0,0,0,0,f,0,3,c)
#define FP32H_N144 (0,0,0,0,0,1,3,c)
#define FP32H_N145 (0,0,0,0,1,1,3,c)
#define FP32H_N146 (0,0,0,0,2,1,3,c)
#define FP32H_N147 (0,0,0,0,3,1,3,c)
#define FP32H_N148 (0,0,0,0,4,1,3,c)
#define FP32H_N149 (0,0,0,0,5,1,3,c)
#define FP32H_N150 (0,0,0,0,6,1,3,c)
#define FP32H_N151 (0,0,0,0,7,1,3,c)
#define FP32H_N152 (0,0,0,0,8,1,3,c)
#define FP32H_N153 (0,0,0,0,9,1,3,c)
#define FP32H_N154 (0,0,0,0,a,1,3,c)
#define FP32H_N155 (0,0,0,0,b,1,3,c)
#define FP32H_N156 (0,0,0,0,c,1,3,c)
#define FP32H_N157 (0,0,0,0,d,1,3,c)
#define FP32H_N158 (0,0,0,0,e,1,3,c)
#define FP32H_N159 (0,0,0,0,f,1,3,c)
#define FP32H_N160 (0,0,0,0,0,2,3,c)
#define FP32H_N161 (0,0,0,0,1,2,3,c)
#define FP32H_N162 (0,0,0,0,2,2,3,c)
#define FP32H_N163 (0,0,0,0,3,2,3,c)
#define FP32H_N164 (0,0,0,0,4,2,3,c)
#define FP32H_N165 (0,0,0,0,5,2,3,c)
#define FP32H_N166 (0,0,0,0,6,2,3,c)
#define FP32H_N167 (0,0,0,0,7,2,3,c)
#define FP32H_N168 (0,0,0,0,8,2,3,c)
#define FP32H_N169 (0,0,0,0,9,2,3,c)
#define FP32H_N170 (0,0,0,0,a,2,3,c)
#define FP32H_N171 (0,0,0,0,b,2,3,c)
#define FP32H_N172 (0,0,0,0,c,2,3,c)
#define FP32H_N173 (0,0,0,0,d,2,3,c)
#define FP32H_N174 (0,0,0,0,e,2,3,c)
#define FP32H_N175 (0,0,0,0,f,2,3,c)
#define FP32H_N176 (0,0,0,0,0,3,3,c)
#define FP32H_N177 (0,0,0,0,1,3,3,c)
#define FP32H_N178 (0,0,0,0,2,3,3,c)
#define FP32H_N179 (0,0,0,0,3,3,3,c)
#define FP32H_N180 (0,0,0,0,4,3,3,c)
#define FP32H_N181 (0,0,0,0,5,3,3,c)
#define FP32H_N182 (0,0,0,0,6,3,3,c)
#define FP32H_N183 (0,0,0,0,7,3,3,c)
#define FP32H_N184 (0,0,0,0,8,3,3,c)
#define FP32H_N185 (0,0,0,0,9,3,3,c)
#define FP32H_N186 (0,0,0,0,a,3,3,c)
#define FP32H_N187 (0,0,0,0,b,3,3,c)
#define FP32H_N188 (0,0,0,0,c,3,3,c)
#define FP32H_N189 (0,0,0,0,d,3,3,c)
#define FP32H_N190 (0,0,0,0,e,3,3,c)
#define FP32H_N191 (0,0,0,0,f,3,3,c)
#define FP32H_N192 (0,0,0,0,0,4,3,c)
#define FP32H_N193 (0,0,0,0,1,4,3,c)
#define FP32H_N194 (0,0,0,0,2,4,3,c)
#define FP32H_N195 (0,0,0,0,3,4,3,c)
#define FP32H_N196 (0,0,0,0,4,4,3,c)
#define FP32H_N197 (0,0,0,0,5,4,3,c)
#define FP32H_N198 (0,0,0,0,6,4,3,c)
#define FP32H_N199 (0,0,0,0,7,4,3,c)
#define FP32H_N200 (0,0,0,0,8,4,3,c)
#define FP32H_N201 (0,0,0,0,9,4,3,c)
#define FP32H_N202 (0,0,0,0,a,4,3,c)
#define FP32H_N203 (0,0,0,0,b,4,3,c)
#define FP32H_N204 (0,0,0,0,c,4,3,c)
#define FP32H_N205 (0,0,0,0,d,4,3,c)
#define FP32H_N206 (0,0,0,0,e,4,3,c)
#define FP32H_N207 (0,0,0,0,f,4,3,c)
#define FP32H_N208 (0,0,0,0,0,5,3,c)
#define FP32H_N209 (0,0,0,0,1,5,3,c)
#define FP32H_N210 (0,0,0,0,2,5,3,c)
#define FP32H_N211 (0,0,0,0,3,5,3,c)
#define FP32H_N212 (0,0,0,0,4,5,3,c)
#define FP32H_N213 (0,0,0,0,5,5,3,c)
#define FP32H_N214 (0,0,0,0,6,5,3,c)
#define FP32H_N215 (0,0,0,0,7,5,3,c)
#define FP32H_N216 (0,0,0,0,8,5,3,c)
#define FP32H_N217 (0,0,0,0,9,5,3,c)
#define FP32H_N218 (0,0,0,0,a,5,3,c)
#define FP32H_N219 (0,0,0,0,b,5,3,c)
#define FP32H_N220 (0,0,0,0,c,5,3,c)
#define FP32H_N221 (0,0,0,0,d,5,3,c)
#define FP32H_N222 (0,0,0,0,e,5,3,c)
#define FP32H_N223 (0,0,0,0,f,5,3,c)
#define FP32H_N224 (0,0,0,0,0,6,3,c)
#define FP32H_N225 (0,0,0,0,1,6,3,c)
#define FP32H_N226 (0,0,0,0,2,6,3,c)
#define FP32H_N227 (0,0,0,0,3,6,3,c)
#define FP32H_N228 (0,0,0,0,4,6,3,c)
#define FP32H_N229 (0,0,0,0,5,6,3,c)
#define FP32H_N230 (0,0,0,0,6,6,3,c)
#define FP32H_N231 (0,0,0,0,7,6,3,c)
#define FP32H_N232 (0,0,0,0,8,6,3,c)
#define FP32H_N233 (0,0,0,0,9,6,3,c)
#define FP32H_N234 (0,0,0,0,a,6,3,c)
#define FP32H_N235 (0,0,0,0,b,6,3,c)
#define FP32H_N236 (0,0,0,0,c,6,3,c)
#define FP32H_N237 (0,0,0,0,d,6,3,c)
#define FP32H_N238 (0,0,0,0,e,6,3,c)
#define FP32H_N239 (0,0,0,0,f,6,3,c)
#define FP32H_N240 (0,0,0,0,0,7,3,c)
#define FP32H_N241 (0,0,0,0,1,7,3,c)
#define FP32H_N242 (0,0,0,0,2,7,3,c)
#define FP32H_N243 (0,0,0,0,3,7,3,c)
#define FP32H_N244 (0,0,0,0,4,7,3,c)
#define FP32H_N245 (0,0,0,0,5,7,3,c)
#define FP32H_N246 (0,0,0,0,6,7,3,c)
#define FP32H_N247 (0,0,0,0,7,7,3,c)
#define FP32H_N248 (0,0,0,0,8,7,3,c)
#define FP32H_N249 (0,0,0,0,9,7,3,c)
#define FP32H_N250 (0,0,0,0,a,7,3,c)
#define FP32H_N251 (0,0,0,0,b,7,3,c)
#define FP32H_N252 (0,0,0,0,c,7,3,c)
#define FP32H_N253 (0,0,0,0,d,7,3,c)
#define FP32H_N254 (0,0,0,0,e,7,3,c)
#define FP32H_N255 (0,0,0,0,f,7,3,c)
#define FP32H_N256 (0,0,0,0,0,8,3,c)

#define FP32H_720 (0,0,0,0,4,3,4,4)
#define FP32H_5040 (0,0,0,8,d,9,5,4)

#endif