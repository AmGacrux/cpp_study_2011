#include "FileException.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// ファイルを開く
// 開けなければ OpenFileException 例外を投げる
void Open(ifstream& file, const char* filename) {
  file.open(filename);
  if(! file.is_open()) {
    throw OpenFileException(filename);
  }
}

// ファイルから一行取得する
// 取得できなければ ReadFileExcepiton 例外を投げる
void GetLine(ifstream& file, string& line) {
  getline(file, line);
  if(file.fail()) {
    throw ReadFileException ();
  }
}

int main() {
  try {
    ifstream file;
    Open(file, "test.txt");
    
    string line;
    GetLine(file, line);
    cout << line << endl;
  } catch(const FileException& e) { // 基底クラスの参照で例外を受ける
    // ※例外のキャッチに置いてもアップキャストが有効だということ！
    cerr << e.What() << endl;
    return EXIT_FAILURE;
  } 
}
