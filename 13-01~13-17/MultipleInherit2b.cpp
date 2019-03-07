#include <iostream>
using namespace std;

class ABase {
public:
  virtual ~ABase() { }
  virtual void AHoge() = 0;
};

class A1 :
  public ABase
{
public:
  virtual ~A1() { }
  virtual void AHoge() {
    cout << "A1::AHoge" << endl;
  }
};

class A2 :
  public ABase
{
public:
  virtual ~A2() { }
  virtual void AHoge() {
    cout << "A2::AHoge" << endl;
  }
};

class C :
  public A1,
  public A2 
{
};

int main() {
  C c;
  ABase& a1 = static_cast<A1&>(c);
  ABase& a2 = static_cast<A2&>(c);
  
  a1.AHoge();  
  a2.AHoge();
}
