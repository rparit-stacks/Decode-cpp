#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    string s;
    cout<<"Enter s string: ";
    getline(cin,s);
    // int max = 0;
    // char ch;
    // for(int i=0;i<s.length();i++)
    // {
    //     int count = 1;
    //     ch = s[i];
    //     for(int j=i+1;j<s.length();j++)
    //     {
    //         if(s[j]==s[i]) count++;
    //     }
    //     if(max<count) max = count;
    // }
    //  for(int i=0;i<s.length();i++)
    // {
    //     int count = 1;
    //     ch = s[i];
    //     for(int j=i+1;j<s.length();j++)
    //     {
    //         if(s[j]==s[i]) count++;
    //     }
    //     if(max==count) cout<<ch<<" "<<max<<endl;
    // }


    vector<int> str(26,0);

    for(int i=0;i<s.length();i++)
    {
        int ascii = (int)s[i] - 97;
        str[ascii]++;
    }
    int max = 0;
    for(int i=0;i<26;i++)
    {
        if(str[i] > max) max = str[i];
    }

   for(int i=0;i<26;i++)
   {
    int ascii = i+97;
    char ch = (char)ascii;
    if(str[i] == max) cout<<"alphabet "<<ch<<" counts "<<max<<" times"<<endl;
   }


    



}