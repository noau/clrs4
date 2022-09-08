#include "../include/util.h"
#include <stdio.h>
#include <memory.h>

void printIntArray(int array[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}