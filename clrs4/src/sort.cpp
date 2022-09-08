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
