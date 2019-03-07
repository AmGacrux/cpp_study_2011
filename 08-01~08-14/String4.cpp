#include <iostream>
#include <string>
using namespace std;

int main() {
  while(true) {
    string line;
    
    cout << "何か文章を入力してください > " << flush;
    
    getline(cin, line);
    if(line == "quit") {
      break;
    }
    
    string::size_type pos = line.rfind("。"); // "。" が現れたる部分を右側から探す
    if(pos == string::npos) { // その部分が文字列の終端ならば
      line += "アルネ。";
    } else {
      line.insert(pos, "アルネ");
    }

    cout << line << endl;
  }
}
