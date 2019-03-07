#include <iostream>
#include <new> // nothrow を使うためのヘッダファイル
using namespace std;

int main() {
  // メモリの確保に失敗した場合はヌルポインタを返す
  int* p = new(nothrow) int;
  
  if(p != NULL) {
    *p = 0;
    cout << *p << endl;
    
    delete p;
  }
}
