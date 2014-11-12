#include <iostream>
#include <random>

#include "bubble.hpp"
#include "utils.hpp"

using namespace std;

int main() {
  const size_t LENGTH = 10;
  srand(time(NULL));
  
  int A[LENGTH], B[LENGTH];
  for (size_t i = 0; i < LENGTH; i++) {
    A[i] = rand() % 1024;
    B[i] = A[i];
  }
  Utils<int>::printArray(A, 10);
  cout << bubbleSort1(A, 10) << ": ";
  Utils<int>::printArray(A, 10);

  cout << bubbleSort2(B, 10) << ": ";
  Utils<int>::printArray(A, 10);
}
