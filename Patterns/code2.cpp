#include <iostream>
using namespace std;

int main() {
  for(int i=0;i<4;i++){
    for(int j = 2;j>=i;j--){
      cout << " ";
    }
    for(int k = 0;k<=2*i;k++){
      cout<<"*";
    }
    cout<<"\n";
  }
}