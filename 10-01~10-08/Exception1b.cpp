#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

const char* Run() {
  ifstream file;

  file.open("test.txt");
  if(! file.is_open()) {
    return "ファイルを開けませんでした！";
  }

  string line;

  getline(file, line);
  if(file.fail()) {
    return "ファイルから読み込めませんでした！";
  }

  return NULL;
}

int main() {
  const char* error = Run();

  if(error != NULL) {
    cerr << error << endl;
    return EXIT_FAILURE;
  }
}
