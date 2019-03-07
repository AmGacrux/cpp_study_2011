#include <iostream>
using namespace std;

class Count {
public:
  Count();
  virtual ~Count();
};

static int m_count;

Count::Count() {
  ++m_count;
}

Count::~Count() {
  --m_count;
}

// 静的変数はプログラムの初めに初期化され、
// Show メソッドの動作には Count クラスの実体を必要としないので
// 普通の関数にすることができる。
void Show() {
  cout << m_count << endl;
}

int main() {
  Show();

  Count a;
  Show();
  {
    Count b;
    Show();
    Show();
  }
  Show();
}
