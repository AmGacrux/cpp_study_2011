// ※ 後の7 章 6 節において、Stream::SetBase を純粋仮想関数としたため
//　  Stream のオブジェクトは作れないのでコンパイルエラーとなる。
//    純粋仮想関数を持つクラスのオブジェクトは作ることができない。
//    また、そのようなクラスを抽象クラスという。

#include "InputStream.h"
#include <iostream>
using namespace std;

int main() {
  Stream stream;

  stream.Set();
  cout << stream.Get() << endl;
  
  InputStream istream;

  cout << "> " << flush;
  istream.Set();
  cout << istream.Get() << endl;
}
