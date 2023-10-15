#include<iostream>
using namespace std;

int main(){

    int num, sum = 0, reverse = 0, last;
    cout<<"Enter a number: ";
    cin>>num;
    int count = num;

    for (int i = i; num > 0; i++)
    {
        last = num%10;
        reverse = reverse * 10;
        reverse = reverse + last;
        num /= 10;
        
    }
    cout<<"The reverse is : " <<reverse<<endl<<"The sum of reverse and number is : "<<count+reverse<<"["<<reverse<<" + "<<count<<"]";

    return 0;
}