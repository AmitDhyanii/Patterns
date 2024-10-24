// #include <iostream>
// using namespace std ;
// int main()
// {
//     int i,j;
//     for(i=1; i <=4; i++)
//     {
//         for(j=1;j<=4-i;j++)
//         {
//             cout<<" " ;
//         }
//             for(int k = i; k >= 1; k--)
//             {
//                 cout << "*";
//             }
//         cout<< endl ;
//     }
//     return 0 ;
// }
#include <iostream>
using namespace std ;
int main()
{
    int i,j;
    for(i=1; i <=4; i++)
    {
        for(j=1;j<=4-i;j++)
        {
            cout<<" " ;
        }
            for(int j = 1; j <= i; j++)
            {
                cout << "*";
            }
        cout<< endl ;
    }
    return 0 ;
}