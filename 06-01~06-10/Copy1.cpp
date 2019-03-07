#include "IntArray.h"
#include <iostream>
using namespace std;

void Viss(int num) {
  cout << "Viss : No." << num << endl;
}

void Show(const IntArray array) {
  Viss(2);

  for(int i = 0; i < array.Size(); ++i) {
    cout << array.Get(i) << ' ';
  }
  cout << endl; 

  Viss(3);
}

int main() {
  IntArray array0to9(10); // 要素数 10 の配列を生成

  for(int i = 0; i < array0to9.Size(); ++i) {
    array0to9.Set(i, i); // i 番目の要素にカウンタと同じ数値を代入する
  }

  Viss(1);
  // プログラムを実行すると次の行でコピーコンストラクタが呼ばれる
  Show(array0to9);
  Viss(4);
}
