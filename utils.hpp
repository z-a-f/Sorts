#ifndef UTILS_HPP
#define UTILS_HPP


template <typename T>
class Utils {
  
  // No constructor
private:
  Utils(){};

 public:
  static void swap(T* a, T* b);
  static void printArray(T ar[], size_t len);

};


template <typename T>
void Utils<T>::swap(T* a, T* b) {
  T temp = *a;
  *a = *b;
  *b = temp;
}


template <typename T>
void Utils<T>::printArray(T ar[], size_t len) {
  std::cout << "[ ";
  for (size_t i = 0; i < len; i++) {
    std::cout << ar[i] << ' ';
  }
  std::cout << "]\n";
}

#endif
