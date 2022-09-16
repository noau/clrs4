/**
 * @file
 */

#include "include/clrs4.h"

#include <stdio.h>

int main() {
  int testData[] = {
      557, 793, 868, 673, 330, 565, 53,  83,  626, 732, 110, 746, 557, 485, 338,
      536, 821, 438, 372, 870, 604, 728, 978, 659, 787, 836, 632, 411, 966, 774,
      712, 659, 147, 691, 994, 681, 622, 965, 389, 354, 235, 622, 650, 337, 809,
      895, 202, 360, 737, 684, 628, 321, 171, 709, 84,  666, 167, 767, 761, 471,
      527, 935, 109, 761, 202, 542, 147, 718, 133, 156, 656, 562, 804, 345, 180,
      82,  133, 270, 45,  153, 891, 417, 361, 87,  595, 108, 237, 590, 939, 542,
      152, 299, 758, 681, 318, 322, 452, 154, 935, 384};
  const int length = 100;
  const int searchTarget = 153;

  printf("Test data: ");
  printIntArray(testData, length);

  /*printf("Insertion sort: ");
  insertionSort(testData, length);
  printIntArray(testData, length);*/

  /*printf("Recursive Insertion sort: ");
  insertionSortRecursive(testData, length);
  printIntArray(testData, length);*/

  /*printf("Decrease insertion sort: ");
  insertionSortDecrease(testData, length);
  printIntArray(testData, length);*/

  /*printf("Selection sort: ");
  selectionSort(testData, length);
  printIntArray(testData, length);*/

  /*printf("Merge sort: ");
  mergeSort(testData, length);
  printIntArray(testData, length);*/

  printf("Search target: %d\n", searchTarget);
  printf("Linear search: ");
  int index = linearSearch(testData, length, searchTarget);
  printf("index: %d, result: %d\n", index, testData[index]);

  return 0;
}
