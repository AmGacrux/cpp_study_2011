#include <iostream>
using namespace std;

int main() {
  int  a;
  // 別の書き方として、
  // int *p;
  // int * p;
  // int
  // *
  // p;
  // などがある。
  int* p = &a;
  // int* p, q; は q がポインタとならないことに注意。

  a = 0;
  cout << " a = " <<  a << endl
       << "*p = " << *p << endl; 

  *p = 5;
  cout << " a = " <<  a << endl
       << "*p = " << *p << endl;
}
