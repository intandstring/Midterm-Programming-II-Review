#include<iostream>
using namespace std;
const int MAXNUM=35;
char bitmap[MAXNUM][MAXNUM];
char str[2000];
int main()
{
//    freopen("E:\\c++\\oj\\t.txt","rt",stdin);
    int n;
    int x,y;
    int i,j;
    int cases;
    int p;
    cin>>n;
    for(cases=1;cases<=n;cases++)
    {
        for(i=0;i<MAXNUM;i++)
        {
            for(j=0;j<MAXNUM;j++)
            {
                bitmap[i][j]='.';
            }
        }
        cin>>x>>y;
        cin>>str;
        p=0;
        while(str[p]!='.')
        {
            switch(str[p])
            {
                case 'E':
                {
                    bitmap[x][y-1] = 'X';
                    x++;
                    break;
                }
                case 'N':
                {
                    bitmap[x][y] = 'X';
                    y++;
                    break;
                }
                case 'W':
                {
                    bitmap[x-1][y] = 'X';
                    x--;
                    break;
                }
                case 'S':
                {
                    bitmap[x-1][y-1] = 'X';
                    y--;
                    break;
                }
            }
            p++;
        }
        cout<<"Bitmap #"<<cases<<endl;
        for(j=31;j>=0;--j)
        {
            for(i=0;i<32;++i)
            {
                cout<<bitmap[i][j];
            }
            printf("\n");
        }
        printf("\n");
    }
}