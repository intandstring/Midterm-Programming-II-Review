#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;
  if (num % 2 == 0){
    cout << num;
  } else {
    cout << num - 1;
  }
  return 0;
}