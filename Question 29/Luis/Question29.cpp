#include <iostream>
using namespace std;

class Set
{
private:
  	int element[100];
  	int count;

public:
    Set() {
        for(int i = 0; i < 100; i++){
            element[i] = 0;
        }
        count = 0;
    }
    Set(const Set &a) { //copy
        for(int i = 0; i < a.count; i++){
            element[i] = a.element[i];
        }
        count = a.count;
    }

    int add(const int num){
        int found=0;
        for(int i=0;i<count;++i){
            if(element[i]==num){
                found++;
                break;
            }
        }
        if(found==0){
            element[count]=num;
            count++;
            return 1;
        }
        else return 0;
    }

    int add(const Set s){
        int added=0;
        for(int i=0;i<s.count;++i){
            added+=add(s.element[i]);
        }
        return added;
    }

    Set operator +(const Set s)
    {
        Set Union= Set(*this);
        Union.add(s);
        return Union;
    }

    Set operator -(const Set s)
    {
        Set Intersect;
        for(int i=0;i<count;++i){
            for(int j=0;j<s.count;++j){
                if(s.element[j]==element[i]){
                    Intersect.add(element[i]);
                }
            }
        }
        return Intersect;
    }

  	void display()
    {
      for(int j = 0; j < count; j ++)
        cout<<element[j]<<" ";
    }
};

int main(void)
{
    return 0;
}
