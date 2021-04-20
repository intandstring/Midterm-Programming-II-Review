#include <iostream>
using namespace std;

class Digit {
  private:
    int singledigit;
  public:
    Digit(){
      singledigit = 0;
    }

    int testDigit(int num){
      if (num > 10 || num < -10){
        return 0;
      } else {
        return num;
      }
    }

    Digit(int sd){
      singledigit = testDigit(sd);
    }

    void setDigit(int new_sd){
      singledigit = testDigit(new_sd);
    }

    int getDigit(){
      return singledigit;
    }
};

int main(){

  return 0;
}