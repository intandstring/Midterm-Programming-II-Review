#include <iostream>
#include <string>
using namespace std;

class Decode
{
  private:
    string numbers;
  
  public:
    Decode(string n){
      numbers = n;
    }

    string decode(){
      string words = "";
      string temp = "";
      char letter;
      for(int i = 0; i < numbers.length(); i+=3){
        temp = numbers.substr(i, 3);
        words += char(stoi(temp));
      }
      return words;
    }
};

int main() {
  string str;
  cin>>str;
  Decode *code = new Decode(str);
  cout<<code->decode();
  return 0;
}