#ifndef ARRAY_H_
#define ARRAY_H_

#include <iostream>
#include <algorithm>
#include <cstdlib>

// クラステンプレート
template <typename TYPE>
class Array {
 public:
  Array(int size);
  Array(const Array& other);
  void operator=(const Array& other);
  virtual ~Array();

 public:
  // アクセス関数
  TYPE Get(int i) const;
  void Set(int i, TYPE value);

 public:
  // 配列のサイズを返す
  int Size() const;

 private:
  // インデックスのチェック
  void CheckIndex(int i) const;

 private:
  TYPE* m_array;  // 動的配列
  int   m_size;   // 配列の要素数
};

template <typename TYPE>
Array<TYPE>::Array(int size) {
  m_array = new TYPE[size];
  m_size = size;
}

template <typename TYPE>
Array<TYPE>::Array(const Array& other) {
  m_size = other.m_size;
  m_array = new TYPE[m_size];
  std::copy(other.m_array, other.m_array + m_size, m_array);
}

template <typename TYPE>
void Array<TYPE>::operator=(const Array& other) {
  TYPE* array = new TYPE[other.m_size];
  delete[] m_array;
  m_size = other.m_size;
  std::copy(other.m_size, other.m_array + m_size, m_array);
}

template <typename TYPE>
Array<TYPE>::~Array() {
  delete[] m_array;
}

// アクセス関数（取得）
template <typename TYPE>
TYPE Array<TYPE>::Get(int i) const {
  CheckIndex(i);
  return m_array[i];
}

// アクセス関数（設定）
template <typename TYPE>
void Array<TYPE>::Set(int i, TYPE value) {
  CheckIndex(i);
  m_array[i] = value;
}

// 配列のサイズを返す
template <typename TYPE>
int Array<TYPE>::Size() const {
  return m_size;
}

// インデックスのチェック
template <typename TYPE>
void Array<TYPE>::CheckIndex(int i) const {
  if(0 <= i && i < m_size) {
    // インデックスは正常
  } else {
    std::cerr << "インデックスが不正です！" << std::endl
              << "値 : " << i << std::endl;
    std::exit(EXIT_FAILURE);
  }
}

#endif // #ifndef ARRAY_H_
