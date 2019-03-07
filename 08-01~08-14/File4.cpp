#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
using namespace std;

const int WIDTH = 16;

int main() {
  fstream file;

  file.open("hello.txt", ios::in | ios::binary);
  if(! file.is_open()) {
    return EXIT_FAILURE;
  }

  do {
    unsigned char buf[WIDTH];
    
    // 16 バイト分読み込んで buf へ格納する
    file.read((char*)buf, sizeof buf);
    
    // gcount() は (get) バイト数を返す
    // for ループを抜ける度に gcount() で返す値は 16 バイト少なくなる
    for(int i = 0, size = file.gcount(); i < size; ++i) {
      printf("%02X ", buf[i]);
    }
    cout << endl;
  } while(! file.eof());
 
  file.close();
}
