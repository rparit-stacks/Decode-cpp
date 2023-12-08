#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

int main()
{
   
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    int len = str.length();
    cout<<str<<endl;
    reverse(str.begin(),str.begin()+len/2);
    cout<<str<<endl;

}