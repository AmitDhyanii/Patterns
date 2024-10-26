#include <iostream>
using namespace std ;
int main()
{
    int i,j;
    int num=10;
    for(int i=4;i>=1;i--)
    {
       for(j=1;j<=4-i;j++)
       {
            cout<<" ";
       }
        for(j=1;j<=i;j++)
        {
           cout<<num;
           num--;
        }
       cout<<"\n";
    } 
    return 0;
}

