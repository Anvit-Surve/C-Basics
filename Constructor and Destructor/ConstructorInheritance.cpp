#include <iostream>
using namespace std;
class Polygon{
  public:
  Polygon(){
    cout << "Creating an object of class Polygon\n";
  }
  ~Polygon(){
    cout << "Deleting object of class Polygon\n";
  }
};
class Rectangle:public Polygon{
  public:
  Rectangle(){
    cout << "Creating an object of class Rectangle\n";
  }
  ~Rectangle(){
    cout << "Deleting object of class Rectangle\n";
  }

};
int main() {
  Rectangle rectangle;
}