#include <iostream>

constexpr int kBlocks = 30000;

// Состояние памяти: какие блоки заняты и когда освобождаются.
struct MemoryManager {
  // TODO
};

void Init(MemoryManager* memory) {
  // TODO
}

void Destroy(MemoryManager* memory) {
  // TODO
}

// Выделяет свободный блок с минимальным номером в момент time.
int Allocate(MemoryManager* memory, int time) {
  // TODO
  return 0;
}

// Обращение к блоку в момент time: true, если блок занят (тогда его время
// освобождения продлевается), false, если он свободен.
bool Access(MemoryManager* memory, int time, int block) {
  // TODO
  return false;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  MemoryManager memory;
  Init(&memory);
  int time;
  char type;
  while (std::cin >> time >> type) {
    if (type == '+') {
      std::cout << Allocate(&memory, time) << "\n";
    } else {
      int block;
      std::cin >> block;
      std::cout << (Access(&memory, time, block) ? '+' : '-') << "\n";
    }
  }
  Destroy(&memory);
  return 0;
}
