#include "../include/search.h"

int linearSearch(int* list, int listLength, int target) {
  int i = 0;

  while (i < listLength && *(list + i) != target) {
    i++;
  }
  
  return i;
}