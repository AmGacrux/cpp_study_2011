#include <iostream>
using namespace std;

int main() {
  int a;

  cout << "何か値を入れてね > " << flush;
  cin >> a;
  
  cout << "その数を 3 で割った余りは " << a % 3 << " です。" << endl;
}
