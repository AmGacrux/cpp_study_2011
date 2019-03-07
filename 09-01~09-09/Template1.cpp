#include <iostream>
using namespace std;

// 関数テンプレートの利用
template <typename TYPE> TYPE Abs(TYPE a)
{
  return a < 0 ? -a : a;
}

/*
関数テンプレートを使った処理の一本化

int Abs(int a) { 
  return a < 0 ? -a : a;
}

double Abs(double a) { 
  return a < 0 ? -a : a;
}
*/


int main() {
  cout << "Abs(-10)   = " << Abs(-10)   << endl;
  cout << "Abs(-0.89) = " << Abs(-0.89) << endl;
}
