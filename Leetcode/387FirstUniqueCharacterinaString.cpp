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
    
    string s = "aabb";
    for(int i = 0; i<s.length(); i++){
        bool flag = false;
        for(int j = i+1; j<s.length(); j++)
        {
            if(s[i] == s[j])
                flag = true;
                continue;
        }
        if(flag == false)
        {
            cout<<i;
            break;
        }
        
}
    
return 0;
}