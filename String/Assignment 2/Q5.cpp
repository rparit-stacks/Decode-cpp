//Given a sentence ‘str’, return the word that is lexicographically maximum.

#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>

using namespace std;

int main()
{
    string s;
    
    cout<<"Enter s string: ";
    getline(cin,s);
    
    stringstream str(s);
    string temp;
    vector<string> words;
    while(str>>temp)
    {
        words.push_back(temp);
    }
    sort(words.begin(), words.end());
   
   int max = 0;
    for(int i = 0; i < words.size(); i++)
    {
        int sum = 0;
        for(int j = 0; j < words[i].size(); j++)
        {
            
            int ascii = (int)words[i][j];
            sum += ascii;
        }

        if(sum > max) max = sum;
    }


     for(int i = 0; i < words.size(); i++)
    {
        int sum = 0;
        for(int j = 0; j < words[i].size(); j++)
        {
            
            int ascii = (int)words[i][j];
            sum += ascii;
        }

        if(sum == max) cout<<words[i]<<" "<<max;
    }
}