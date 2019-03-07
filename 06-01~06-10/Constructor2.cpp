#include <iostream>
using namespace std;

class Integer {
public:
  int m_value;

  Integer();
  Integer(int num);
  void Show();
};

// コンストラクタ
// ※戻り値を書かないことに注意！
Integer::Integer()        { m_value = 0; } // デフォルトコンストラクタ
Integer::Integer(int num) { m_value = num; }
// デフォルト引数を使うことによって上二つをまとめることができる
// ただし、デフォルト引数にはメンバ変数を指定することはできない
Integer::Integer(int num = 0);

// メンバ変数の表示
void Integer::Show() { cout << m_value << endl; }

int main() {
  Integer a;
  Integer b(100), c(40);

  a.Show();
  b.Show();
  c.Show();
}
