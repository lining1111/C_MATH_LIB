#include "mymath.h"

/**
 * [get_bit_and 获取两个数的位是否相同]
 * @param  num1 [第一个数]
 * @param  num2 [第二个数]
 * @param  bit  [第几位]
 * @return      [1：相同，0：不同]
 */
bool get_bit_and(uint32_t num1, uint32_t num2, uint8_t bit) {
  return ((num1 & (1 << bit)) == (num2 & (1 << bit))) ? true : false;
}
