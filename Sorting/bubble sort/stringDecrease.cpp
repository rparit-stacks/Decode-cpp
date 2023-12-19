#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str= "ABCRTRWUQBXZYYXZYXYZY";

    string NEWstr;
    for(int i = 0; i<str.length(); i++)
    {
        if(str[i] >= 'X' )
        NEWstr.push_back(str[i]);
    }

    for(int i = 0; i<NEWstr.length()-1; i++)
    {
        bool flag = true;
        for(int j = 0; j<NEWstr.length()-1-i; j++)
        {
            if(NEWstr[j] < NEWstr[j+1]){
                swap(NEWstr[j],NEWstr[j+1]);
                flag = false;
            }
            
        }
    }

      for(int j = 0; j<NEWstr.length()-1; j++)
        {
            cout<<NEWstr[j]<<" ";
        }


}