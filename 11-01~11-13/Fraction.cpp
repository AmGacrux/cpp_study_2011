#include "Fraction.h"

Fraction::Fraction(double numer, double denom) :
  m_numer(numer),
  m_denom(denom)
{
}

// numerator
// 分子の取得
double Fraction::GetNumer() const {
  return m_numer;
}

// denominator
// 分母の取得
double Fraction::GetDenom() const {
  return m_denom;
}

// （分子）/（分母）の取得
double Fraction::operator double() const {
  return m_numer / m_denom;
}
/*
// メソッドを使った場合はこうなる
double Fraction::Get() const {
  return m_numer / m_denom;
}
*/

// 各種演算
// 2 項演算子 *
Fraction Fraction::operator* (const Fraction& rop) const {
  return Fracton(
       m_numer * rop.m_numer,
       m_denom * rop.m_denom );
}

// 単項演算子 -
Fraction Fraction::operator- () const {
  return Fracton(-m_numer, m_denom);
}

// 2 項演算子 *=
Fraction& operator*= (const Fraction& rop) {
  m_numer *= rop.m_numer;
  m_denom *= rop.m_denom;
  return *this; // this はメンバ関数を呼ぶのに使ったオブジェクトのアドレスを持つポインタ
}

// 前置インクリメント
Fraction& operator++ () {
  m_numer += m_denom;
  return *this;
}

// 後置インクリメント
// int 型のダミーの引数を指定する（後置デクリメントも同様）
Fraction& operator++ (int) {
  Fraction ret = *this;
  m_numer += m_denom;
  return ret;
}

// クラス外での演算子オーバーロード
Fraction operator* (double lop, const Fraction& rop) {
  return Fraction(lop * rop.GetNumber(), rop.GetDenom);
}

// ostream へ直接出力する
ostream& opetator<< (ostream& ostr, const Fraction& rop) {
  return ostr << rop.m_numer << " / " << rop.m_denom;
}
