#include <iostream>

// Просеивает a[i] вниз в пирамиде из первых n элементов массива.
void SiftDown(int* a, int n, int i) {
  // TODO
}

// Сортирует a[0..n-1] по неубыванию пирамидальной сортировкой.
// Готовыми функциями сортировки и кучами из STL пользоваться нельзя.
void HeapSort(int* a, int n) {
  // TODO
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  std::cin >> n;
  int* a = new int[n];
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  HeapSort(a, n);
  for (int i = 0; i < n; ++i) {
    std::cout << a[i] << " ";
  }
  std::cout << "\n";
  delete[] a;
  return 0;
}
