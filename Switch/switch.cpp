#include <iostream>
using namespace std;

int main(void){
  int choice;
  cout << "Choose the option (enter value from 0 to 10): ";
  cin >> choice;
  switch(choice){
    case 1:
      cout << "You have chosen:" << endl;
      cout << " 0000\n";
      cout << "00  00\n";
      cout << "00  00\n";
      cout << "00  00\n";
      cout << " 0000\n";
    case 2:
      cout << "You have chosen:";
      cout << "1111\n";
      cout << "  11\n";
      cout << "  11\n";
      cout << "  11\n";
      cout << "111111\n";
    case 3:
      cout << "You have chosen:";
    case 4:
      cout << "You have chosen:";

    case 5:
      cout << "You have chosen:";

    case 6:
      cout << "You have chosen:";

    case 7:
      cout << "You have chosen:";

    case 8:
      cout << "You have chosen:";

    case 9:
      cout << "You have chosen:";

    case 10:
      cout << "You have chosen:";

    default:
      cout << "You have chosen the value out of the range.";
      break;
  }
}
