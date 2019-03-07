#include "Array.h"
#include <iostream>
using namespace std;

int main() {
  // 明示的なテンプレートへの引数の型指定
  // クラステンプレートは明示的に指定して使う
  Array<int> array(5);
  
  for(int i = 0, size = array.Size(); i < size; ++i) {
    array.Set(i, i*2);
  }
  for(int i = 0, size = array.Size(); i < size; ++i) {
    cout << array.Get(i) << ' ';
  }
  cout << endl;

  Array<char> c_array(26);
  for(int i = 0, size = c_array.Size(); i < size; ++i) {
    c_array.Set(i, 65 + i);
  }
  for(int i = 0, size = c_array.Size(); i < size; ++i) {
    cout << c_array.Get(i) << ' ';
  }
  cout << endl;
}
