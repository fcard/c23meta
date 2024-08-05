#ifndef C23META_FP32_CONVERT
#define C23META_FP32_CONVERT
#include <stdint.h>

union _convert_float {
    uint64_t u32;
    float    f32;
};

float _convert_float(uint64_t x) {
  union _convert_float c;
  c.u32 = x;
  return c.f32;
}

#define FP32_CONVERT(X) _convert_float(U32_CONVERT(X))

#endif