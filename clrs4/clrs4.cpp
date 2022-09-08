/**
 * @file
 */

#include "include/clrs4.h"

#include <stdio.h>

int main() {
  int sortTest[] = {8, 76, 57, 6, 54, 5, 6, 7, 8, 90, 9, 7, 6, 5, 4, 3, 4, 6};
  const int length = 18;

  printf("Test data: ");
  printIntArray(sortTest, length);

  /*printf("Insertion sort: ");
  insertionSort(sortTest, length);
  printIntArray(sortTest, length);*/

  printf("Decrease insertion sort: ");
  insertionSortDecrease(sortTest, length);
  printIntArray(sortTest, length);

  return 0;
}
