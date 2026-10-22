#include <cstdint>
#include <iostream>

// Возвращает суммарную стоимость: каждая задача j в момент start[j] уходит
// на свободное ядро с минимальной ставкой и занимает его на duration[j]
// минут, а если свободных ядер нет — отбрасывается.
int64_t TotalCost(const int64_t* rates, int n, const int64_t* start,
                  const int64_t* duration, int m) {
  // TODO
  return 0;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  int m;
  std::cin >> n >> m;
  int64_t* rates = new int64_t[n];
  for (int i = 0; i < n; ++i) {
    std::cin >> rates[i];
  }
  int64_t* start = new int64_t[m];
  int64_t* duration = new int64_t[m];
  for (int j = 0; j < m; ++j) {
    std::cin >> start[j] >> duration[j];
  }
  std::cout << TotalCost(rates, n, start, duration, m) << "\n";
  delete[] rates;
  delete[] start;
  delete[] duration;
  return 0;
}
