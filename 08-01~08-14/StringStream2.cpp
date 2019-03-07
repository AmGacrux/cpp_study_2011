#include <iostream>
#include <sstream>
using namespace std;

void Add(stringstream& sstr, int x, int y) {
  sstr.str("");  // stringstream 内部のクリア
  sstr << x << " + " << y << " = " << (x + y) << flush;
}

int main() {
  stringstream sstr("1 2");
  int x, y;

  sstr >> x >> y;
  cout << x << " + " << y << " = " << (x + y) << endl;
}
