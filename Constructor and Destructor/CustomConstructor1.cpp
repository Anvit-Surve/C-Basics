#include <iostream>
using namespace std;
class Player{
  private:
  int health;

  public:
  Player(int Health){
    health = Health;
    cout << "Creating object of Player Class using custom constructor\n";
  }
  int getHealth(){
    return health;
  }
};

int main() {
  Player player(100);
  cout << "Health is " << player.getHealth() << "\n";
}