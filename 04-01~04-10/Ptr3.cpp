#include <iostream>
using namespace std;

// ※アドレス変数同士の乗除算は不可能（コンパイルエラーを起こす）
int main() {
  int  n[4];
  int* p = n;

  cout << "p     : " << (size_t)p     << endl
       << "&n[0] : " << (size_t)&n[0] << endl; 
  
  // (&n[i] + C) = &n[i + C] の確認
  p += 2;
  cout << "p     : " << (size_t)p     << endl
       << "&n[2] : " << (size_t)&n[2] << endl;

  // (&n[i] - &n[j]) = (i - j) の確認
  p = &n[2];
  cout << "p = &n[2] : " << (size_t)p       << endl
       << "p - n     : " << (size_t)(p - n) << endl;
}
