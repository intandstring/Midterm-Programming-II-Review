#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float distance, time;
  cin >> distance >> time;
  cout << fixed << setprecision(6) << distance/time;
  return 0;
}