#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter No. of strings : ";
    cin>>n;
    string str[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter string "<<i<<" : ";
        cin>>str[i];
    }
    int max = 0;

    for(int i=0; i<n; i++)
    {
        int x = stoi(str[i]);
        if(max<x) max = i;
    }
    cout<<max<<endl;



    

    
}