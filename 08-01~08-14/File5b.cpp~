#include <fstream>
#include <cstdlib>
using namespace std;

const char SRC_NAME[] = "hello.txt";
const char DST_NAME[] = "hello2.txt";

const int BUF_SIZE = 1024;

int main() {
  fstream src; // コピー元ファイル
  fstream dst; // コピー先ファイル

  src.open(SRC_NAME, ios::in | ios::binary);
  if(! src.is_open()) {
    return EXIT_FAILURE;
  }

  dst.open(DST_NAME, ios::out | ios::binary);
  if(! dst.is_open()) {
    src.close(); 
    // 2 つめのファイルが読めなかった場合 1 つめを消す。
    // 但し fstream クラスのデストラクタによって自動的に行われるので
    // 本来は必要ないが、一応明示的に閉じておく。
    return EXIT_FAILURE;
  }

  do {
    char buf[BUF_SIZE];
    
    src.read(buf, sizeof buf);
    dst.write(buf, src.gcount());
  } while(! src.eof());
 
  src.close();
  dst.close();
}
