#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

int main()
{
   
    string str;
    int count = 0;
    cout<<"Enter an even string: ";
    getline(cin,str);

    int len = str.length();

    for(int i = 0; i < len; i++)
    {
        if ( i == 0 )
        {
            if(str[i]!=str[i+1]) count++;
        }
        else if( i == len-1)
        {
            if(str[i]!=str[i-1]) count++;
        }
        else if(str[i] != str[i+1] && str[i] != str[i-1])
        {
            count++;
        }
    }

    cout<<count;
}