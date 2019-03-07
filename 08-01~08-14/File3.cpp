#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

// 文字列などではない生のデータを扱うときは read, write を使う
int main() {
  fstream file;

  file.open("binary.txt", ios::out | ios::binary);
  if(! file.is_open()) {
    return EXIT_FAILURE;
  }

  int n = 0x41424344; // 0x41, 0x42, 0x43, 0x44 (= A, B, C, D)
  file.write((const char*)&n, sizeof n); // 4 バイト分の領域を確保し n を書き込む
  file.close();
}
// バイトオーダ（エンディアン）に起因する問題として、
// 環境によって出力内容が DCBA となるか ABCD となるか違いがある。
// linux (xubuntu) 上では binary.txt の内容は DCBA となる。
