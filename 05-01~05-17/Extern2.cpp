extern int a; // Extern1.cpp の a を参照
void Func();  // Extern1.cpp の Func を参照

int main() {
  Func();
  a = 5;
  Func();
}
