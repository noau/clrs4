#ifndef _CLRS4_SORT_
#define _CLRS4_SORT_

/**
 * 算法导论（第四版）-第二章
 * 插入排序
 */
void insertionSort(int* list, int length);

/**
 * 算法导论（第四版）-第二章
 * 练习题 2.1-3-逆序插入排序
 */
void insertionSortDecrease(int* list, int length);

void insertionSortRecursive(int* list, int length);

/**
 * 算法导论（第四版）-第二章
 * 练习题 2.2-2-选择排序
 */
void selectionSort(int* list, int length);

/**
 * 算法导论（第四版）-第二章
 * 归并排序
 */
void mergeSort(int* list, int length);
/**
 * 算法导论（第四版）-第二章
 * 归并排序
 * 分治法应用
 */
void merge(int* list, int mid, int length);
void exchange(int* a, int* b);

#endif  // !_CLRS4_SORT_
