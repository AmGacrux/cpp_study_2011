#ifndef HALFINPUTSTREAM_H_
#define HALFINPUTSTREAM_H_

#include "InputStream.h"

// 入力値の半分の値を取得していくクラス
class HalfInputStream : public InputStream {
 protected:
  virtual void SetBase(); // 値を設定する基本関数
};

#endif // #ifndef HALFINPUTSTREAM_H_
