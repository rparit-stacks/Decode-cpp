#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    
    string word1 = "abcd", word2 = "pq";
    int n = word1.length()+word2.length();

    string str[n];
    int W1 = 0, W2=0;

    for(int i = 0; i < n; i++)
    {
        if(i==0) str[0] = word1[0];
        else if(i >= 0 && i%2 != 0)
            { 
                str[i] = word2[W1];
                W1++;
            }
        else 
            {
                str[i] = word1[W1];
                W2++;
            }
    }

    for(int i = 0; i < n; i++)
    {
        cout<<str[i];
    }

    cout<<W1<<" "<<W2<<" "<<n;
     

    return 0;
}
