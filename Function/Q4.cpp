//Q4: Write a function to count the number of digits in a number and then print the square of this number.
#include<iostream>
using namespace std;
int square(int x)
{
    x = x*2;
    return x;
}
int count(int x)
{
   int count = 0;
   for(int i = 1; x>0; i++)
   {
    x=x/10;
    count++;
   }
   count = square(count);
   return count;
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<count(n);

}