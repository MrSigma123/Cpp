#include <iostream>
using namespace std;

int main(void){
  int choice;
  cout << "Choose the option (enter value from 0 to 10): ";
  cin >> choice;
  switch(choice){
    case 0:
      cout << "You have chosen:" << endl;
      cout << " 0000\n";
      cout << "00  00\n";
      cout << "00  00\n";
      cout << "00  00\n";
      cout << " 0000\n";
      break;
    case 1:
      cout << "You have chosen:" << endl;
      cout << "1111\n";
      cout << "  11\n";
      cout << "  11\n";
      cout << "  11\n";
      cout << "111111\n";
      break;
    case 2:
      cout << "You have chosen:" << endl;
      cout << " 2222\n";
      cout << "22  22\n";
      cout << "   22\n";
      cout << "  22\n";
      cout << "222222\n";
      break;
    case 3:
      cout << "You have chosen:" << endl;
      cout << " 3333\n";
      cout << "33  33\n";
      cout << "   333\n";
      cout << "33  33\n";
      cout << " 3333\n";
      break;
    case 4:
      cout << "You have chosen:" << endl;
      cout << "44  44\n";
      cout << "44  44\n";
      cout << "444444\n";
      cout << "    44\n";
      cout << "    44\n";
      break;
    case 5:
      cout << "You have chosen:" << endl;
      cout << "555555\n";
      cout << "55\n";
      cout << "55555\n";
      cout << "    55\n";
      cout << "55555\n";
      break;
    case 6:
      cout << "You have chosen:" << endl;
      cout << " 6666\n";
      cout << "66\n";
      cout << "66666\n";
      cout << "66  66\n";
      cout << " 6666\n";
      break;
    case 7:
      cout << "You have chosen:" << endl;

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
