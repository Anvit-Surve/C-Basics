#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter a Number\n";
  cin >> number;
  int check = number%2;
  switch(check){
    case 0:
    cout<< number <<" is an Even Number\n";
    break;
    case 1:
    cout<< number <<" is an Odd Number\n";
    break;
    default:
    cout<<" Invalid Input\n";
    break;
  }
}