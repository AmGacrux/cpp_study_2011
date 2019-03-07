#include <iostream>
using namespace std;

// 条件演算子(Conditional Operator) は 条件式 ? 数値1 : 数値2 で扱う
// 判定した条件式が真の場合 数値１ そうでない場合 数値2 を返す。
int main() {
  int a, b;
  
  cout << "2 つの値を入力してください > " << flush;
  cin >> a >> b;

  cout << "大きいほうの値は " << (a > b ? a : b) << " です。" << endl;
}
