#include <iostream>
using namespace std;

int main() {
  int *p;
  int x = 10;
  p = &x;

  cout << "*p is " << *p << "\n";
  cout << "x is " << x << "\n";
  cout << "&x is " << &x << "\n";
  cout << "p is " << p << "\n";

  *p = 100;

  cout << "*p is " << *p << "\n";
  cout << "x is " << x << "\n";
}