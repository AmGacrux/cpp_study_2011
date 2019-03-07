#include <iostream>
using namespace std;

int main() {
  typedef int* IntPtr;
  
  int n = 0;

  /*
  const int* p = &n; // 参照先　*p が const に
  int* const q = &n; // ポインタ自身 *q が const に
  */

  // 上 2 つとは違いどちらも int* const n に等しくなる。 
  const IntPtr p = &n;
  IntPtr const q = &n;

  // 参照先を const としたシノニムを作るには
  // typedef const int* IntCPtr; とすると const int* nに等しくなる

  p = &n;
  q = &n;
  *p = 1;
  *q = 2;
}
