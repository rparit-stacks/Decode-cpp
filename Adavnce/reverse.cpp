#include<iostream>
using namespace std;

int main()
{
    int x, last, reverse = 0, sum = 0, product = 1;

    cout<<"Enter a number ";
    cin>>x;
    int num = x;
    for(int i = 1 ; x>0 ; i++)
    {
        last = x%10;
        sum = sum + last;
        product = product * last;
        reverse = reverse * 10;
        reverse = reverse + last;
        x = x/10;
    }
    cout<<reverse<<endl<<sum<<endl<<product<<endl;
    cout<<num+reverse;
        
    return 0;
}