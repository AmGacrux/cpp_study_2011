#include <iostream>
#include <cstdio>
using namespace std;

// 文字コードを 16 進数で表示
void DumpCode(const char* str) {
  for(int i = 0; str[i] != '\0'; ++i) {
    // %02x なら 16 進数の表示がアルファベット小文字になる
    printf("%02X ", (unsigned char)str[i]);
  }
  cout << endl;  
  
  for(int i = 0; str[i] != '\0'; ++i) {
    // ※確認用 文字コードを 10 進数で表示
    printf("%2d ", (unsigned char)str[i]);
  } 
  cout << " < 10 進数での文字コード表示" << endl;

  cout << endl;
}

int main() {
  DumpCode("\"\'\?\\"); 
  DumpCode("\a\b\t\n\v\f\r");
  DumpCode("\xAB" "\x0AB" "\xA" "B");
  DumpCode("c:\new\abc");
  DumpCode("c:\\new\\abc");
}
