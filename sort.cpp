#include <iostream>
#include <random>

#include "bubble.hpp"
#include "insertion.hpp"
#include "utils.hpp"

using namespace std;

int main() {
  const size_t LENGTH = 10;
  srand(time(NULL));
  
  int A[LENGTH];
  int B1[LENGTH], B2[LENGTH];
  int I[LENGTH];

  for (size_t i = 0; i < LENGTH; i++) {
    A[i] = rand() % 1024;
    B1[i] = A[i];
    B2[i] = A[i];
    I[i] = A[i];
    
  }
  // Utils<int>::printArray(A, 10);

  
  cout << bubbleSort1(B1, 10) << ": ";
  Utils<int>::printArray(A, 10);
  cout << "<->";
  Utils<int>::printArray(B1, 10);
  cout << endl;

  cout << bubbleSort2(B2, 10) << ": ";
  Utils<int>::printArray(A, 10);
  cout << "<->";
  Utils<int>::printArray(B2, 10);
  cout << endl;

  cout << insertionSort(I, 10) << ": ";
  Utils<int>::printArray(A, 10);
  cout << "<->";
  Utils<int>::printArray(I, 10);
  cout << endl;
}
