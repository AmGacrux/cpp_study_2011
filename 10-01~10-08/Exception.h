#ifndef EXCEPTION_H_
#define EXCEPTION_H_

class Exception {
 public:
  virtual ~Exception();

 public:
  // エラーの状況を出力する関数（純粋仮想関数）
  virtual const char* What() const = 0;
};

#endif // #ifndef EXCEPTION_H_
