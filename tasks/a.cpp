#include <cstdint>
#include <iostream>

// Возвращает true, если a[1..n] — неубывающая пирамида: каждый элемент
// не больше своих детей a[2i] и a[2i + 1]. Нумерация с 1, a[0] не занят.
bool IsHeap(const int64_t* a, int n) {
  // TODO
  return false;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  std::cin >> n;
  int64_t* a = new int64_t[n + 1];
  for (int i = 1; i <= n; ++i) {
    std::cin >> a[i];
  }
  std::cout << (IsHeap(a, n) ? "YES" : "NO") << "\n";
  delete[] a;
  return 0;
}
