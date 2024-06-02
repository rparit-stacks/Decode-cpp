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
    string s = "abbaca";
    string res;
    for(int i = 0; i<(s.length()-1); i++){
        if(i = 0){
            if(s[i] != s[i+1])
                res += s[i];
        }

        else if(i = s.length()-1){
            if(s[i] != s[i-1])
                res += s[i];
        }

        else{
            if(s[i] != s[i+1] && s[i] != s[i-1])
                res += s[i];
        }

    }

    cout<< res;

    return 0;
}