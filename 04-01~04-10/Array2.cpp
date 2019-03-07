#include <iostream>
using namespace std;

// int array[] は int* array に等しい。
void Init(int array[]) {
  for(int i = 0; i < 5; ++i) {
    array[i] = i * 5;
  }
}

void Show(int array[]) {
  for(int i = 0; i < 5; ++i) {
    cout << array[i] << ' ';
  }
  cout << endl;
}

int main() {
  int n[5];
  
  // これは Init(&n[0]) に等しい。
  Init(n);
  Show(n);
}
