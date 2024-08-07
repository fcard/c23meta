#ifndef C23META_FP32H_CONVERT
#define C23META_FP32H_CONVERT
#include <stdint.h>

union _convert_floath {
    uint64_t u32;
    float    f32;
};

float _convert_floath(uint64_t x) {
  union _convert_floath c;
  c.u32 = x;
  return c.f32;
}

#define FP32H_CONVERT(X) _convert_floath(U32H_CONVERT(X))

#endif