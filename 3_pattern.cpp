#include <iostream>
using namespace std ;
int main()
{
    int i,j;
    for(i=4;i >= 1;i--)
    {
        for(j=1;j<=4-i;j++)
        {
            cout<<" " ;
        }
            for(int k = i; k >= 1; k--)
            {
                cout << "*";
            }
        cout<< endl ;
    }
    return 0 ;
}
