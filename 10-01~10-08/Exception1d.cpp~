#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int Error(const char* error) {
  cerr << error << endl;
  return EXIT_FAILURE;
}

int main() {
  ifstream file;

  file.open("test.txt");
  if(! file.is_open()) {
    return Error("ファイルを開けませんでした！");
  }

  string line;

  getline(file, line);
  if(file.fail()) {
    return Error("ファイルから読み込めませんでした！");
  }

  return NULL;
}
