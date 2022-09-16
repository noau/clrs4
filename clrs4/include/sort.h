#ifndef _CLRS4_SORT_
#define _CLRS4_SORT_

/**
 * �㷨���ۣ����İ棩-�ڶ���
 * ��������
 */
void insertionSort(int* list, int length);

/**
 * �㷨���ۣ����İ棩-�ڶ���
 * ��ϰ�� 2.1-3-�����������
 */
void insertionSortDecrease(int* list, int length);

void insertionSortRecursive(int* list, int length);

/**
 * �㷨���ۣ����İ棩-�ڶ���
 * ��ϰ�� 2.2-2-ѡ������
 */
void selectionSort(int* list, int length);

/**
 * �㷨���ۣ����İ棩-�ڶ���
 * �鲢����
 */
void mergeSort(int* list, int length);
/**
 * �㷨���ۣ����İ棩-�ڶ���
 * �鲢����
 * ���η�Ӧ��
 */
void merge(int* list, int mid, int length);
void exchange(int* a, int* b);

#endif  // !_CLRS4_SORT_
