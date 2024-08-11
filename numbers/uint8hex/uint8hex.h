#ifndef C23META_U8H_U8H
#define C23META_U8H_U8H

#include "../hex/hex.h"
#include "bits/bits.h"
#include "cmp/cmp.h"
#include "math/math.h"
#include "print.h"
#include "convert.h"
#include "parse.h"

#define U8H_0 (0,0)
#define U8H_1 (1,0)
#define U8H_2 (2,0)
#define U8H_3 (3,0)
#define U8H_4 (4,0)
#define U8H_5 (5,0)
#define U8H_6 (6,0)
#define U8H_7 (7,0)
#define U8H_8 (8,0)
#define U8H_9 (9,0)
#define U8H_10 (a,0)
#define U8H_11 (b,0)
#define U8H_12 (c,0)
#define U8H_13 (d,0)
#define U8H_14 (e,0)
#define U8H_15 (f,0)
#define U8H_16 (0,1)
#define U8H_17 (1,1)
#define U8H_18 (2,1)
#define U8H_19 (3,1)
#define U8H_20 (4,1)
#define U8H_21 (5,1)
#define U8H_22 (6,1)
#define U8H_23 (7,1)
#define U8H_24 (8,1)
#define U8H_25 (9,1)
#define U8H_26 (a,1)
#define U8H_27 (b,1)
#define U8H_28 (c,1)
#define U8H_29 (d,1)
#define U8H_30 (e,1)
#define U8H_31 (f,1)
#define U8H_32 (0,2)
#define U8H_33 (1,2)
#define U8H_34 (2,2)
#define U8H_35 (3,2)
#define U8H_36 (4,2)
#define U8H_37 (5,2)
#define U8H_38 (6,2)
#define U8H_39 (7,2)
#define U8H_40 (8,2)
#define U8H_41 (9,2)
#define U8H_42 (a,2)
#define U8H_43 (b,2)
#define U8H_44 (c,2)
#define U8H_45 (d,2)
#define U8H_46 (e,2)
#define U8H_47 (f,2)
#define U8H_48 (0,3)
#define U8H_49 (1,3)
#define U8H_50 (2,3)
#define U8H_51 (3,3)
#define U8H_52 (4,3)
#define U8H_53 (5,3)
#define U8H_54 (6,3)
#define U8H_55 (7,3)
#define U8H_56 (8,3)
#define U8H_57 (9,3)
#define U8H_58 (a,3)
#define U8H_59 (b,3)
#define U8H_60 (c,3)
#define U8H_61 (d,3)
#define U8H_62 (e,3)
#define U8H_63 (f,3)
#define U8H_64 (0,4)
#define U8H_65 (1,4)
#define U8H_66 (2,4)
#define U8H_67 (3,4)
#define U8H_68 (4,4)
#define U8H_69 (5,4)
#define U8H_70 (6,4)
#define U8H_71 (7,4)
#define U8H_72 (8,4)
#define U8H_73 (9,4)
#define U8H_74 (a,4)
#define U8H_75 (b,4)
#define U8H_76 (c,4)
#define U8H_77 (d,4)
#define U8H_78 (e,4)
#define U8H_79 (f,4)
#define U8H_80 (0,5)
#define U8H_81 (1,5)
#define U8H_82 (2,5)
#define U8H_83 (3,5)
#define U8H_84 (4,5)
#define U8H_85 (5,5)
#define U8H_86 (6,5)
#define U8H_87 (7,5)
#define U8H_88 (8,5)
#define U8H_89 (9,5)
#define U8H_90 (a,5)
#define U8H_91 (b,5)
#define U8H_92 (c,5)
#define U8H_93 (d,5)
#define U8H_94 (e,5)
#define U8H_95 (f,5)
#define U8H_96 (0,6)
#define U8H_97 (1,6)
#define U8H_98 (2,6)
#define U8H_99 (3,6)
#define U8H_100 (4,6)
#define U8H_101 (5,6)
#define U8H_102 (6,6)
#define U8H_103 (7,6)
#define U8H_104 (8,6)
#define U8H_105 (9,6)
#define U8H_106 (a,6)
#define U8H_107 (b,6)
#define U8H_108 (c,6)
#define U8H_109 (d,6)
#define U8H_110 (e,6)
#define U8H_111 (f,6)
#define U8H_112 (0,7)
#define U8H_113 (1,7)
#define U8H_114 (2,7)
#define U8H_115 (3,7)
#define U8H_116 (4,7)
#define U8H_117 (5,7)
#define U8H_118 (6,7)
#define U8H_119 (7,7)
#define U8H_120 (8,7)
#define U8H_121 (9,7)
#define U8H_122 (a,7)
#define U8H_123 (b,7)
#define U8H_124 (c,7)
#define U8H_125 (d,7)
#define U8H_126 (e,7)
#define U8H_127 (f,7)
#define U8H_128 (0,8)
#define U8H_129 (1,8)
#define U8H_130 (2,8)
#define U8H_131 (3,8)
#define U8H_132 (4,8)
#define U8H_133 (5,8)
#define U8H_134 (6,8)
#define U8H_135 (7,8)
#define U8H_136 (8,8)
#define U8H_137 (9,8)
#define U8H_138 (a,8)
#define U8H_139 (b,8)
#define U8H_140 (c,8)
#define U8H_141 (d,8)
#define U8H_142 (e,8)
#define U8H_143 (f,8)
#define U8H_144 (0,9)
#define U8H_145 (1,9)
#define U8H_146 (2,9)
#define U8H_147 (3,9)
#define U8H_148 (4,9)
#define U8H_149 (5,9)
#define U8H_150 (6,9)
#define U8H_151 (7,9)
#define U8H_152 (8,9)
#define U8H_153 (9,9)
#define U8H_154 (a,9)
#define U8H_155 (b,9)
#define U8H_156 (c,9)
#define U8H_157 (d,9)
#define U8H_158 (e,9)
#define U8H_159 (f,9)
#define U8H_160 (0,a)
#define U8H_161 (1,a)
#define U8H_162 (2,a)
#define U8H_163 (3,a)
#define U8H_164 (4,a)
#define U8H_165 (5,a)
#define U8H_166 (6,a)
#define U8H_167 (7,a)
#define U8H_168 (8,a)
#define U8H_169 (9,a)
#define U8H_170 (a,a)
#define U8H_171 (b,a)
#define U8H_172 (c,a)
#define U8H_173 (d,a)
#define U8H_174 (e,a)
#define U8H_175 (f,a)
#define U8H_176 (0,b)
#define U8H_177 (1,b)
#define U8H_178 (2,b)
#define U8H_179 (3,b)
#define U8H_180 (4,b)
#define U8H_181 (5,b)
#define U8H_182 (6,b)
#define U8H_183 (7,b)
#define U8H_184 (8,b)
#define U8H_185 (9,b)
#define U8H_186 (a,b)
#define U8H_187 (b,b)
#define U8H_188 (c,b)
#define U8H_189 (d,b)
#define U8H_190 (e,b)
#define U8H_191 (f,b)
#define U8H_192 (0,c)
#define U8H_193 (1,c)
#define U8H_194 (2,c)
#define U8H_195 (3,c)
#define U8H_196 (4,c)
#define U8H_197 (5,c)
#define U8H_198 (6,c)
#define U8H_199 (7,c)
#define U8H_200 (8,c)
#define U8H_201 (9,c)
#define U8H_202 (a,c)
#define U8H_203 (b,c)
#define U8H_204 (c,c)
#define U8H_205 (d,c)
#define U8H_206 (e,c)
#define U8H_207 (f,c)
#define U8H_208 (0,d)
#define U8H_209 (1,d)
#define U8H_210 (2,d)
#define U8H_211 (3,d)
#define U8H_212 (4,d)
#define U8H_213 (5,d)
#define U8H_214 (6,d)
#define U8H_215 (7,d)
#define U8H_216 (8,d)
#define U8H_217 (9,d)
#define U8H_218 (a,d)
#define U8H_219 (b,d)
#define U8H_220 (c,d)
#define U8H_221 (d,d)
#define U8H_222 (e,d)
#define U8H_223 (f,d)
#define U8H_224 (0,e)
#define U8H_225 (1,e)
#define U8H_226 (2,e)
#define U8H_227 (3,e)
#define U8H_228 (4,e)
#define U8H_229 (5,e)
#define U8H_230 (6,e)
#define U8H_231 (7,e)
#define U8H_232 (8,e)
#define U8H_233 (9,e)
#define U8H_234 (a,e)
#define U8H_235 (b,e)
#define U8H_236 (c,e)
#define U8H_237 (d,e)
#define U8H_238 (e,e)
#define U8H_239 (f,e)
#define U8H_240 (0,f)
#define U8H_241 (1,f)
#define U8H_242 (2,f)
#define U8H_243 (3,f)
#define U8H_244 (4,f)
#define U8H_245 (5,f)
#define U8H_246 (6,f)
#define U8H_247 (7,f)
#define U8H_248 (8,f)
#define U8H_249 (9,f)
#define U8H_250 (a,f)
#define U8H_251 (b,f)
#define U8H_252 (c,f)
#define U8H_253 (d,f)
#define U8H_254 (e,f)
#define U8H_255 (f,f)

#define U8H_MAXV (f,f)
#define U8H_MINV (0,0)

#endif