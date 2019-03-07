#include <iostream>
using namespace std;

// デフォルト引数の利用
// 引数の位置が関数を呼ぶたびに変わる（静的でない）ことを確認する
// ※変わらない場合もありうる
void Func(int a = 0) { cout << (size_t)&a << endl; }
void Func2()         { Func(); }

int main() {
  Func();
  Func2();
  Func();
}
