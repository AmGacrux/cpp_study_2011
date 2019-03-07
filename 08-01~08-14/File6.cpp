#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

const int PAGE_WIDTH  = 16;
const int PAGE_HEIGHT = 16;
const int PAGE_SIZE   = PAGE_WIDTH * PAGE_HEIGHT;

class DumpFile {
public:
  bool Run();     // 一連の処理を実行
  
private:
  bool Open();    // ファイルを開く
  void Close();   // ファイルを閉じる
  void Dump();    // 1 ページ分をダンプ
  bool Control(); // ページの制御
  
private:
  fstream m_file; // ファイル
  int     m_page; // 現在のページ
};

// 一連の処理を実行
// 正常に終了したかどうかを返す
bool DumpFile::Run() {
  if(! Open()) {
    return false;
  }

  do {
    Dump();
  } while(Control());

  Close();
  
  return true;
}

// ファイルを開く
// ファイルが開けたかどうかを返す
bool DumpFile::Open() {
  string filename;
  
  cout << "ファイル名 > " << flush;
  getline(cin, filename);
  
  // fstream の open メソッドの第 1 引数は const char* なので string の c_str メソッドを利用している
  m_file.open(filename.c_str(), ios::in | ios::binary);
  m_page = 0;

  return m_file.is_open();
}

// ファイルを閉じる
void DumpFile::Close() {
  m_file.close();
}

// 1 ページ分をダンプ
void DumpFile::Dump() {
  cout << endl;
  
  m_file.clear();
  // 読み出し用のファイルポインタの位置を変更するメソッド seekg (g は get の略)
  m_file.seekg(m_page * PAGE_SIZE);

  for(int h = 0; h < PAGE_HEIGHT; ++h) {
    unsigned char buf[PAGE_WIDTH];

    m_file.read((char*)buf, sizeof buf);

    for(int w = 0, size = m_file.gcount(); w < size; ++w) {
      // cout << set(w) << setfill('0') << hex << uppercase 
      //      << (int)buf[w] << ' '; 
      // でも可（但し #include <iomanip> が必要）
      printf("%02X ", buf[w]);
    }
    cout << endl;
  }
}

// ページの制御
// false を返すとダンプを終了
bool DumpFile::Control() {
  while(true) {
    string command;

    cout << "コマンド？ (n: 次 / p: 前 / q: 終了) > " << flush;
    getline(cin, command);

    if(command == "n") {
      // 最後のページでなければ次へ
      if(! m_file.eof()) {
        ++m_page;
        return true;
      } else {
        // コマンドを再入力
      }
    } else if(command == "p") {
      // 最初のページでなければ前へ
      if(m_page > 0) {
        --m_page;
        return true;
      } else {
        // コマンドを再入力
      }
    } else if(command == "q") {
      // 終了
      return false;
    }
  }
}

int main() {
  DumpFile dump;
  
  if(! dump.Run()) {
    return EXIT_FAILURE;
  }
}
