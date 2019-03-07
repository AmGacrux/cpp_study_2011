#include <iostream>
using namespace std;

void CalcMultiples(int* array, int size, int n) {
  for(int i = 0; i < size; ++i) {
    array[i] = n * (i + 1);
  }
}

void ShowArray(const int* array, int size) {
  for(int i = 0; i < size; ++i) {
    cout << array[i] << ' ';
  }
  cout << endl;
}

int main() {
  int* array;
  int  size;
  
  cout << "どこまで計算しますか？ > " << flush;
  cin >> size;

  // 配列のメモリ確保は配列変数の書き方と同じように
  array = new int[size];
  
  // 倍数 (=n) は 3 としてみる
  CalcMultiples(array, size, 3);
  ShowArray(array, size);

  // 配列のメモリ解放は [] が必要！
  delete[] array;
}
