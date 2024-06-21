//4.Write a program that will ask the user to enter N integers. Find out the
// following:
// (i) Total number of positive integers
// (ii) Total number of negative integers
// (iii) Total number of integers equal zero

#include <iostream>
using namespace std;

int main() {
    int n, pi=0,ni=0,iz=0,temp;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i = 1; i <= n; i++ )
    {
        cout<<"Enter number "<<i<<" : ";
        cin>>temp;

        if(temp > 0) pi++;
        else if (temp < 0) ni++;
        else iz++;
    }
    cout<<"The positive integer are : " <<pi<<endl<<"The negative integer are : " <<ni<<endl<<"The number equal to zero are : "<<iz; 

    return 0;
}
