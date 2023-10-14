//Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop
#include<iostream>
using namespace std;
int main()
{
    char i = 'A';
    while(i <= 'Z')
    {
        int j = (int)i;
        cout<<"The ASCII value of "<<i<<" = "<<j<<endl;
        i++;
    }
    return 0;
}