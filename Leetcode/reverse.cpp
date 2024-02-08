#include<iostream>

using namespace std;

int main()
{

    // int n  = -36598745;
    // int reverse, last, sum = 0;
    // if(n<0)
    // {
    //     n =-1*n;
    // }
    // while(n>0)
    // {
    //     last = n % 10; // get the rightmost digit of number
    //     reverse = sum * 10;
    //     sum = reverse + last;
    //     n /= 10;   // remove the rightmost digit from number

    // }

    // cout<<sum;

    string s = "MCMXCIV";

    int num = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'I')
            num += 1;
        else if (s[i] == 'V')
            num += 5;
        else if (s[i] == 'X')
            num += 10;
        else if (s[i] == 'L')
            num += 50;
        else if (s[i] == 'C')
            num += 100;
        else if (s[i] == 'D')
            num += 500;
        else 
            num += 1000;
    }

    cout<<num;
}
