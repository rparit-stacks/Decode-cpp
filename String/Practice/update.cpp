#include<iostream>
#include<string.h>

using namespace std;

int main()
{
   
    string str = "Rohit Parit";

    cout<<"Your given string is "<<str;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(i % 2 == 0)
        {
            str[i] = 'a';
        }
    }
        cout<<"Your given string is "<<str;


}