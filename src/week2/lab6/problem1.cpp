#include <iostream>
using namespace std;
int main() {
    int number;
  while (true) {
      cin >> number;
      if (number < 0) {
          break;
      }
      cout << number << " "<< endl;
  }
return 0;

}