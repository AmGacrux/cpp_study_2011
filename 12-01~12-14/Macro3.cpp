#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

// ファイルを開く
// 開けなければエラーメッセージを返す
const char* Open(ifstream& file, const char* filename) {
  file.open(filename);
  return file.is_open() ? NULL : "ファイルを開けませんでした！";
}

// ファイルから一行取得する
// 取得できなければエラーメッセージを返す
const char* GetLine(ifstream& file, string& line) {
  getline(file, line);
  return file.fail() ? "ファイルから読み込めませんでした！" : NULL;
}

int main() {
  const char* error = NULL;
  
  ifstream file;
  string line;

  error = Open(file, "test.txt");
  if(error != NULL) {
    goto ON_ERROR;
  }
  error = GetLine(file, line);
  if(error != NULL) {
    goto ON_ERROR;
  }
  cout << line << endl;

  return EXIT_SUCCESS;

 ON_ERROR :
  cerr << error << endl;
  return EXIT_FAILURE;
}
