#include <iostream>
using namespace std;

class Vehicle{
  private:
  int gear;
  public:
  int getGear(){
    return gear;
  }
  void setGear(int g){
    gear = g;
  }
  void Display(){
    cout << "Gear = " << getGear() << "\n";
  }
};

int main() {
  Vehicle vehicle;
  Vehicle *pvehicle = new Vehicle;
  int g;
  cout << "Enter gear value: ";
  cin >> g;
  pvehicle->setGear(g);
  pvehicle->Display();
  delete pvehicle;
}