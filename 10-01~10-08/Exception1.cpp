#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
  ifstream file;

  file.open("test.txt");
  if(! file.is_open()) {
    cerr << "ファイルを開けませんでした！" << endl;
    return EXIT_FAILURE;
  }

  string line;
  getline(file, line);
  if(file.fail()) {
    cerr << "ファイルから読み込めませんでした！" << endl;
    return EXIT_FAILURE;
  }

  cout << line << endl;
}
