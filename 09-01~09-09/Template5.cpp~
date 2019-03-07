#include <iostream>
#include <string>
using namespace std;

// 関数テンプレートでエラーとなる例
template <typename TYPE>
TYPE Abs(TYPE a) {
  return a < 0 ? -a : a;
}


int main() {
  string str = "hoge";
  
  cout << Abs(str) << endl;
}
