#include "InputStream.h"
#include <iostream>
using namespace std;

InputStream::InputStream() {
}

InputStream::InputStream(double n) : Stream(n) {
}

// 値を設定する基本関数
void InputStream::SetBase() {
  cin >> m_n;
}
