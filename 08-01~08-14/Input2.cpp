#include <iostream>
#include <cstdlib>
using namespace std;

bool SkipOnError(istream& istr) {
  if(istr.fail()) {
    if(istr.eof()) { // Widnows ならば Ctrl+Z, Linux でなら Ctrl+D で入力を終了させ eof() が真となる
      exit(EXIT_FAILURE);
    }

    // 1 文字読み飛ばします
    char ch;
    istr.clear();
    istr >> ch;
    return true;
  } else {
    return false;
  }
}

int main() {
  int n;

  do {
    cin >> n;
  } while (SkipOnError(cin)); // int 型である n に数値以外を入力すると istr.fail() が真を返す（入力の失敗）

  cout << "入力された値は " << n << " です。" << endl;
}
