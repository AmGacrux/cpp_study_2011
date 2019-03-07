#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

// ファイルを開く
// 開かなければ int 例外を投げる
void Open(ifstream& file, const char* filename) {
  file.open(filename);
  if(! file.is_open()) {
    throw 1;
  }
}

// ファイルから一行取得する
// 取得できなければ const char* 例外を投げる
void GetLine(ifstream& file, string& line) {
  getline(file, line);
  if(file.fail()) {
    throw "ファイルから読み込めませんでした！";
  }
}

int main() {
  try {
    ifstream file;
    Open(file, "test.txt");
    
    string line;
    GetLine(file, line);
    cout << line << endl;
  } catch(const char* error) {
    cerr << error << endl;
    return EXIT_FAILURE;
  } catch(int error) {
    cout << "ファイルを開けませんでした！" << endl;
    return EXIT_FAILURE;
  }
}
