#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
#include <climits>
using namespace std;

int main()
{
    string str;
    int count=1;
    vector<string> vec;
    cout<<"Enter s string: ";
    getline(cin,str);

    stringstream strstm(str);

    /* The code is using a `stringstream` object `strstm` to extract individual words from the input
    string `str`. */
    string temp;
    while(strstm>>temp)
    {
        vec.push_back(temp);
    }

    sort(vec.begin(),vec.end());
    int maxc = 1;
    for(int i=1;i<vec.size();i++)
    {
       if(vec[i]==vec[i-1]) count++;
       else count = 1;
       maxc = max(maxc,count);
    }
     for(int i=1;i<vec.size();i++)
    {
       if(vec[i]==vec[i-1]) count++;
       else count = 1;
       if(maxc==count) cout<<vec[i]<<" "<<maxc<<endl;
    }

    
}