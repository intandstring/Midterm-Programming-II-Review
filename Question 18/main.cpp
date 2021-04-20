#include <iostream>

using namespace std;

class Digit
{
private:
  int num;

public:
  Digit() : num(0)
  {
  }
  Digit(int n)
  {
    setDigit(n);
  }

  int getDigit()
  {
    return num;
  }

  void setDigit(int n)
  {
    if (n > 0 && n < 10)
    {
      num = n;
    }
    else
    {
      num = 0;
    }
  }
};

class IntNumber
{
private:
  Digit number[1000];

public:
  int j = 0;
  int z = 0;
  IntNumber()
  {
    number[0] = 0;
  }

  IntNumber(char *num)
  {
    int i = 0;

    if (num[0] == '+') //+10000
    {
      j = 0; //positive
      i++;
    }
    if (num[0] == '-') //check if there is a number behind it.
    {
      j = 1; //negative
      i++;
    }

    while (num[i] == '0')
    {
      i++;
    }

    int index = 0;
    while (num[i] != '\n' && num[i] != '\0')
    {

      if (num[i] >= '0' && num[i] <= '9')
      {

        number[index].setDigit(num[i] - '0');
        index++;

        z = index - 1;
      }
      else
        break;

      i++;
    }
  }

  void display()
  {
    int i = 0;
    if (j == 1 && z != 0)
    {
      cout << "-";
    }

    while (i <= z)
    {
      cout << number[i].getDigit();
      i++;
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
