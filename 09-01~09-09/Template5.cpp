#include <iostream>
using namespace std;
// ASCII コードでの 42 は * となる

// テンプレート引数でのデフォルト引数の利用
template <typename TYPE = char>
class FortyTwo 
{
public:
  TYPE Get() const;
};

template <typename TYPE>
TYPE FortyTwo<TYPE>::Get() const 
// クラステンプレートの利用には引数の指定が必要！
{
  return 42;
}

int main() {
  // テンプレート引数を省略すると自動的に char となる
  FortyTwo<> ch;
  FortyTwo<int> i;
  
  cout << ch.Get() << endl;
  cout << i.Get() << endl;
}
