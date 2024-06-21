// #include<iostream>
// using namespace std;

// int main()
// {
//     int a;

//     cout<<"Enter A number : ";
//     cin>>a;

//     for(int i = a-1; i>1 ; i--)
//     {
//         if(a%i == 0)
//         {
//             cout<<i<<endl;
//             break;
//         } 
        
//     }

        
//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int a, count;

    cout<<"Enter A number : ";
    cin>>a;

    for(int i = 1; i<a ; i++)
    {
        if(a%i == 0)
        {
            count = i;
        } 
        
    }
    cout<<count;

        
    return 0;
}