#include <iostream>
#include <algorithm> // fill_n を使うためのヘッダファイル
using namespace std;

//////////////////////////////////////////////////////////////////
// アドレスが常に一定かのチェック

void CheckAddress_Sub();
void CheckAddress_Sub2();

void CheckAddress() {
  cout << "アドレスが常に一定かのチェック" << endl;
  
  CheckAddress_Sub();
  CheckAddress_Sub2();
  CheckAddress_Sub();
}

// 静的変数 a と自動変数（動的変数） b のアドレスを出力
void CheckAddress_Sub() {
  static int a;
  int        b;
  cout << "&a = " << (size_t)&a << endl
       << "&b = " << (size_t)&b << endl;
}

// この関数の中から CheckAddress_Sub を呼んだ時に
// 変数 a と b のアドレスがどうなるかチェック
void CheckAddress_Sub2() {
  cout << "in Sub2" << endl;
  CheckAddress_Sub();
}

//////////////////////////////////////////////////////////////////
// 初期化が 1 回しかされないかのチェック
// グローバル変数の時にやったのと同じ方法

void CheckInitOnce_Sub();

void CheckInitOnce() {
  cout << endl << "初期化が 1 回しかされないかのチェック" << endl;

  CheckInitOnce_Sub();
  CheckInitOnce_Sub();
  cout << endl;
}

// ++a と ++b の影響が 2 度目以降の呼び出しに影響するかチェック
void CheckInitOnce_Sub() {
  static int a = 3;
  int        b = 3;
  cout << "a = " << a << endl
       << "b = " << b << endl;
  ++a;
  ++b;
}

//////////////////////////////////////////////////////////////////
// 0 で初期されるかのチェック
// 偶然 0 だった時のために、 4 個くらい変数を作って確認
// 自動変数も一緒に確認する

void CheckZeroInit_Sub();
void CheckZeroInit_Sub2();

void CheckZeroInit() {
  cout << "0 で初期されるかのチェック" << endl;

  CheckZeroInit_Sub();
  CheckZeroInit_Sub2();
}

// 静的変数が何で初期化されているかをチェック
void CheckZeroInit_Sub() {
  static int a, b, c, d;
  cout << a << ',' << b << ',' << c << ',' << d << endl;
}

// 自動変数が何で初期化されているかをチェック
void CheckZeroInit_Sub2() {
  int a, b, c, d;
  cout << a << ',' << b << ',' << c << ',' << d << endl;
}

//////////////////////////////////////////////////////////////////
// 値が保証されるかのチェック

// ※ int*& は int 型変数へ対するポインタ int* への参照
void CheckInvariant_Sub(int*& pa, int*& pb);
void CheckInvariant_Sub2();

void CheckInvariant() {
  cout << endl << "値が保証されるかのチェック" << endl;

  int *pa, *pb; // * はポインタ変数名の両方につける
  CheckInvariant_Sub(pa, pb);
  CheckInvariant_Sub2();
  // CheckInvariant_Sub2 を呼んでも
  // a と b の値が保存されているかチェック
  // 場合によってはチェックに失敗するかもしれません
  cout << "*pa = " << *pa << endl
       << "*pb = " << *pb << endl;
}

// 静的変数 a と自動変数 b のアドレスを引数に通して返す
void CheckInvariant_Sub(int*& pa, int*& pb) {
  static int a = 9;
  int        b = 9;
  pa = &a;
  pb = &b;
}

// 大きな変数を作って、それをすべて 0 で埋めます
// fill_n は指定したデータで配列などを埋める関数のようなものです
void CheckInvariant_Sub2() {
  int dummy[100];
  fill_n(dummy, 100, 0);

  // fill_n のデータ挿入した結果を表示してみるテスト
  /*
  cout << endl << "dummy : " << endl;
  cout << "element value of dummy  : " << sizeof *dummy << endl 
       << "sizeof element of dummy : " << sizeof dummy << endl; 
  for(int i = 0; i < (sizeof dummy) / (sizeof *dummy); ++i) {
    cout << dummy[i] << ' ';
  }
  cout << endl;
  */
}

//////////////////////////////////////////////////////////////////
// main 関数

int main() {
  CheckAddress();
  CheckInitOnce();
  CheckZeroInit();
  CheckInvariant();
}
