#include <iostream>
using namespace std;

class Set
{
  public:
    Set() {
        for(int i = 0; i < 100; i++){
            element[i] = 0;
        }
        count = 0;
    }
    Set(const Set &s) { //copy 
        for(int i = 0; i < s.count; i++){
            element[i] = s.element[i];
        }
        count = s.count;
    }

    int add(const int num){
        //flags
        bool numFound = false;
        for(int i = 0; i < count; i++){
            if(element[i] == num){
                numFound = true;
                break;
            }
        }
        if(!numFound){
           element[count] = num;
           count++;
           return 1; 
        } else {
            return 0;
        }
    }

    int add(const Set s){
        bool numFound = false;
        int added = 0;
        for(int i = 0; i < s.count; i++){
            for(int j = 0; j < count; j++){
                if(s.element[i] == element[j]){
                    numFound = true;
                    break;
                }
            }
            if(!numFound){
                element[count] = s.element[i];
                count++;
                added++;
            }
            numFound = false;
        }
        return added;
    }

  	void display()
    {
      int j;
      for(j = 0; j < count; j ++)
        cout<<element[j]<<" ";
    }
  private:
  	int element[100];
  	int count;
};
