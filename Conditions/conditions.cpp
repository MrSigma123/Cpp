#include <iostream>
using namespace std;

int main(void){
  bool imperfect;  // boolean datatype
  int input;
  cout << "Enter your score: ";
  cin >> input;
  imperfect = (input < 100);
  if (imperfect){
    cout << "You didn't score 100\%" << endl;
  }
  else{
    cout << "You've scored 100\%, congrats!" << endl;
  }
}
