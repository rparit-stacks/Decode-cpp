#include<iostream>
using namespace std;

int factorial(int num)
{
    int n = 1;
    if(num == 0) return n;
    else n = num * factorial(num -1);
}


int main()
{
    int num = 9;

    cout<< factorial(num);
}