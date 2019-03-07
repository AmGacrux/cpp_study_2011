#include <iostream>
using namespace std;

/*
  捕らぬ狸の皮算用シミュレータ ver1.00
  
  あとで関数を分けたり、
  正確な日数計算をできるようにする。
  
  2013/04/01
*/

int main() {
  int income, days;
  double time, period;
  cout << "時給(yen)       : " << flush;
  cin >> income;
  
  cout << "労働時間(hour)  : " << flush;
  cin >> time;

  cout << "労働日数(day)  : " << flush;
  cin >> days;

  cout << "就労期間(month) : " << flush;
  cin >> period;

  cout << period << " ヶ月間毎日 " << time << " 時間働くと、"
       << endl   <<  (income * time * days) * 4 * period << " 円もらえます。" << endl;
}
