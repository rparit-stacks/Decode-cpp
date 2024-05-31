#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVowel(char c)
    {
        vector<char> vow = {'a','e','i','o','u','A', 'E', 'I', 'O', 'U'};
        for(int i = 0; i<vow.size(); i++)
        {
            if(c == vow[i]) return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int lo = 0;
        int high = s.length()-1;

        while(lo<high){
            if(isVowel(s[lo]) && isVowel(s[high]))
                swap(s[lo++],s[high--]);
            if(isVowel(s[lo]) == false) lo++;
            if(isVowel(s[high]) == false) high--;
        }

        return s;
    }
};

int main()
{
return 0;
}