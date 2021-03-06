#ifndef STREAM_H_
#define STREAM_H_

// 0 以上の値を順次取得していく処理を行うための基底クラス
class Stream {
 public:
  Stream();
  Stream(double n);
  virtual ~Stream(); // 仮想デストラクタ
 public:
  double Get() const; // 設定された値を取得
  bool Set();

 protected:
  // 仮想関数の宣言に 0 を代入する形に書くと実装を持たなくなる
  virtual void SetBase() = 0; // 値を設定する基本関数（これは純粋仮想関数として作られている）
 protected: // 派生クラス相手には公開される
  double m_n; // 現在の値
};

#endif // #ifndef STREAM_H_
