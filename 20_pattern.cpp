#include <iostream>
using namespace std ;
int main()
{
    int a=1;

    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}