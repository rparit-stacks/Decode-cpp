//Input a string and concatenate with its reverse string and print it.
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
    string str = "Rohit parit";
    string str2 = str;

    reverse(str.begin(), str.end());

    string con = str2 + str;

    cout<<con;
}