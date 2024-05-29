#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s = "luffy is still joyboy";
    int count = 0;

    for(int i = s.length()-1; i>=0; i--)
    {
        if(s[i] != ' ') count++;
        else if(count > 0 && s[i] == ' ') break;
    }
    cout<<count;

return 0;
}