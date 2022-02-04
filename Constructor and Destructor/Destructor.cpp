#include <iostream>
using namespace std;
class ABC{
  public:
  ABC(){
    cout<<"Creating object\n";
  }
  ~ABC(){
    cout<<"Deleting object\n";
  }
};
int main() {
  ABC abc;
}