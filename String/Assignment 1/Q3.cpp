//Check whether the given string is palindrome or not.

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
   
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    string rev = str;
    reverse(str.begin(), str.end());

    if(rev == str){
        cout<<"The given string is a palindrome."<<endl;
    }
    else{
        cout<<"The given string is not a palindrome."<<endl;
        }
        return 0;

    

}