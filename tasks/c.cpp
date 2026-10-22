#include <cstdint>
#include <iostream>
#include <string>

// Очередь, из которой можно извлекать и минимум, и максимум.
// Устройство — на ваше усмотрение: память под capacity элементов.
struct Dispatcher {
  int capacity;
  // TODO
};

void Init(Dispatcher* dispatcher, int capacity) {
  dispatcher->capacity = capacity;
  // TODO
}

void Destroy(Dispatcher* dispatcher) {
  // TODO
}

void Insert(Dispatcher* dispatcher, int64_t x) {
  // TODO
}

// Извлекает и возвращает минимальный элемент. Очередь не пуста.
int64_t ExtractMin(Dispatcher* dispatcher) {
  // TODO
  return 0;
}

// Извлекает и возвращает максимальный элемент. Очередь не пуста.
int64_t ExtractMax(Dispatcher* dispatcher) {
  // TODO
  return 0;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int q;
  std::cin >> q;
  Dispatcher dispatcher;
  Init(&dispatcher, q);
  std::string command;
  for (int i = 0; i < q; ++i) {
    std::cin >> command;
    if (command == "GetMin") {
      std::cout << ExtractMin(&dispatcher) << "\n";
    } else if (command == "GetMax") {
      std::cout << ExtractMax(&dispatcher) << "\n";
    } else {
      // Команда вида Insert(x): число между скобками.
      Insert(&dispatcher, std::stoll(command.substr(7)));
    }
  }
  Destroy(&dispatcher);
  return 0;
}
