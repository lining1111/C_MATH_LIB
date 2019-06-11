#include "mymath.h"
#include <stdio.h>
#include <stdlib.h>
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

bool get_array_indexof(uint8_t *org_array, uint16_t org_array_size,
                       uint8_t *check_array, uint16_t check_array_size,
                       uint16_t *site) {
  int cnt = 0;

  //判断数组大小，check_array_size必须小于org_array_size
  if (check_array_size > org_array_size) {
    return false;
  }
  //开始循环对比，最外循环次数是两个数组大小之差
  for (int i = 0; i <= (org_array_size - check_array_size); i++) {
    for (int j = 0; j < check_array_size; j++) {
      //如果一致则继续对比，不一致跳出
      if (org_array[i + j] == check_array[j]) {
        cnt++;
        continue;
      }
    }
    //如果完全一致，则返回
    if (cnt == check_array_size) {
      //都一致
      *site = i;
      return true;
    } else { //不是完全一致，清零计数，继续对比
      cnt = 0;
    }
  }
  return false;
}

void quickSort(int *arr, int startPos, int endPos) {
  int i, j;
  int key;
  key = arr[startPos];
  i = startPos;
  j = endPos;
  while (i < j) {
    while (arr[j] >= key && i < j)
      --j; //————1 从后往去前扫，直到找到一个a[j]<key或遍历完
    arr[i] = arr[j];
    while (arr[i] <= key && i < j)
      ++i; //————2 从后往去前扫，直到找到一个a[i]>key或遍历完
    arr[j] = arr[i];
  }
  arr[i] = key;
  if (i - 1 > startPos)
    quickSort(
        arr, startPos,
        i - 1); //————1
                //如果key前还有两个及以上的数，排key前的数（有一个的话自然就不用排了）
  if (endPos > i + 1)
    quickSort(arr, i + 1,
              endPos); //————2 如果key后还有两个及以上的数，排key后的数
}
