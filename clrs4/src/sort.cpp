#include "../include/sort.h"

#include "../include/util.h"

void insertionSort(int* list, int length) {
  for (int i = 1; i < length; i++) {
    int key = *(list + i);
    int j = i - 1;
    while (j >= 0 && *(list + j) > key) {
      *(list + j + 1) = *(list + j);
      j--;
    }
    *(list + j + 1) = key;
  }
}

/**
 * Î±´úÂë£º
 * for i = n - 1 downTo 1
 *	  key = A[i]
 *	  j = i + 1
 *	  while j < n + 1 And A[j] < key
 *	   	A[j - 1] = A[j]
 *		j++
 *	  A[j - 1] = key
 */
void insertionSortDecrease(int* list, int length) {
  for (int i = length - 2; i >= 0; i--) {
    int key = *(list + i);
    int j = i + 1;
    while (j < length && key < *(list + j)) {
      *(list + j - 1) = *(list + j);
      j++;
    }
    *(list + j - 1) = key;
  }
}

void selectionSort(int* list, int length) {
  for (int i = 0; i < length - 1; i++) {
    int min = i;
    for (int j = i + 1; j < length; j++) {
      if (*(list + min) > *(list + j)) {
        min = j;
      }
    }
    int t = *(list + i);
    *(list + i) = *(list + min);
    *(list + min) = t;
  }
}
