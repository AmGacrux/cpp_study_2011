#include <iostream>
using namespace std;

// グローバル名前空間の利用
void Foo();

// ネストされた名前空間の利用
namespace Name_A {
  namespace Name_a {
    void Foo() {
      cout << "Name_A::name_a::Foo" << endl;
    }
  }
}

namespace Name_B {
  void Foo() {
    cout << "Name_B::Foo" << endl;
  }
  void Bar() {
    cout << "Name_B::Bar" << endl;
  }
}

void Foo() {
  cout << "::Foo" << endl;
}

void Bar() {
  cout << "::Bar" << endl;
}

int main() {
  Foo(); ::Foo(); // これらは同じこと
  
  // これはコンパイルエラー（上と区別できなくなる）
  // using namespace Name_A_a;
  // Foo();

  // 名前空間に別名を与える
  namespace Name_A_a = Name_A::Name_a;
  Name_A_a::Foo(); Name_A::Name_a::Foo(); // これらは同じこと

  using Name_B::Bar; // using 宣言で Bar だけで Name_B::Bar を呼ぶ
  Bar();
  // これだとエラー
  // using namespace Name_B;
  // Bar();
}
