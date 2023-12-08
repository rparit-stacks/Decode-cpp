//Input a string of length n and count all the consonants in the given string.

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    int n = str.length();
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
        {
            count++;
        }
    }
    cout<<"Number of consonants in the string: "<<count<<endl;

}