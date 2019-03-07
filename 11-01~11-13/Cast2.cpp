#include <cstdio>
using namespace std;

// reinterpret = 再解釈する（re + interpret）
int main() {
  int n = 0x12345678;
  // int* から const char* へのキャスト
  // reinterpret_cast で環境依存な処理を意図的に行う際に使う
  const char* p = reinterpret_cast<const char*>(&n);
  
  for(size_t i = 0; i < sizeof n; ++i) {
    printf("%02X ", p[i]);
  }
  printf("<-> %08X\n", n);
}
