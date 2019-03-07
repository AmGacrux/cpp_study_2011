#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
using namespace std;

const char SRC_NAME[] = "hello.txt";
const char DST_NAME[] = "hello2.txt";

const int BUF_SIZE = 1024;

// もしもエラーが発生したのならば
// hello2.txt を削除してコピーを中断するプログラム
int main() {
  fstream src; // コピー元ファイル
  fstream dst; // コピー先ファイル

  src.open(SRC_NAME, ios::in | ios::binary);
  if(! src.is_open()) {
    return EXIT_FAILURE;
  }

  dst.open(DST_NAME, ios::out | ios::binary);
  if(! dst.is_open()) {
    src.close(); 
    // 2 つめのファイルが読めなかった場合 1 つめを消す。
    // 但し fstream クラスのデストラクタによって自動的に行われるので
    // 本来は必要ないが、一応明示的に閉じておく。
    return EXIT_FAILURE;
  }

  bool error = false;
  do {
    char buf[BUF_SIZE];
    
    src.read(buf, sizeof buf);
    // fail メソッドではなく if(! src) とする方法もある（演算子オーバーロード）
    if(src.fail() && ! src.eof()) {
      error = true;
      break;
    }
    
    dst.write(buf, src.gcount());
    if(dst.fail()) {
      error = true;
      break;
    }
  } while(! src.eof());
 
  dst.close();
  src.close();

  if(error) {
    cout << "ファイル操作でエラーが発生しました！" << endl;
    remove(DST_NAME); // ファイルを削除する関数 (cstdio.h)
    return EXIT_FAILURE;
  }
}
