#include <iostream>
using namespace std ;
int main()
{
    // cout<<char(65);
    // int a = char('A') ;

    for (int i = 0; i < 5 ; i++)
    {
        for ( int j = 0; j < 10; j++)
        {
            

            (i==0 or i==4 or j ==0 or j==9) ? cout<<"* " : cout<<"  ";
        }
        cout<<endl;
    }
    
   
    return 0 ;
}




// #include <iostream>
// using namespace std ;
// int main()
// {
//     cout<<"Enter a number for table \n";
//     int num ;
//     cin>>num ;
//     for (int i = 1; i < 11; i++) // 1 2 3 4 5 
//     {
//         /* code */
//         cout<<num<<" x "<<i<<" = "<<i*num<<endl ;
//     }
    
    
//     return 0 ;
// }

//  5  0+  1+ 2+3+  4+5---10 ( n )
// 1
// 3
// 6 ---
// #include <iostream>
// using namespace std ;
// int main()
// {
//     int sum = 0 ;
//     for (int i = 1; i < 101; i++)
//     {
//         sum = i+sum ;
//     }
//     cout<<sum;
//     return 0 ;
// }