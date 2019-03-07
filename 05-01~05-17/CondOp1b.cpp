#include <iostream>
using namespace std;

// 条件演算子(Conditional Operator) は 条件式 ? 数値1 : 数値2 で扱う
int main() {
  int a, b;
  
  cout << "2 つの値を入力してください > " << flush;
  cin >> a >> b;

  if(a > b) {
    cout << "大きいほうの値は " << a << " です。" << endl; 
  } else {
    cout << "大きいほうの値は " << b << " です。" << endl; 
  }
}
