#include <iostream>
#include <vector>
using namespace std;

// 普通の配列を扱う関数も使える
void Show(const int* array, int size) {
  for(int i = 0; i < size; ++i) {
    cout << array[i] << ' ';
  }
  cout << endl;
}

int main() {
  vector<int> v(5);

  for(int i = 0, size = v.size(); i < size; ++i) {
    v[i] = i * i;
  }

  Show(&v[0], v.size());
}
