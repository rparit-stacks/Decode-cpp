//Given an array of strings. Check whether they are anagram or not.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s,t;
    int count = 0;
    cout<<"Enter s string: ";
    getline(cin,s);
    cout<<"Enter t string: ";
    getline(cin,t);

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s == t){
        cout<<"Strings are anagrams of each other."<<endl;
    }
    else{
        cout<<"Strings are not anagrams of each other."<<endl;
    }
}