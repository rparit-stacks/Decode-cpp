#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
class Solution {
public:
bool checkPalindrom(string s)
{
    int i = 0, j = s.length()-1;
    while(i<=j)
    {
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    
    return true;
}
    bool isPalindrome(string s) {
        for(int i = 0; i<s.length(); i++)
  {
      if(s[i] >=65 && s[i] <= 90)
        s[i] = (int)s[i] + 32;
  }
   string palind;

        for(int i = 0, j = 0; i<s.length();i++)
        {
            if(s[i] >= 97 && s[i] <=122 || s[i] >= 48 && s[i] <=57)
            {
                palind += s[i];
                j++;
            }
        }
   
    
    return checkPalindrom(palind);
        
    }
};