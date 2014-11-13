#ifndef INSERTION_HPP
#define INSERTION_HPP

#include "utils.hpp"

template <typename T>
size_t insertionSort(T ar[], size_t len) {
  size_t comparisons = 1;
  for (size_t i = 1; i < len; i++) {
    size_t j = i;
    
    while (j > 0 && comparisons++ && ar[j-1] > ar[j]) {
      
      Utils<T>::swap(&(ar[j]), &(ar[j-1]));
      j--;
    }
  }
  return comparisons - 1;
}

#endif
