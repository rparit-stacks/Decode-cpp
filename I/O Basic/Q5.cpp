//WAP to find the difference between ASCII of two characters ,take them as input .
#include<iostream>
using namespace std;   
int main() {
    char a,b;
    cout<<"Enter Two Capital words : ";
    cin>>a>>b;
    int c = (int)a;
    int d = (int)b;
    cout<<a<<"("<<c<<") - "<<b<<" ("<<d<<") = "<<c-d;
    return 0;
}