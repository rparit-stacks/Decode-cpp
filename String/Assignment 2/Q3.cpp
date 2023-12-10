//Input a string and return the number of substrings that contain only vowels.
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    cout << "Enter the string "<<endl;
    string str;
    getline(cin,str);

    int i=0, count = 0;
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='u')
        {
            count++;
        }
        i++;
    }
    cout << "The number of vowels in the string is "<<count<<endl;
}