//Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter str string: ";
    getline(cin,str);
    
    sort(str.begin(), str.end());

    cout<<str[(str.size())-2];

}