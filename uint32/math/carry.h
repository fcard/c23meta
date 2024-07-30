#ifndef C23META_U32_CARRY
#define C23META_U32_CARRY

#define U32_CARRY_FLAG ST_EMPTY
#define U32_CARRY_FLAG_ST1 ST_EMPTY
#define U32_CARRY_FLAG_ST2 ST_EMPTY

#pragma push_macro("U32_CARRY_FLAG")
#pragma push_macro("U32_CARRY_FLAG_ST1")
#pragma push_macro("U32_CARRY_FLAG_ST2")

#define U32_CARRY_FLAG 0
#define U32_CARRY_FLAG_ST1 0
#define U32_CARRY_FLAG_ST2 0

#pragma push_macro("U32_CARRY_FLAG")
#pragma push_macro("U32_CARRY_FLAG_ST1")
#pragma push_macro("U32_CARRY_FLAG_ST2")

#define U32_CARRY_FLAG 1
#define U32_CARRY_FLAG_ST1 1
#define U32_CARRY_FLAG_ST2 1

#pragma push_macro("U32_CARRY_FLAG", "X")
#pragma push_macro("U32_CARRY_FLAG_ST1")
#pragma push_macro("U32_CARRY_FLAG_ST2")

#define U32_CARRY_FLAG 0
#define U32_CARRY_FLAG_ST1 0
#define U32_CARRY_FLAG_ST2 0

#define U32_SET_CARRY_0 
#endif