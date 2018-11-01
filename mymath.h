#ifndef MYMATH_H
#define MYMATH_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define setbit(x, y) x |= (1 << y)
#define clrbit(x, y) x &= ~(1 << y)
#define reversetbit(x, y) x ^= (1 << y)
#define getbit(x, y) ((x) >> (y)&1)

bool get_bit_and(uint32_t num1, uint32_t num2, uint8_t bit);

#endif
