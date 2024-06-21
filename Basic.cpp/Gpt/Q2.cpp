//1. Create a C++ program that asks the user for their age using `cin`. Then, increment the age by 1 using the pre-increment operator and display the new age using `cout`.
#include<iostream>
using namespace std;
int main(){

    int x;
    cout<<"Enter Your age";
    cin>>x;
    ++x;
    cout<<x;

    return 0;

}