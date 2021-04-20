#include <iostream>

using namespace std;

int main() {
  int number;
  int reverse = 0;
  while (cin >> number) {
    while(number != 0){
    reverse = reverse * 10 + (number % 10);
    number /= 10;
  }
  cout << reverse << endl;
  reverse = 0;
  }
  
  return 0;
}