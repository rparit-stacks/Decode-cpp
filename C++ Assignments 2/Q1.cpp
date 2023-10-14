//Find the output for this code. Let input:- 2 3 6
#include<iostream>
using namespace std;   
int main() {
    int a,b,m;
    cout<<"EnterTwo Numbers : "<<endl;
    cin>>a>>b;
    cout<<"Enter a number used for mode : "<<endl;
    cin>>m;

    int Z = (a * b) % m;
    cout << "Output is: " << Z;

    return 0;
}