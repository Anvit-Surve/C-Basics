#include <iostream>
using namespace std;

class Player{
private:
int health;
int score;
string name;

public:
Player(){
  health = 100;
  score = 0;
  name = "Outscal";
  cout << "Creating object of Player class using default constructor\n";
}
int getHealth(){
  return health;
}
int getScore(){
  return score;
}
string getName(){
  return name;
}
};
int main() {
  Player player;
  cout<< "The Health is " << player.getHealth() << "\nThe Score is " << player.getScore() <<"\nThe Name is " << player.getName() << "\n";
}