#include <iostream>
using namespace std;
class Player{
  private:
  int health;
  int score;
  string name;

  public:
  Player(int Health,int Score, string Name){
    health = Health;
    score = Score;
    name = Name;
    cout << "Creating object of Player Class using custom constructor\n";
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
  Player player1(100,100,"Anvit");
  cout << "Health is " << player1.getHealth() << "\nScore is " << player1.getScore() << "\nName is " << player1.getName() << "\n";
  Player player2(90,200,"Rishikesh");
  Player player3(80,300,"Dhiraj");
  cout << "Total Score = " << player1.getScore() + player2.getScore() +player3.getScore() << "\n";
  cout << "Total Health = " << player1.getHealth() + player2.getHealth() +player3.getHealth() << "\n";
}