#include <iostream>
using namespace std;

int main() {
  int x = 10;
  int *p,*q;
  p = q = &x;
  cout << "p is " << p << "\n";
  cout << "q is " << q << "\n";
  cout << "*p is " << *p << "\n";
  cout << "*q is " << *q << "\n";
  cout << "x is " << x << "\n";
  x = 20;
  cout << "*p is " << *p << "\n";
  cout << "*q is " << *q << "\n";
  cout << "x is " << x << "\n";
}