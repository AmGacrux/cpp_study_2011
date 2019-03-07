// 分数を表すクラス
#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {
 public:
  Fraction(double numer = 0, double denom = 1);

 public:
  double GetNumer() const; // 分子の取得
  double GetDenom() const; // 分母の取得

 public:
  double operator double() const;
  Fraction operator* (const Fraction& rop) const;
  Fraction& operator*= (const Fraction& rop);
  Fraction& operator++ ();    // 前置インクリメント
  Fraction& operator++ (int); // 後置インクリメント

  friend Fraction operator* (double lop, const Fraction& rop); 
  // クラス外での演算子オーバーロード
  
  // フレンド関数とすることで非メンバ関数でも 
  // private メンバに直接アクセスできる
  // クラス内で宣言するが、決してこのクラスの
  // メンバ関数となるわけではないことに注意
  // アクセス制限の無視に繋がることなのでなるべく限定的な状況で使う
  
  friend ostream& opetator<< (ostream& ostr, const Fraction& rop);

 private:
  double m_numer; // 分子
  double m_denom; // 分母
};

#endif // #ifndef FRACTION_H_
