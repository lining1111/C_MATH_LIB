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
bool get_array_indexof(uint8_t *org_array, uint16_t org_array_size,
                       uint8_t *check_array, uint16_t check_array_size,
                       uint16_t *site);
void quickSort(int *arr, int startPos, int endPos);

#endif
