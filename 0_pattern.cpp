// #include <iostream>
// using namespace std ;
// int main()
// {
//     int i,j;
    
//     for(int i=1;i<=4;i++)
//     {
       
//         for(j=1;j<=i;j++){
//            cout<<"*";
//         }
//        cout<<"\n";
//     } 
   
//     return 0 ;
// }
#include <iostream>
using namespace std ;
int main()
{
    int i,j;
    
    for( i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
           cout<<"* ";
        }
       cout<<"\n";
    } 
   
    return 0 ;
}
