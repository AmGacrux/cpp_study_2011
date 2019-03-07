#include <iostream>
using namespace std;
// 同じ名前の変数が何個もあった場合は最も内側のブロックにある変数が使われる
int a = 1;

int main() {
  cout << a << " : " << (size_t)&a << endl;
  
  int a = 2;
  cout << a << " : " << (size_t)&a << endl;
  {
    int a = 3;
    cout << a << " : " << (size_t)&a << endl;
  }
  cout << a << " : " << (size_t)&a << endl; 

  // :: （スコープ解決演算子）の利用例
  // これで a はグローバル変数を指すようになる
  // C++ ではこの方法でグローバル変数ならどのスコープからでも参照できる
  cout << endl << ::a << " : " << (size_t)&::a << endl; 
}
