#include <iostream>
using namespace std;

void Show() {
  cout << "Hello!" << endl;
}

namespace MyProgram {
  // Namespace4.cpp での関数定義の順序を変えた
  void Run() {
    Show();
  }

  void Show() {
    cout << "やあ、こんちは。" << endl;
  }
}

int main() {
  MyProgram::Run();
}
