#include <iostream>
using namespace std;

// 内部でしか使えない変数
static int a = 9;

// これは外部でも使える
void Func1() {
  cout << "a(2) = " << a << endl;
}

// 外部の関数を利用するという宣言
void Func2();

int main() {
  Func1();
  Func2();
  a = 5;
  Func1();
  Func2();
}
