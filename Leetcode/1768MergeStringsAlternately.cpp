#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    
    string word1 = "abcd", word2 = "pqr";
    int n = word1.length()+word2.length();

    int maxi = max(word1.length(),word2.length());

    string str[n];
    int W1 = 0;

    for(int i = 0; i < n; i++)
    {
        if(W1<maxi)
        {
            if(W1<word1.length()) str->push_back(word1[W1]);
            if(W1<word2.length()) str->push_back(word2[W1]);
            
            W1++;
        }
        

    }

    for(int i = 0; i < n; i++)
    {
        cout<<str[i];
    }


    return 0;
}
