#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// メモリの解放をし忘れることを防ぐために
// 意図しない例外に備える例
void Error() {
  int* p = NULL;

  try {
    p = new int[10];
    throw "エラー発生！";
    delete[] p;
  } catch(...) {
    cerr << "メモリを解放します" << endl;
    delete[] p;
    throw; // catch(...) で受け取った同じ例外の再送出
  }
}

int main() {
  try {
    Error();
  } catch(const char* error) {
    cerr << error << endl;
  }
}
