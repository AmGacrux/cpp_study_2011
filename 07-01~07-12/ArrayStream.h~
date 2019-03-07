#ifndef ARRAYSTREAM_H_
#define ARRAYSTREAM_H_

#include "Stream.h"

// 配列から順に値を取得していくクラス
class ArrayStream :
public Stream{
 public:
  ArrayStream(const double* array, int size);
  ~ArrayStream();

 protected:
  virtual void SetBase(); // 値を設定する基本関数
 
 private:
  double* m_array; // 配列
  int m_i; // 現在のインデックス
};

#endif // #ifndef ARRAYSTREAM_H_
