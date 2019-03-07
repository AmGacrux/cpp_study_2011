#ifndef INPUTSTREAM_H_
#define INPUTSTREAM_H_

#include "Stream.h"

// 入力クラス
class InputStream : public Stream {
 public:
  InputStream();
  InputStream(double n);

 protected:
  virtual void SetBase(); // 値を設定する基本関数
};

#endif // #ifndef INPUTSTREAM_H_
