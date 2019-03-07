// ※このプログラムはエラー終了する。修正版は Copy1.cpp である。

#include "IntArray.h"
#include <iostream>
using namespace std;

void Show(IntArray array) {
  for(int i = 0; i < array.Size(); ++i) {
    cout << array.Get(i) << ' ';
  }
  cout << endl;
}

int main() {
  IntArray array0to9(10); // 要素数 10 の配列を生成

  for(int i = 0; i < array0to9.Size(); ++i) {
    array0to9.Set(i, i); // i 番目の要素にカウンタと同じ数値を代入する
  }
  Show(array0to9);
}
