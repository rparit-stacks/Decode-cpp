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
    
    stringstream ss(str);
    string temp;

    while(ss>>temp)
        cout<<" "<<temp<<endl;


    



}