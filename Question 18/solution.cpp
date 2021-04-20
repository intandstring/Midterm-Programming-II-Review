#include <iostream>
#include <cctype>
#include <cstdlib>

using namespace std;

class Digit {
private:
  int singledigit;

public:
  Digit()   {
    singledigit = 0;
  }

  int testDigit(int num)   {
    if (num > 10 || num < -10)     {
      return 0;
    } else {
      return num;
    }
  }

  Digit(int sd) {
    singledigit = testDigit(sd);
  }

  void setDigit(int new_sd) {
    singledigit = testDigit(new_sd);
  }

  int getDigit() {
    return singledigit;
  }
};

class IntNumber {

private:
  Digit *hugeint = new Digit[10000];
  int count;

public:
  IntNumber() {
    count = 1;
    hugeint[0] = Digit();
  }

  IntNumber(char *hi) {
    count = 0;

    if (hi[0] == '-') {
      if (hi[1] == '0'){
        int temp = 1;
        while (hi[temp] == '0'){
          temp++;
        }
        for (int i = temp; hi[i] != '\0'; i++) {
          if (isdigit(hi[i])) {
            hugeint[count] = Digit(int(hi[i]) - 48);
            count++;
          }
        }
      } else {
        for (int i = 1; hi[i] != '\0'; i++) {
          if (isdigit(hi[i])) {
            hugeint[count] = Digit(int(hi[i]) - 48);
            count++;
          }
        }
      }
      hugeint[0] = hugeint[0].getDigit() * -1;
    } else if (hi[0] == '+') {
        if (hi[1] == '0'){
          int temp = 1;
          while (hi[temp] == '0'){
            temp++;
          }
          for (int i = temp; hi[i] != '\0'; i++) {
            if (isdigit(hi[i])) {
              hugeint[count] = Digit(int(hi[i]) - 48);
              count++;
            }
          }
        } else {
          for (int i = 1; hi[i] != '\0'; i++) {
            if (isdigit(hi[i])) {
              hugeint[count] = Digit(int(hi[i]) - 48);
              count++;
            }
          }
        }
    } else if (hi[0] == '0'){
        int temp = 1;
        while (hi[temp] == '0'){
          temp++;
        }
        for (int i = temp; hi[i] != '\0'; i++) {
          if (isdigit(hi[i])) {
            hugeint[count] = Digit(int(hi[i]) - 48);
            count++;
          }
        }
    } else if (isdigit(hi[0])) {
        for (int i = 0; hi[i] != '\0'; i++) {
          if (isdigit(hi[i])) {
            hugeint[count] = Digit(int(hi[i]) - 48);
            count++;
          }
        }
    } else {
      hugeint[0] = Digit();
      count = 1;
    }
  }

  void display()
  {
    for (int i = 0; i < count; i++)
    {
      cout << hugeint[i].getDigit();
    }
  }
};

int main()
{
  char num[10000];
  cin >> num;
  IntNumber *number = new IntNumber(num);
  number->display();
  return 0;
}