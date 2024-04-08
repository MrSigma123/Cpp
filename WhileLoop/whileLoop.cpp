#include <iostream>
using namespace std;

int main() {
  cout << "Printing multiplication table: " << endl;
  int i = 0;
  int j = 0;
  while(i <= 10){
    j = 0;
    while(j <= 10){
      cout << i << " * " << j << " = " << i*j << endl;
      j++;
    }
  cout << endl;
  i++;
  }
}
