#include <iostream>
using namespace std;
class Calculator{
  public:
  void Add (int x, int y){
    cout << "The sum is " << x + y << "\n";
  }
  void Add (float x, double y){
    cout << "The sum is " << x + y << "\n";
  }
};
int main() {
  Calculator calculator;

  calculator.Add(2,3);
  calculator.Add(2.3,4.5);
}
