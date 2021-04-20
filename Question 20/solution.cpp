#include <iostream>
#include <string>

using namespace std;

class Encode
{
  private:
    string original;
  public:
    Encode(string og){
      original = og;
    }
    string encode(){
      int temp = 0;
      string numbers = "";
      for (int i = 0; i < original.length(); i++){
        temp = int(original[i]);
        if (temp < 100){
          numbers = numbers + "0" + to_string(temp);
        } else {
          numbers += to_string(temp);
        }
      }
      return numbers;
    }
};
int main() {
  string str;
  getline(cin, str);
  Encode *code = new Encode(str);
  cout<<code->encode();
  return 0;
}
