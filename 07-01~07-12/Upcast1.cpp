#include "InputStream.h"
#include <iostream>
using namespace std;

int main() {
  InputStream stream;
  cout << "> " << flush;
  stream.Set();

  // 派生クラスである InputStream を基底クラス Stream への const 参照にしている
  // 継承木でいう上（基底クラス）への暗黙のキャスト（アップキャスト）が発生する
  const Stream& ref = stream;
  cout << ref.Get() << endl;
}
