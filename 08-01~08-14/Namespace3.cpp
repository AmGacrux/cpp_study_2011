#include <iostream>
using namespace std;

namespace MyProgram {
  void Show() {
    cout << "やあ、こんちは。" << endl;
  }

  // 同じ名前空間にある識別子を使う場合は、
  // 名前空間の指定はいらない
  void Run() {
    Show();
  } 
}

int main() {
  MyProgram::Run();
}
