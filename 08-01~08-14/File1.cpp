#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
  fstream file;
  
  // ios::out は書き出しフラグ
  file.open("test.txt", ios::out);
  if(! file.is_open()) {
    return EXIT_FAILURE;
  }

  file << "ファイルに書き込んじゃえ。" << endl;
  file.close();
}
