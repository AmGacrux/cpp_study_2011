#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
  fstream file;

  file.open("binary.txt", ios::in | ios::binary);
  if(! file.is_open()) {
    return EXIT_FAILURE;
  }

  int n;
  file.read((char*)&n, sizeof n);
  file.close();

  // 10 進数表示であることに注意！
  // ./File3 を実行した後の cat binary.txt とは出力内容が違って見える
  cout << n << endl;
}
