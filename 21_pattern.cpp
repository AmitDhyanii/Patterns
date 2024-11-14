#include <iostream>
using namespace std ;
int main()
{
    int n=5;
    int i,j,k=n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=k)
                cout<<"* ";
            else
                cout<<" ";
        }
        k--;
        cout<<endl;
    }
    return 0 ;
}