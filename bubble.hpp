#ifndef BUBBLE_HPP
#define BUBBLE_HPP

#include "utils.hpp"

template <typename T>
size_t bubbleSort1(T ar[], size_t len) {
  bool swapped;
  size_t comparisons = 0;
  do {
    swapped = false;
    for (size_t i = 1; i < len; i++) {
      comparisons++;
      if (ar[i-1] > ar[i]) {
	Utils<T>::swap(&(ar[i-1]), &(ar[i]));
	swapped = true;
      }
    }
  } while (swapped);
  return comparisons;
}

template <typename T>
size_t bubbleSort2(T ar[], size_t len) {
  bool swapped;
  size_t comparisons = 0;
  do {
    swapped = false;
    for (size_t i = 1; i < len; i++) {
      comparisons++;
      if (ar[i-1] > ar[i]) {
	Utils<T>::swap(&(ar[i-1]), &(ar[i]));
	swapped = true;
      }
    }
    len--;
  } while (swapped);
  return comparisons;
}

#endif
