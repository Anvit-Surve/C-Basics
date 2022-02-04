#include <iostream>
using namespace std;
class Vehicle{
  protected:
  int gear;
  public:
  Vehicle(int Gear){
    gear = Gear;
    cout << "Creating Vehicle with gears: " << gear << endl;
  }
  ~Vehicle(){
    cout << "Destroying Vehicle with gears: " << gear << endl;
  }
};
class Car: public Vehicle{
  private:
  int doors;
  public:
  Car(int Doors, int Gear):Vehicle(Gear){
    doors = Doors;
  }
  ~Car(){
    cout << "Destroying Car with doors: " << doors << " and gears: "<< gear << endl;
  }
};
void localObjects(){
  Vehicle *vehicle = new Vehicle(4);
  Car *car = new Car(4,4);
  delete vehicle;
  delete car;
}
int main() {
  Vehicle *vehicle1 = new Vehicle(1);
  Vehicle *vehicle2 = new Vehicle(3);
  Vehicle *vehicle3 = new Vehicle(7);
  Car *car1 = new Car(10,10);
  localObjects();
  delete car1;
  delete vehicle1;
  delete vehicle2;
  delete vehicle3;
}