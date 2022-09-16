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
 * 伪代码：
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

/**
 * 伪代码：
 * for i = 1 to n - 1
 *  min = i
 *  for j = i + 1 to n
 *      if min > A[j]
 *          min = j
 *  t = A[i]
 *  A[i] = A[min]
 *  A[min] = t
 */
void selectionSort(int* list, int length) {
  for (int i = 0; i < length - 1; i++) {
    int min = i;
    for (int j = i + 1; j < length; j++) {
      if (*(list + min) > *(list + j)) {
        min = j;
      }
    }
    exchange(list + i, list + min);
  }
}

void mergeSort(int* list, int length) {
  if (length > 1) {
    int mid = length / 2;
    mergeSort(list, mid);
    mergeSort(list + mid, length - mid);
    merge(list, mid, length);
  }
}

/**
 * 流程：
 *  复制左右已排序数组
 *  比较左右列表最小值，写入原数组
 *  复制剩余元素
 * 伪代码：
 *
 */
void merge(int* list, int mid, int length) {
  int numLeft = mid, numRight = length - mid;
  int *left = new int[numLeft], *right = new int[numRight];
  for (int i = 0; i < numLeft; i++) {
    *(left + i) = *(list + i);
  }
  for (int i = 0; i < numRight; i++) {
    *(right + i) = *(list + numLeft + i);
  }
  int i = 0, j = 0, k = 0;
  while (i < numLeft && j < numRight) {
    if (*(left + i) < *(right + j)) {
      *(list + k) = *(left + i);
      i++;
    } else {
      *(list + k) = *(right + j);
      j++;
    }
    k++;
  }
  while (i < numLeft) {
    *(list + k) = *(left + i);
    i++;
    k++;
  }
  while (j < numRight) {
    *(list + k) = *(right + j);
    j++;
    k++;
  }
}

void exchange(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void insertionSortRecursive(int* list, int length) {
  if (length <= 1) {
    return;
  }
  insertionSortRecursive(list, length - 1);
  int key = *(list + length - 1);
  int i = length - 2;
  while (*(list + i) > key) {
    *(list + i + 1) = *(list + i);
    i--;
  }
  *(list + i + 1) = key;
}
