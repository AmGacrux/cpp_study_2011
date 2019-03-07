#include "HalfInputStream.h"
#include <iostream>
using namespace std;

// 値を設定する基本関数
void HalfInputStream::SetBase() {
  InputStream::SetBase();
  m_n /= 2;
}
