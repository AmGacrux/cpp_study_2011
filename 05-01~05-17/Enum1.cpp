#include <iostream>
using namespace std;
// ※列挙体のキャストに注意すること（教科書P.215）

// 列挙体の初期化の場合には、配列や構造体と異なり
// 最後の要素のあとにはコンマをつけてはいけない
enum CompareResult {
  CR_LESS_THAN    = 0, // より小さい
  CR_EQUAL_TO     = 1, // 等しい
  CR_GREATER_THAN = 2  // より大きい
};

CompareResult Compare(int a, int b) {
  if(a < b) {
    return CR_LESS_THAN;
  } else if(a > b) {
    return CR_GREATER_THAN;
  } else {
    return CR_EQUAL_TO;
  }
  // 後述（５章７節 教科書P.219）より条件演算子を使った簡潔な表記
  /*
    return
    a < b ? CR_LESS_THAN :
    a > b ? CR_GREATER_THAN :
            CR_EQUAL_TO;
   */
  // これは (a < b) を判定し偽ならば次に (a > b) で大小を判定している。
}

bool Compare() {
  int a, b;
  
  cout << "数字を 2 つ入力してください > " << flush;
  cin >> a >> b;

  if(a == -1) {
    return false;
  }

  switch(Compare(a, b)) {
  case CR_LESS_THAN:
    cout << "前者は後者より小さいです。" << endl;
    break;

  case CR_EQUAL_TO:
    cout << "両者は等しいです。" << endl;
    break;   

  case CR_GREATER_THAN:
    cout << "前者は後者より大きいです。" << endl;
    break;
  }

  return true;
}

int main() {
  while(Compare()) {
    // 何もしない
  }
}
