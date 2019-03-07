#include <iostream>
using namespace std;

// 内部でしか使えない関数と変数
static int a = 2;

static void Func1() {
  cout << "a(1) = " << a << endl;
}

// これは外部でも使える
void Func2() {
  Func1();
}
