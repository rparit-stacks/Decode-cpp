//Input a string of even length and reverse the second half of the string.
#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

int main()
{
   
    string str;
    cout<<"Enter an even string: ";
    getline(cin,str);

    int len = str.length();
    cout<<str<<endl;
    reverse(str.begin()+len/2,str.end());
    cout<<str<<endl;
}