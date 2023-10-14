//Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop
#include<iostream>
using namespace std;
int main()
{
    

    for( char i = 'A'; i <= 'Z'; i++)
    {
        int j = (int)i;
        cout<<"The ASCII value of "<<i<<" = "<<j<<endl;
    }
    return 0;
}