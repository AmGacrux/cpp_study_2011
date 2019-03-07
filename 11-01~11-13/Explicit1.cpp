#include "IntArray.h"
#include <iostream>
using namespace std;

// 暗黙のキャストを抑制する場合はコンストラクタ宣言に explicit をつける
// 大抵はバグ防止で予期せぬキャストを防ぐため引数の数が 1 のコンストラクタへつけられる
void Show(const IntArray& array) {
  cout << array.Size() << endl;
}

// explicit = 明示的な
// explicit は IntArray.h 内で使っている
int main() {
  Show(IntArray(5));
  // コンストラクタ IntArray(int size) に explicit をつけたのでキャストは自動で行われなくなる
  // Show((IntArray)5) でも可。どちらでもテンポラリオブジェクトが作られる
}
