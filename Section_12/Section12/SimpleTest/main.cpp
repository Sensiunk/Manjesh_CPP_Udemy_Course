#include <iostream>
using namespace std;

int a = 1;

int f(int a) 
{ 
    return a; 
}

int g(int x = f(a)) 
{ 
    return x; 
}

int h() {
  a = 4;
  {
    int a = 3;
    return g();
  }
}

int main() {
  cout << h() << endl;
}