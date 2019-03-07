#include <iostream>
using namespace std;

const int MAX_NAME = 16;

struct Student {
  char name[MAX_NAME + 1];
  int scoreJapanese;
  int scoreMath;
  int scoreEnglish;
};

// 構造体はデータ量が比較的大きいので参照渡しを使用している
void Show(const Student& student) {
  // 文字列リテラルに関してのみ、
  //  "foo" と "bar" の間に何も書かなくても文字列が連結される
  cout << "名前  : "  << student.name          << endl
       << "  国語 : " << student.scoreJapanese << " 点"     
          ", 数学 : " << student.scoreMath     << " 点"
          ", 英語 : " << student.scoreEnglish  << " 点" << endl;
}

int main() {
  // 最後の要素の後のコンマは無くても可
  // この様に書くと違う種類の新たな要素を追加するとき便利な場合がある
  Student student[] = {
    { "赤井孝"   , 73, 98, 86, },
    { "笠井大介" , 64, 45, 40, },
    { "吉田叶"   , 76, 78, 69, },
  };
  // (配列の大きさ) / (配列要素の大きさ) => 要素数
  // *student は student[0] でももちろん可
  int size = sizeof student / sizeof *student;

  for(int i = 0; i < size; ++i) {
    Show(student[i]);
  }
}
