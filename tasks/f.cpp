#include <cstdint>
#include <iostream>
#include <string>

// Узел фибоначчиевой кучи.
struct Node {
  int64_t key;
  int degree = 0;
  bool marked = false;
  Node* parent = nullptr;
  Node* child = nullptr;
  Node* left = this;  // Соседи по циклическому списку.
  Node* right = this;
};

struct FibHeap {
  Node* min = nullptr;
  int size = 0;
};

void Insert(FibHeap* heap, int64_t x) {
  // TODO
}

// Извлекает минимум в *result. Возвращает false, если куча пуста.
bool ExtractMin(FibHeap* heap, int64_t* result) {
  // TODO
  return false;
}

// Возвращает новую кучу из элементов first и second.
FibHeap* Merge(FibHeap* first, FibHeap* second) {
  // TODO
  return new FibHeap;
}

// Заменяет значение x на y <= x.
void DecreaseKey(FibHeap* heap, int64_t x, int64_t y) {
  // TODO
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  constexpr int kMaxHeaps = 1000000;
  FibHeap** heaps = new FibHeap*[kMaxHeaps];
  int count = 0;
  std::string command;
  while (std::cin >> command) {
    if (command == "create") {
      heaps[count++] = new FibHeap;
    } else if (command == "insert") {
      int k;
      int64_t x;
      std::cin >> k >> x;
      Insert(heaps[k], x);
    } else if (command == "extract-min") {
      int k;
      std::cin >> k;
      int64_t result;
      if (ExtractMin(heaps[k], &result)) {
        std::cout << result << "\n";
      } else {
        std::cout << "*\n";
      }
    } else if (command == "merge") {
      int k;
      int m;
      std::cin >> k >> m;
      heaps[count++] = Merge(heaps[k], heaps[m]);
    } else if (command == "decrease-key") {
      int k;
      int64_t x;
      int64_t y;
      std::cin >> k >> x >> y;
      DecreaseKey(heaps[k], x, y);
    }
  }
  delete[] heaps;
  return 0;
}
