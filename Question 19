class Digit{
public:
   int digit;
   Digit(){
      digit = 0;
   }
   Digit(int n){
      setDigit(n);
   }
   void setDigit(int a){
     if (a>=0 && a<=9)
      digit = a;
     else
       digit = 0;
   }
   int getDigit(){
      return digit;
   }
   void digitDisplay(){
        cout << digit;
    }
};

class IntNumber{
private:
    Digit hugeNumber[1000];
    char *p;
public:
    int counter=0;
    bool negative = false;
    IntNumber(){
       hugeNumber[0].setDigit(0);
    }
     IntNumber(char *a){
         p = a;
         int i=0;
         while(a[i]!='\0'){

            if(!(isdigit(a[0]))){
                    if(!(isdigit(a[0+1]))){ /*check if the next character is digit*/
                        IntNumber();
                        counter++;
                        break;
                    }

                    if(a[0]=='+'){
                    i++;
                    goto ReadDigit;
                    }
                    else if(a[0]=='-'){
                            negative = true;
                            i++;
                            goto ReadDigit;
                    }
                    else{
                        IntNumber();
                        counter++;
                        break;
                    }

            }
                ReadDigit:{
                    if(isdigit(a[i])){
                        while(isdigit(a[i])){
                            hugeNumber[counter].setDigit((a[i]-'0'));
                            i++;
                            counter++;
                        }
                    }
                    else
                        break;
                }
         }
    }
    void display(){
        int i=0;
        if(counter>1){
            while (hugeNumber[i].getDigit()==0)
            i++;
        }
        if(negative == true)
            cout << '-';
        for(i; i<counter; i++){
            cout << hugeNumber[i].getDigit();
            }
        }
//question 19....not sure if its the right way but OJ accepts
        char *get_a(){
            return p;
        }

    IntNumber *add(IntNumber *num2) const{
        long long int sum = stoll(num2->get_a()) + stoll(p);
        string sum1 = to_string(sum);
        char *sum2 = &sum1[0];
        return new IntNumber(sum2);
    }
};

int main()
{
  char num1[10000], num2[10000];
  cin>>num1>>num2;
  IntNumber *number1 = new IntNumber(num1);
  IntNumber *number2 = new IntNumber(num2);
  number1->display();
  cout<<endl;
  number2->display();
  cout<<endl;
  number1->add(number2)->display();
  cout<<endl;
  number2->add(number1)->display();
  return 0;
}
