#include <iostream>
// using 指令
using namespace std;

// using 宣言
// using std::cout;
// using std::endl;

namespace Name1 {
  void Func() {
    cout << "Name1::Func" << endl;
  }
  void Hoge() {
    cout << "Name1::Hoge" << endl;
  } 
}

namespace Name2 {
  void Func() {
    cout << "Name2::Func" << endl;
  }
}

// 上で作成した名前空間を指定する
using namespace Name1;

int main() {
  Func();
  Name2::Func();
  Hoge();
}
