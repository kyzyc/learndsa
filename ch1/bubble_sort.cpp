#include <iostream>
#include <vector>

void bubble_sort(std::vector<int>& v) {
  int n = v.size();

  for (bool sorted = false; (sorted = (!sorted)); --n) {
    for (int i = 1; i < n; ++i) {
      if (v[i - 1] > v[i]) {
        std::swap(v[i], v[i - 1]);
        sorted = false;
      }
    }
  }
}

int main (int argc, char *argv[]) {
  std::vector<int> v;
  int num;

  while(std::cin >> num) {
    v.push_back(num);
  }

  bubble_sort(v);

  for (const auto& i : v) {
    std::cout << i << " ";
  }

  std::cout << '\n';

  return 0;
}
