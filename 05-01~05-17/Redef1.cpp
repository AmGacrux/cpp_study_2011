#include "Redef1.h" // 1 回目はマクロは未定義なので内容をコンパイルする
#include "Redef1.h" // #ifndef 文によりで 2 回目の内容は無視される
#include <iostream>
using namespace std;

int main() {
  cout << N << endl;
}
