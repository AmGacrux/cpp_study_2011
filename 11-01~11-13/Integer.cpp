#include "Integer.h"
#include <iostream>
using namespace std;

int Integer::m_value; // 静的メンバ変数は実体を作る必要がある

Integer::Integer(int num) {
  m_value = num;
}

void Integer::Show() {
  cout << m_value << endl;
}
