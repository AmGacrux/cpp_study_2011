#ifndef INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED
#define INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED

class IntArray {
 public:
  explicit IntArray(int size);
  IntArray(const IntArray& other); // コピーコンストラクタ
  ~IntArray();
 public:
  // 代入演算子のオーバーロード
  void operator=(const IntArray& other);
 public:
  int Get(int i) const; 
  // 配列のサイズを返す
  int Size() const;
  void Set(int i, int value);
  
 private:
  void CheckIndex(int i) const;
 private:
  int* m_array;
  int  m_size;
};

#endif // INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED
