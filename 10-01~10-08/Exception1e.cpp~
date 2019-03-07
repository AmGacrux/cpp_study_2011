#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
  try {
    ifstream file;
    
    file.open("test.txt");
    if(! file.is_open()) {
      throw "ファイルを開けませんでした！";
    }
    
    string line;
    getline(file, line);
    if(file.fail()) {
      throw "ファイルから読み込めませんでした！";
    }
    
    cout << line << endl;
  } catch(const char* error) {
    cerr << error << endl;
    return EXIT_FAILURE;
  }
}
