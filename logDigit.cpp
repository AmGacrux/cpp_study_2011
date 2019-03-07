// 対数の桁を調べる
#include <iostream>
#include <cmath>
using namespace std;

int calcAns(int a, int r) {
  //double x;
  
  //x = r * log10(a);
  //cout << floor(x) << " <= " << x << " < " << ceil(x) << endl;
  //cout << pow(10, floor(x)) << " <= " << pow(a, r) << " < " << pow(10, ceil(x)) << endl;
  return floor(r * log10(a)) + 1;
}

int main() {
  int a, r;
  
  cout << "整数の冪乗を a r の形式で入力してください > " << flush;
  cin >> a >> r;
  cout << "入力された冪乗数 " << a << '^' << r << " の桁数は " <<  calcAns(a, r) << " です。" << endl;
}
