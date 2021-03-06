#include <iostream>
using namespace std;

void Show() {
  cout << "Hello!" << endl;
}

namespace MyProgram {
  void Show() {
    cout << "やあ、こんちは。" << endl;
  }

  void Run() {
    Show();
  }
}

// グローバル名前空間内にある名前と衝突した場合は、
// 現在の名前空間内の名前が優先される（ここでは Show() 関数）
int main() {
  MyProgram::Run();
}
