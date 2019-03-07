#include "Stream.h"
#include <iostream>
using namespace std;

Stream::Stream() :
  m_n(-1) 
{
}

Stream::Stream(double n) {
  m_n = n;
}

Stream::~Stream() { }

// 設定された値を取得
double Stream::Get() const {
  return m_n;
}

// 値を設定
bool Stream::Set() {
  SetBase();
  return m_n >= 0;
}
