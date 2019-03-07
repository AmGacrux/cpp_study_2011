#include "InputStream.h"
#include "ArrayStream.h"
#include <iostream>
using namespace std;

// 基底クラスへのアップキャストを利用することで表示関数がこれ一つで済む
void Show(const Stream& stream) {
  cout << stream.Get() << endl;
}

int main() {
  InputStream istream;

  cout << "> " << flush;
  istream.Set();
  Show(istream);

  // const で内容や大きさが変化しないことが決まっているので、
  // static で静的配列としてヒープ領域に確保した。
  // これでインスタンス化していなくても利用できるようになる
  static const double ARRAY[] = { 3, -1 };
  ArrayStream astream(ARRAY);
  
  astream.Set();
  Show(astream);
}
