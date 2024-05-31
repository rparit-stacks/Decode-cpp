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
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candy = INT_MIN;
        vector<bool> res;

        for(int i = 0; i<candies.size(); i++)
        {
            if(candies[i] > max_candy)  max_candy = candies[i];
        }

        for(int i = 0; i<candies.size(); i++)
        {
            if(candies[i] + extraCandies >= max_candy)
                res.push_back(true);
            else
                res.push_back(false);
        }

        return res;

        
    }
};
int main()
{
return 0;
}