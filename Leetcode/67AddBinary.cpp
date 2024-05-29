#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int binaryToDec(string num)
{
    int n =  num.length()-1;
    int res = 0;
    int i = 0;
    while(n>=0)
        res += pow(2,i++) * (num[n--] - '0');
    return res;
}
int main()
{

    string s1 = "110011";
    string s2 = "111000";
    string s3 = "";
    int carry = 0;

    for(int i = s1.length()-1; i>=0; i--)
    {
        for(int j = s2.length()-1; j>=0; j--)
        {
            if(s1[i] == '1' && s2[j] == '0') 
            {
                if(carry == 1)
                    s3 += '0';
                else 
                    s3 += '1';
            }
            if(s1[i] == '0' && s2[j] == '1') 
            {
                if(carry == 1)
                    s3 += '0';
                else 
                    s3 += '1';
            }
            if(s1[i] == '0' && s2[j] == '0') 
            {
                if(carry == 1)
                    s3 += '1';
                else 
                    s3 += '0';
            }
            if(s1[i] == '1' && s2[j] == '1') 
            {
                s3 += '1';
                carry++;
            }
        }

        
    }
cout<<s3;






return 0;
}