#include "FileException.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// ファイルを開く
// 開けなければ FileException 例外を投げる
void Open(ifstream& file, const char* filename) {
  file.open(filename);
  if(! file.is_open()) {
    throw FileException("ファイルを開けませんでした！");
  }
}

// ファイルから一行取得する
// 取得できなければ FileExcepiton 例外を投げる
void GetLine(ifstream& file, string& line) {
  getline(file, line);
  if(file.fail()) {
    FileException e("ファイルから読み込めませんでした！");
    throw e;
  }
}

int main() {
  try {
    ifstream file;
    Open(file, "test.txt");
    
    string line;
    GetLine(file, line);
    cout << line << endl;
  } catch(const FileException& e) {
    cerr << e.What() << endl;
    return EXIT_FAILURE;
  } 
}
