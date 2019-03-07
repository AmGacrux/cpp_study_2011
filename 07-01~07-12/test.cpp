#include "HalfInputStream.h"
#include <iostream>
using namespace std;

int main() {
  HalfInputStream hstream;
  hstream.Set();
  cout << hstream.Get() << endl;
}
