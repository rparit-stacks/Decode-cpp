#include<iostream>
using namespace std;
int main() 
{

    int sum=0, a=1, b=1, num;
    cout << "Enter the number of terms you want in Fibonacci series: [>0]";
    cin >>num;
    cout << a <<endl;

    for(int i = 1; i<=num-1; i++)
    {
        
        sum = a + b;
        a = b;
        b = sum;
        cout<<a<<endl;
    }
}
