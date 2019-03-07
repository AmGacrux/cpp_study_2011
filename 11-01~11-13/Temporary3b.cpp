#include <iostream>
using namespace std;

int Abs(const int& a) {
  return a < 0 ? -a : a;
}

int main() {
  cout << Abs(-10) << endl; // 即値を const 参照へ渡して初期化している
  // このとき一旦テンポラリオブジェクトが作られ a がその参照となる
}
